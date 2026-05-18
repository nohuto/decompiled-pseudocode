/*
 * XREFs of ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x18000664C
 * Callers:
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180006F40 (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x18000737C (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::~ThreadLocalData(wil::details_abi::ThreadLocalData *this)
{
  __int64 v2; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v4; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(
    &v5,
    *((_QWORD *)this + 3),
    *((unsigned __int16 *)this + 16));
  if ( v5 != v6 )
  {
    v2 = v5 + 72;
    do
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)v2);
      *(_QWORD *)v2 = 0LL;
      *(_QWORD *)(v2 + 8) = 0LL;
      v2 += 88LL;
    }
    while ( v2 - 72 != v6 );
  }
  v4 = GetProcessHeap();
  HeapFree(v4, 0, *((LPVOID *)this + 3));
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
