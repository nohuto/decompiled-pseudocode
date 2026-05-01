/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180082BF0
 * Callers:
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
 * Callees:
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( wil::details::g_pfnRunFunctorWithExceptionFilter )
    return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
  else
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
}
