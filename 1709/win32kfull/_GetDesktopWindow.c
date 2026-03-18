/*
 * XREFs of _GetDesktopWindow @ 0x1C0065304
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     _GetWindowPlacement @ 0x1C004B5A0 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C004B97C (CkptUpdate.c)
 *     xxxShowOwnedWindows @ 0x1C004BB84 (xxxShowOwnedWindows.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0056A6C (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0056D64 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     UnlinkWindow @ 0x1C0062338 (UnlinkWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     LinkWindow @ 0x1C0064B10 (LinkWindow.c)
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     NextTopWindow @ 0x1C0065110 (NextTopWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0068964 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C006AFA4 (InternalInvalidate3.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C0076C18 (SetTiledRect.c)
 *     xxxPaintRect @ 0x1C007F5FC (xxxPaintRect.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     _DeferWindowPosAndBand @ 0x1C009ABD8 (_DeferWindowPosAndBand.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C00CD6D0 (ImeCanDestroyDefIMEforChild.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     NtUserGetAncestor @ 0x1C00DFE40 (NtUserGetAncestor.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00E33AC (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     xxxMoveWindow @ 0x1C0101C1C (xxxMoveWindow.c)
 *     xxxGetUpdateRgn @ 0x1C0107368 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C010ACF0 (xxxGetUpdateRect.c)
 *     NtUserSetParent @ 0x1C010F810 (NtUserSetParent.c)
 *     _GetAncestor @ 0x1C0113990 (_GetAncestor.c)
 *     xxxHandleWindowPosChanged @ 0x1C0113B28 (xxxHandleWindowPosChanged.c)
 *     SetHungFlag @ 0x1C01152FC (SetHungFlag.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0134ADC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C0138CDC (_ChildWindowFromPointEx.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C013B818 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 *     PowerOnGdi @ 0x1C0141FF0 (PowerOnGdi.c)
 *     GetTopMostInsertAfter @ 0x1C01AB1DC (GetTopMostInsertAfter.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01B5070 (xxxSetForegroundCheckNoActivate.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CD184 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     EditionPointerParentNotify @ 0x1C01CE380 (EditionPointerParentNotify.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2EAC (xxxSetInternalWindowPos.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D7300 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D73EC (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     EvaluateArrangeState @ 0x1C01DCDE8 (EvaluateArrangeState.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0204454 (xxxBroadcastPaletteChanged.c)
 *     xxxDrawAnimatedRects @ 0x1C020E920 (xxxDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C020F3C8 (xxxActivateEnabledPopup.c)
 *     _RealChildWindowFromPoint @ 0x1C0212FA8 (_RealChildWindowFromPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopWindow(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      return *(_QWORD *)(v3 + 16);
  }
  return result;
}
