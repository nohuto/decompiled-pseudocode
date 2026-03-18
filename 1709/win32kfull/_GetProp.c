/*
 * XREFs of _GetProp @ 0x1C0076208
 * Callers:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006C9C (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _VisrgnFromWindow @ 0x1C000BFF4 (_VisrgnFromWindow.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C000D130 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00446AC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C0044A00 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0044C58 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0044E00 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     _GetWindowPlacement @ 0x1C004B5A0 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     ParkIcon @ 0x1C004BCA4 (ParkIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0057E7C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C005D3B8 (_GhostWindowFromHungWindow.c)
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ProtectedContentAccessCheck @ 0x1C0072C34 (ProtectedContentAccessCheck.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00842F8 (ShouldProcessHungWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C00871C4 (_HungWindowFromGhostWindow.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     GetOldRedirectionBitmap @ 0x1C008A5F8 (GetOldRedirectionBitmap.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     _HasCaptionIcon @ 0x1C008B3E0 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C008B494 (xxxGetWindowSmIcon.c)
 *     CreateSprite @ 0x1C008BE34 (CreateSprite.c)
 *     GetRedirectionFlags @ 0x1C008DA7C (GetRedirectionFlags.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C008DDE0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C008DF74 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     FeedbackSetWindowSetting @ 0x1C009CB10 (FeedbackSetWindowSetting.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00CC1EC (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00CC238 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D5DB0 (NtUserSetBrokeredForeground.c)
 *     CitGetWindowInfo @ 0x1C01090E0 (CitGetWindowInfo.c)
 *     DWP_GetIcon @ 0x1C010CAD8 (DWP_GetIcon.c)
 *     NtUserSetWindowBand @ 0x1C010F1D0 (NtUserSetWindowBand.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010FE00 (NtUserGetWindowMinimizeRect.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C011A810 (NtUserShutdownBlockReasonQuery.c)
 *     SetOldRedirectionBitmap @ 0x1C011C068 (SetOldRedirectionBitmap.c)
 *     xxxHandleHealthyWindow @ 0x1C013418C (xxxHandleHealthyWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0134590 (xxxRegisterGhostWindow.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01347A8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0134ADC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01351A0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C013DA60 (xxxArrangeIconicWindows.c)
 *     UserSetWindowedSwapChain @ 0x1C013E7F4 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0140210 (UserRemoveWindowedSwapChain.c)
 *     _GetWindowIcon @ 0x1C0140914 (_GetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C0141AF4 (xxxSendShutdownData.c)
 *     SnapshotWindowRects @ 0x1C01B89F0 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B9428 (xxxRestoreMonitorsAndWindowsRects.c)
 *     FeedbackClearWindowSetting @ 0x1C01BC58C (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01BC5F4 (FeedbackGetWindowSetting.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01C51D0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateGDIWindows @ 0x1C01C5894 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1C01C5A34 (UserGetHwnd.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01D4424 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01D6548 (xxxPerformTargetingWithinPwnd.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D7298 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D73EC (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C01D760C (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D7730 (xxxRegisterSiblingFrostWindow.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01D7F38 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01DAB38 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01DB798 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01E2380 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     NtUserGetAppImeLevel @ 0x1C01E4C60 (NtUserGetAppImeLevel.c)
 *     NtUserIsTouchWindow @ 0x1C01E8A80 (NtUserIsTouchWindow.c)
 *     NtUserfnDDEINIT @ 0x1C01EDA30 (NtUserfnDDEINIT.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F012C (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F047C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F07D8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F0CE4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020C0A0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxSetWindowShowState @ 0x1C020C98C (xxxSetWindowShowState.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 *     GetDisplayAffinity @ 0x1C0212C48 (GetDisplayAffinity.c)
 *     _GetWindowContextHelpId @ 0x1C0219EF0 (_GetWindowContextHelpId.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 *     GetContextHelpId @ 0x1C023D888 (GetContextHelpId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // rax
  int v5; // edx
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 184);
  if ( !v3 || !a2 )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = v3 + 8;
  if ( v5 )
  {
    do
    {
      if ( *(_WORD *)(v6 + 8) == a2 )
      {
        if ( a3 )
        {
          if ( (*(_BYTE *)(v6 + 10) & 1) != 0 )
            goto LABEL_7;
        }
        else if ( (*(_BYTE *)(v6 + 10) & 1) == 0 )
        {
          goto LABEL_7;
        }
      }
      v6 += 16LL;
    }
    while ( --v5 );
  }
  v6 = 0LL;
LABEL_7:
  if ( v6 )
    return *(_QWORD *)v6;
  else
    return 0LL;
}
