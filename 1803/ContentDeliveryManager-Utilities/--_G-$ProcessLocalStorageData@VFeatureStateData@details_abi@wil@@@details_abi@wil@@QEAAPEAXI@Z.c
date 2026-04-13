/*
 * XREFs of ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180017E98
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180017548 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032AC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000A8F8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18000AB80 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(
        __int64 a1)
{
  void *v2; // rsi
  HANDLE ProcessHeap; // rax
  void *v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  void *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  void *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(a1 + 32));
  v2 = *(void **)(a1 + 296);
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(a1 + 40));
  v4 = *(void **)(a1 + 24);
  if ( v4 && !CloseHandle(v4) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v5, v6);
LABEL_11:
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v8, v9);
    goto LABEL_12;
  }
  v7 = *(void **)(a1 + 16);
  if ( v7 && !CloseHandle(v7) )
    goto LABEL_11;
  v10 = *(void **)(a1 + 8);
  if ( v10 && !CloseHandle(v10) )
  {
LABEL_12:
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v11, v12);
    JUMPOUT(0x180017F7FLL);
  }
  return a1;
}
