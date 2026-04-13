/*
 * XREFs of ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x180003598
 * Callers:
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180015BD8 (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::ThreadLocalData::~ThreadLocalData(wil::details_abi::ThreadLocalData *this)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax

  v1 = *((_QWORD *)this + 3);
  v3 = v1 + 88LL * *((unsigned __int16 *)this + 16);
  if ( v1 != v3 )
  {
    v4 = v1 + 72;
    do
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)v4);
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      v4 += 88LL;
    }
    while ( v4 - 72 != v3 );
  }
  v6 = GetProcessHeap();
  HeapFree(v6, 0, *((LPVOID *)this + 3));
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
