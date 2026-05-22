/*
 * XREFs of ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800161F4
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180015D80 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180011EA4 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180011FC4 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(
        __int64 a1)
{
  void *v2; // rsi
  HANDLE ProcessHeap; // rax
  void *v4; // rcx
  const char *v5; // r9
  void *v6; // rcx
  const char *v7; // r9
  void *v8; // rcx
  const char *v9; // r9
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
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x879,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v5);
LABEL_11:
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x879,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v7);
    goto LABEL_12;
  }
  v6 = *(void **)(a1 + 16);
  if ( v6 && !CloseHandle(v6) )
    goto LABEL_11;
  v8 = *(void **)(a1 + 8);
  if ( !v8 || CloseHandle(v8) )
    return a1;
LABEL_12:
  wil::details::in1diag3::_FailFast_GetLastError(
    retaddr,
    (void *)0x879,
    (__int64)"internal\\sdk\\inc\\wil\\resource.h",
    v9);
  return wistd::_Func_base<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor'();
}
