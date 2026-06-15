/*
 * XREFs of ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009A4AC
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18009AC90 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x18009A614 (-Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        _QWORD *a1,
        void *a2)
{
  wil::details_abi::ThreadLocalData **v2; // rdi
  wil::details_abi::ThreadLocalData **v4; // r14
  wil::details_abi::ThreadLocalData *v5; // rbp
  wil::details_abi::ThreadLocalData *v6; // rbx
  HANDLE ProcessHeap; // rax
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  wil::details *v10; // rcx

  v2 = (wil::details_abi::ThreadLocalData **)(a1 + 5);
  v4 = (wil::details_abi::ThreadLocalData **)(a1 + 15);
  while ( v2 != v4 )
  {
    v5 = *v2;
    while ( v5 )
    {
      v6 = v5;
      v5 = (wil::details_abi::ThreadLocalData *)*((_QWORD *)v5 + 6);
      wil::details_abi::ThreadLocalData::Clear(v6);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v6);
    }
    *v2++ = 0LL;
  }
  v8 = (wil::details *)a1[3];
  if ( v8 )
    wil::details::CloseHandle(v8, a2);
  v9 = (wil::details *)a1[2];
  if ( v9 )
    wil::details::CloseHandle(v9, a2);
  v10 = (wil::details *)a1[1];
  if ( v10 )
    wil::details::CloseHandle(v10, a2);
}
