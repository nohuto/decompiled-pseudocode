/*
 * XREFs of ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18001F2C0
 * Callers:
 *     ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x18001F350 (-BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z.c)
 *     ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x1802C40B0 (-ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x1802C4B58 (-CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1802C7A30 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802C89C0 (-MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1802C9070 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___::Run @ 0x1802C9E50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___--Run.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1802CA400 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802CA710 (-ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1802CAB60 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x1802CF9F0 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TabletModePositioner::IsTabletMode(TabletModePositioner *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 58) != 1 || *((_DWORD *)this + 59) != 1 )
    return 0;
  return result;
}
