/*
 * XREFs of _IsTopLevelWindow @ 0x1C0065520
 * Callers:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0008808 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00449AC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxUpdateTray @ 0x1C0055370 (xxxUpdateTray.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0065344 (ShouldUseLogPixelsForWindowMetrics.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0066B60 (IsWindowBroadcastingDpiToChildrenX.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008D2D0 (NtUserUpdateLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     FVisCountable @ 0x1C0093070 (FVisCountable.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D5DB0 (NtUserSetBrokeredForeground.c)
 *     NtUserGetForegroundWindow @ 0x1C00E1330 (NtUserGetForegroundWindow.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E6578 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E6868 (UpdateMonitorForWindowAndChildren.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ShouldHaveShadow @ 0x1C010EE2C (ShouldHaveShadow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C01143B4 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0114980 (NtUserSetWindowCompositionTransition.c)
 *     NtUserBeginLayoutUpdate @ 0x1C011AE80 (NtUserBeginLayoutUpdate.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0134ADC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01BC5F4 (FeedbackGetWindowSetting.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01C2F48 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01C3D0C (IsNonClientDpiScalingEnabledX.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01C44F0 (xxxEnableNonClientDpiScaling.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D7300 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7ED0 (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01E3CA0 (NtUserDisableImmersiveOwner.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C01E7360 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetFallbackForeground @ 0x1C01EB6C0 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C01EC280 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01ED050 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01F7AA4 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     GetGestureConfigSettings @ 0x1C01F9690 (GetGestureConfigSettings.c)
 *     GetDisplayAffinity @ 0x1C0212C48 (GetDisplayAffinity.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 16);
    }
    if ( v1 == v4 )
      return 1LL;
  }
  return result;
}
