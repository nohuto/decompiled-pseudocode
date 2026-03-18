/*
 * XREFs of ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x140004728
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1400058F8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1400047BC (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x14000499C (-Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140004A2C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        wil::details **a1)
{
  wil::details_abi::ThreadLocalData **v1; // rdi
  wil::details_abi::ThreadLocalData **v3; // r14
  wil::details_abi::ThreadLocalData *v4; // rbp
  wil::details_abi::ThreadLocalData *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rdx
  wil::details *v8; // rcx

  v1 = a1 + 5;
  v3 = a1 + 15;
  while ( v1 != v3 )
  {
    v4 = *v1;
    while ( v4 )
    {
      v5 = v4;
      v4 = (wil::details_abi::ThreadLocalData *)*((_QWORD *)v4 + 6);
      wil::details_abi::ThreadLocalData::Clear(v5);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    *v1++ = 0LL;
  }
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)(a1 + 2));
  v8 = a1[1];
  if ( v8 )
    wil::details::CloseHandle(v8, v7);
}
