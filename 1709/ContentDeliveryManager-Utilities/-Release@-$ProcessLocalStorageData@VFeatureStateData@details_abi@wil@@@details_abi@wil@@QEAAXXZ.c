/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800153F8
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180014E48 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800BDCD0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002F4C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002F74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180003038 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000A0A8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18000A330 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  const char *v4; // r9
  DWORD LastError; // esi
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  void *v10; // rbp
  HANDLE ProcessHeap; // rax
  void *v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  void *v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  void *v18; // rcx
  __int64 v19; // r8
  const char *v20; // r9
  HANDLE v21; // rax
  __int64 v22; // r8
  const char *v23; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (void *)*((_QWORD *)lpMem + 1);
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_7;
    if ( v3 != 128 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA82,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v4);
      __debugbreak();
    }
  }
  if ( (v3 & 0xFFFFFF7F) != 0 )
    v2 = 0LL;
LABEL_7:
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(lpMem + 16));
    if ( v2 )
    {
      LastError = GetLastError();
      if ( !ReleaseMutex(v2) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v7, v8);
        __debugbreak();
      }
      SetLastError(LastError);
    }
    v2 = 0LL;
    if ( wil::details::g_processShutdownInProgress )
      goto LABEL_28;
    v9 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v9 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( v9 )
    {
LABEL_28:
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 32));
    }
    else
    {
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 32));
      v10 = (void *)*((_QWORD *)lpMem + 37);
      if ( v10 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v10);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 232));
      wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(lpMem + 40));
      v12 = (void *)*((_QWORD *)lpMem + 3);
      if ( v12 && !CloseHandle(v12) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v13, v14);
        __debugbreak();
      }
      v15 = (void *)*((_QWORD *)lpMem + 2);
      if ( v15 && !CloseHandle(v15) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v16, v17);
      v18 = (void *)*((_QWORD *)lpMem + 1);
      if ( v18 && !CloseHandle(v18) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v19, v20);
        __debugbreak();
      }
      v21 = GetProcessHeap();
      HeapFree(v21, 0, lpMem);
    }
  }
  if ( v2 )
  {
    if ( !ReleaseMutex(v2) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v22, v23);
      __debugbreak();
    }
  }
}
