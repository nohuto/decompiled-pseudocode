/*
 * XREFs of _IsTopLevelWindow @ 0x1C00626F0
 * Callers:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0003E18 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00170BC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxUpdateTray @ 0x1C0019CC0 (xxxUpdateTray.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     FVisCountable @ 0x1C0022140 (FVisCountable.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C005F568 (ShouldUseLogPixelsForWindowMetrics.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00626B0 (IsTopLevelOrLayeredChildWindow.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0063098 (IsWindowBroadcastingDpiToChildrenX.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     SelectWindowRgn @ 0x1C009D0B0 (SelectWindowRgn.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C009DA38 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C009DD70 (UpdateMonitorForWindowAndChildren.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 *     NtUserGetForegroundWindow @ 0x1C00DA7B0 (NtUserGetForegroundWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F6260 (NtUserSetBrokeredForeground.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00FB81C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 *     ShouldHaveShadow @ 0x1C010312C (ShouldHaveShadow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C010A520 (NtUserSetWindowCompositionTransition.c)
 *     NtUserBeginLayoutUpdate @ 0x1C0112640 (NtUserBeginLayoutUpdate.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C013294C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01B727C (FeedbackGetWindowSetting.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BF624 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01C052C (IsNonClientDpiScalingEnabledX.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01C0DA0 (xxxEnableNonClientDpiScaling.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D3040 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01D7490 (NtUserDisableImmersiveOwner.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C01DB110 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetFallbackForeground @ 0x1C01DF500 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C01E0100 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01E0EF0 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01ED618 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     GetGestureConfigSettings @ 0x1C01EF214 (GetGestureConfigSettings.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01F01BC (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     GetDisplayAffinity @ 0x1C0211734 (GetDisplayAffinity.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // r8
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
