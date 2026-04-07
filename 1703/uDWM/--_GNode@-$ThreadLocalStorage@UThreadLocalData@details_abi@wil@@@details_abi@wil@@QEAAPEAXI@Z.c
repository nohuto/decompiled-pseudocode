/*
 * XREFs of ??_GNode@?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180070C3C
 * Callers:
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180070B98 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::Node::`scalar deleting destructor'(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = v1 + 88LL * *(unsigned __int16 *)(a1 + 32);
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
  HeapFree(v6, 0, *(LPVOID *)(a1 + 24));
  result = a1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
