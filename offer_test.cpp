#include <iostream>
class A {
    private:
    int value;
    public:
    A(int n){
        value= n;
    }
    A(A other){
        value = other.value;
    }
    void print(){
        std::cout<<value<<std::end;
    }
};

class CMyString{
    public:
    CMyString(char *pData = nullptr);
    CMyString(const CMyString& str);
    ~CMyString(void);
    private:
    char *m_pData;
}
CMyString& CMyString::operator=(const CMyString &str){
    if(this==&str){
        return *this;

    }
    delete []m_pData;
    m_pData = nullptr;
    m_pData = new char[strlen(str.m_pData)+1];
    strcpy(m_pData, str.m_pData);
    return *this;
}
bool duplicate(int nums[], int length, int* duplicate){
    if(nums == nullptr ||length<=0){
        return fasle;
    }
    for(int i =0;i<length;i++){
        if(nums[i]<0||nums[i]>length-1)
        return false;
    }
    for(int i<0;i<length;++i){
        while(nums[i]!=i){
            if(nums[i]==nums[nums[i]]){
                *duplicate= nums[i]
                return true;
            }
            int temp = nums[i];
            nums[i]= nums[temp];
            nums[temp]= temp;
        }
    }
    return false;
}
int main(){
    int a1[]={1,2,3,4,5}
    std::cout<<a1<<endl;
    return 0;
}