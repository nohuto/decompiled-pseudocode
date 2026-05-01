/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800049C0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180083184 (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x1800832C0 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180083400 (-PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?SubscribeToServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180083550 (-SubscribeToServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PerformDelayedInitialization@DesktopBlueLightReductionManager@@UEAAJXZ @ 0x1800838E0 (-PerformDelayedInitialization@DesktopBlueLightReductionManager@@UEAAJXZ.c)
 *     ?UnsubscribeFromServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180083A20 (-UnsubscribeFromServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShutdownServices@DesktopBlueLightReductionManager@@UEAAJPEAUIProfferService@@@Z @ 0x180083B60 (-ShutdownServices@DesktopBlueLightReductionManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x180083CA0 (-OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z.c)
 *     ?MonitorAdded@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180083E70 (-MonitorAdded@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180083FB0 (-DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 *     ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1800840F0 (-OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1800870B8 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x18009FB50 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1800D3674 (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D37F0 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?FlushShellActivities@TaskFlowImmersiveShellBroker@@UEAAJXZ @ 0x1800D41A0 (-FlushShellActivities@TaskFlowImmersiveShellBroker@@UEAAJXZ.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000575C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     memset @ 0x180194E50 (memset.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rdi
  char v2; // r14
  signed __int64 i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v8; // rsi
  HANDLE ProcessHeap; // rax
  void *v10; // rax
  signed __int64 v11; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  i = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v4 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v13 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v4, &v13) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v13;
      }
    }
    v5 = *(_QWORD *)(v1 + 8);
    v6 = v5 ? v5 + 32 : 0LL;
    if ( v6 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v6 + 8 * v8 + 8); i; i = *(_QWORD *)(i + 48) )
      {
        if ( *(_DWORD *)(i + 40) == CurrentThreadId )
          goto LABEL_20;
      }
      if ( v2
        && (ProcessHeap = GetProcessHeap(), v10 = HeapAlloc(ProcessHeap, 0, 0x38uLL), (i = (signed __int64)v10) != 0) )
      {
        memset(v10, 0, 0x28uLL);
        *(_WORD *)i = 40;
        *(_DWORD *)(i + 4) = 0;
        *(_QWORD *)(i + 8) = 0LL;
        *(_DWORD *)(i + 16) = 0;
        *(_QWORD *)(i + 24) = 0LL;
        *(_DWORD *)(i + 32) = 0;
        *(_DWORD *)(i + 40) = CurrentThreadId;
        *(_QWORD *)(i + 48) = 0LL;
        _m_prefetchw((const void *)(v6 + 8 * v8 + 8));
        do
        {
          v11 = *(_QWORD *)(v6 + 8 * v8 + 8);
          *(_QWORD *)(i + 48) = v11;
        }
        while ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8 * v8 + 8), i, v11) );
      }
      else
      {
        i = 0LL;
      }
LABEL_20:
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = v6 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)i;
}
