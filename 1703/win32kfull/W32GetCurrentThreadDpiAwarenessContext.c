/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0005D90 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetDPIMonitorRect @ 0x1C0020B94 (GetDPIMonitorRect.c)
 *     cjCopyFontDataW @ 0x1C002EE8C (cjCopyFontDataW.c)
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     GetWindowNCMetrics @ 0x1C00452A4 (GetWindowNCMetrics.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00457B0 (NtUserDeferWindowPosAndBand.c)
 *     _GetIconSize @ 0x1C0048BA8 (_GetIconSize.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     xxxGetCursorPos @ 0x1C004D120 (xxxGetCursorPos.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005505C (TransformMessageBetweenCoordinateSpaces.c)
 *     ClearSendMessages @ 0x1C005D298 (ClearSendMessages.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     NtUserSetWindowPos @ 0x1C0062D90 (NtUserSetWindowPos.c)
 *     NtUserInvalidateRect @ 0x1C00654A0 (NtUserInvalidateRect.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     _GetCursorInfo @ 0x1C00BD5C0 (_GetCursorInfo.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxCreateWindowSmIcon @ 0x1C00C1950 (xxxCreateWindowSmIcon.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     NtUserGetMenuBarInfo @ 0x1C00C2BC0 (NtUserGetMenuBarInfo.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C00C30C8 (GetAppCompatFlags2WithDPIAware.c)
 *     xxxCreateClassSmIcon @ 0x1C00C3454 (xxxCreateClassSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00C5C08 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxReceiverDied @ 0x1C00C675C (xxxReceiverDied.c)
 *     _PostThreadMessageEx @ 0x1C00CBC7C (_PostThreadMessageEx.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 *     CalcSBStuff @ 0x1C00D7700 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C00D7834 (CalcSBStuff2.c)
 *     _SetWinEventHook @ 0x1C00E42BC (_SetWinEventHook.c)
 *     SetTiledRect @ 0x1C00EF694 (SetTiledRect.c)
 *     InternalGetRealClientRect @ 0x1C00EF82C (InternalGetRealClientRect.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00F3280 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00F3410 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserMoveWindow @ 0x1C00F3ED0 (NtUserMoveWindow.c)
 *     _ReplyMessage @ 0x1C00F5F20 (_ReplyMessage.c)
 *     xxxSetWindowPlacement @ 0x1C0101008 (xxxSetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C0101490 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     NtUserGetUpdateRect @ 0x1C01029E0 (NtUserGetUpdateRect.c)
 *     GetDPIServerInfoForDpi @ 0x1C010350C (GetDPIServerInfoForDpi.c)
 *     _GetPointerDeviceRects @ 0x1C010493C (_GetPointerDeviceRects.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01061E0 (NtUserGetWindowMinimizeRect.c)
 *     xxxDesktopPaintCallback @ 0x1C0113D50 (xxxDesktopPaintCallback.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     NtUserGetComboBoxInfo @ 0x1C0131C80 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C0133F0C (_ChildWindowFromPointEx.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0137BFC (_GetOwnerTransformedMonitorRect.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0138C50 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     _GetMouseMovePointsEx @ 0x1C01A19C4 (_GetMouseMovePointsEx.c)
 *     TransformForInputMagnification @ 0x1C01A2C40 (TransformForInputMagnification.c)
 *     TransformPhysicalPointToScreen @ 0x1C01A2DA8 (TransformPhysicalPointToScreen.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A3538 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A37A4 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A3974 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     UserGetHipDeviceInfo @ 0x1C01A7A70 (UserGetHipDeviceInfo.c)
 *     ?TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01ABF90 (-TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01AC0DC (-TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01B473C (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B4848 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01B51BC (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01B7AFC (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONI.c)
 *     xxxInjectTouchInput @ 0x1C01B85C0 (xxxInjectTouchInput.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01BF190 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01C02C8 (GetHimetricScaleForMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C0710 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C0C58 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01C2A28 (zzzStartSonar.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CADC4 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2BBC (xxxSetInternalWindowPos.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01D6618 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01D81E0 (NtUserGetAltTabInfo.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D8F20 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetMenuItemRect @ 0x1C01D9BB0 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C01DDB40 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01DE050 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C01E0370 (NtUserSetWindowShowState.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01F31C8 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C020164C (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C0204280 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020C2CC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020C454 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020DEA4 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C020EA64 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C020ED64 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0210840 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     _RealChildWindowFromPoint @ 0x1C0211A94 (_RealChildWindowFromPoint.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C021342C (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C02135AC (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C02157A4 (MNDrawArrow.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0217614 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     GetDpiForSystem @ 0x1C0238FB8 (GetDpiForSystem.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v4 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v4 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v4 + 340) )
      {
        return *(unsigned int *)(v4 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
        if ( CurrentProcessWin32Process )
          return *(unsigned int *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  return v0;
}
