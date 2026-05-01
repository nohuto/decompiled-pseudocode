/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180007B08
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800075C4 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x180044060 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002E78 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002E90 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180002F5C (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180005D98 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180006020 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  DWORD LastError; // esi
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // eax
  void *v12; // rbp
  HANDLE ProcessHeap; // rax
  void *v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  void *v17; // rcx
  __int64 v18; // r8
  const char *v19; // r9
  void *v20; // rcx
  __int64 v21; // r8
  const char *v22; // r9
  HANDLE v23; // rax
  __int64 v24; // r8
  const char *v25; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (void *)*((_QWORD *)lpMem + 1);
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_7;
    if ( v3 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
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
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v9, v10);
        __debugbreak();
      }
      SetLastError(LastError);
    }
    v2 = 0LL;
    if ( wil::details::g_processShutdownInProgress )
      goto LABEL_28;
    v11 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v11 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( v11 )
    {
LABEL_28:
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 32));
    }
    else
    {
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 32));
      v12 = (void *)*((_QWORD *)lpMem + 37);
      if ( v12 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v12);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 232));
      wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(lpMem + 40));
      v14 = (void *)*((_QWORD *)lpMem + 3);
      if ( v14 && !CloseHandle(v14) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v15, v16);
        __debugbreak();
      }
      v17 = (void *)*((_QWORD *)lpMem + 2);
      if ( v17 && !CloseHandle(v17) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v18, v19);
      v20 = (void *)*((_QWORD *)lpMem + 1);
      if ( v20 && !CloseHandle(v20) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v21, v22);
        __debugbreak();
      }
      v23 = GetProcessHeap();
      HeapFree(v23, 0, lpMem);
    }
  }
  if ( v2 )
  {
    if ( !ReleaseMutex(v2) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v24, v25);
      __debugbreak();
    }
  }
}
