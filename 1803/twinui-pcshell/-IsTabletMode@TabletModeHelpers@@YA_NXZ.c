/*
 * XREFs of ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180085F20
 * Callers:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180085D24 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18020994C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18020F0C0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z @ 0x18020FBE8 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18021D688 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI@Z @ 0x18021F2F0 (-TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802267E4 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x180284B70 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1802C9284 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1802D0CE0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E2374 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x180085F48 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 */

char __fastcall TabletModeHelpers::IsTabletMode(TabletModeHelpers *this, enum _TABLETMODESTATE *a2)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v4, a2) >= 0 )
    return v4 == 1;
  return v2;
}
