/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800073E8
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180007A9C (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x180038440 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002CC0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002CE8 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180002DB0 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180005AE8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180007C08 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(_QWORD *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  DWORD LastError; // esi
  BOOL v9; // eax
  __int64 v10; // r8
  const char *v11; // r9
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  HANDLE ProcessHeap; // rax
  __int64 v15; // r8
  const char *v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (void *)lpMem[1];
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_6;
    if ( v3 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
      goto LABEL_20;
    }
  }
  if ( (v3 & 0xFFFFFF7F) != 0 )
    v2 = 0LL;
LABEL_6:
  if ( (*(_DWORD *)lpMem)-- != 1 )
    goto LABEL_16;
  wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(lpMem + 2));
  if ( v2 )
  {
    LastError = GetLastError();
    v9 = ReleaseMutex(v2);
    v12 = retaddr;
    if ( v9 )
    {
      SetLastError(LastError);
      goto LABEL_10;
    }
LABEL_20:
    wil::details::in1diag3::_FailFast_GetLastError(v12, (void *)0x883, v10, v11);
    goto LABEL_21;
  }
LABEL_10:
  v2 = 0LL;
  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_15;
  v13 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
  if ( wil::details::g_pfnRtlDllShutdownInProgress )
    v13 = wil::details::g_pfnRtlDllShutdownInProgress();
  if ( v13 )
  {
LABEL_15:
    wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 4));
  }
  else
  {
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(lpMem);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
LABEL_16:
  if ( v2 && !ReleaseMutex(v2) )
  {
LABEL_21:
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x883, v15, v16);
    JUMPOUT(0x180007519LL);
  }
}
