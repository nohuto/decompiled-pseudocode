/*
 * XREFs of _GetProp @ 0x1C00624E0
 * Callers:
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C00080C0 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C00172B4 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0017440 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0017BE8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0017D90 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     GetOldRedirectionBitmap @ 0x1C001D6EC (GetOldRedirectionBitmap.c)
 *     xxxGetWindowSmIcon @ 0x1C001D71C (xxxGetWindowSmIcon.c)
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     _HasCaptionIcon @ 0x1C001D908 (_HasCaptionIcon.c)
 *     CreateSprite @ 0x1C001E08C (CreateSprite.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FF9C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0026020 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     _HungWindowFromGhostWindow @ 0x1C003C134 (_HungWindowFromGhostWindow.c)
 *     DWP_GetIcon @ 0x1C003C818 (DWP_GetIcon.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     IsWindowGhosted @ 0x1C005CE98 (IsWindowGhosted.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ProtectedContentAccessCheck @ 0x1C0069F44 (ProtectedContentAccessCheck.c)
 *     GetRedirectionFlags @ 0x1C009E94C (GetRedirectionFlags.c)
 *     _GhostWindowFromHungWindow @ 0x1C00B4280 (_GhostWindowFromHungWindow.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 *     DestroyWindowSmIcon @ 0x1C00C1AA4 (DestroyWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C8944 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00C8990 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00E8BF0 (ParkIcon.c)
 *     FeedbackSetWindowSetting @ 0x1C00EF518 (FeedbackSetWindowSetting.c)
 *     NtUserSetWindowBand @ 0x1C00F1550 (NtUserSetWindowBand.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F6260 (NtUserSetBrokeredForeground.c)
 *     CitGetWindowInfo @ 0x1C0101740 (CitGetWindowInfo.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01061E0 (NtUserGetWindowMinimizeRect.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0110730 (NtUserShutdownBlockReasonQuery.c)
 *     SetOldRedirectionBitmap @ 0x1C0112BF8 (SetOldRedirectionBitmap.c)
 *     ShouldProcessHungWindow @ 0x1C01199B0 (ShouldProcessHungWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C013208C (xxxHandleHealthyWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0132440 (xxxRegisterGhostWindow.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0132638 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C013294C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0132F04 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0137030 (xxxArrangeIconicWindows.c)
 *     _GetWindowIcon @ 0x1C0139C3C (_GetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C013AE48 (xxxSendShutdownData.c)
 *     SnapshotWindowRects @ 0x1C01B578C (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01B5CD4 (xxxMetricsRecalc.c)
 *     FeedbackClearWindowSetting @ 0x1C01B721C (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01B727C (FeedbackGetWindowSetting.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01C1FF0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     _VisrgnFromWindow @ 0x1C01C23C8 (_VisrgnFromWindow.c)
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1C01C2D20 (UserGetHwnd.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01CFD4C (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D1138 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01D1F44 (xxxPerformTargetingWithinPwnd.c)
 *     xxxTouchTargetWindow @ 0x1C01D2798 (xxxTouchTargetWindow.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D2FF0 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D312C (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C01D3340 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D3460 (xxxRegisterSiblingFrostWindow.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01D5B90 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     NtUserGetAppImeLevel @ 0x1C01D84E0 (NtUserGetAppImeLevel.c)
 *     NtUserIsTouchWindow @ 0x1C01DC8A0 (NtUserIsTouchWindow.c)
 *     NtUserfnDDEINIT @ 0x1C01E1880 (NtUserfnDDEINIT.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01E4114 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E445C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E47A8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E4CA4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F0224 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01F31C8 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F43E4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     UserRemoveWindowedSwapChain @ 0x1C02098D0 (UserRemoveWindowedSwapChain.c)
 *     UserSetWindowedSwapChain @ 0x1C02099AC (UserSetWindowedSwapChain.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020AD00 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxSetWindowShowState @ 0x1C020B5C8 (xxxSetWindowShowState.c)
 *     xxxCompositedPaint @ 0x1C020BA84 (xxxCompositedPaint.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 *     GetDisplayAffinity @ 0x1C0211734 (GetDisplayAffinity.c)
 *     _GetWindowContextHelpId @ 0x1C0218D10 (_GetWindowContextHelpId.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 *     GetContextHelpId @ 0x1C023C05C (GetContextHelpId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 184);
  if ( !v3 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v4 = *(_DWORD *)(v3 + 4);
  v5 = v3 + 8;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_WORD *)(v5 + 8) != a2 )
      goto LABEL_5;
    if ( !a3 )
      break;
    if ( (*(_BYTE *)(v5 + 10) & 1) != 0 )
      return *(_QWORD *)v5;
LABEL_5:
    v5 += 16LL;
    if ( !--v4 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v5 + 10) & 1) != 0 )
    goto LABEL_5;
  return *(_QWORD *)v5;
}
