/*
 * XREFs of ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x18006D074
 * Callers:
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18006CC00 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::ThreadLocalData::Clear(wil::details_abi::ThreadLocalData *this)
{
  char *v1; // rbx
  char *v3; // rsi
  char *v4; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax

  v1 = (char *)*((_QWORD *)this + 3);
  v3 = &v1[88 * *((unsigned __int16 *)this + 16)];
  if ( v1 != v3 )
  {
    v4 = v1 + 72;
    do
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)v4);
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      v4 += 88;
    }
    while ( v4 - 72 != v3 );
    v1 = (char *)*((_QWORD *)this + 3);
  }
  v6 = GetProcessHeap();
  HeapFree(v6, 0, v1);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
