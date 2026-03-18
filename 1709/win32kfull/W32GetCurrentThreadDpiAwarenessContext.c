/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C000B298 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     cjCopyFontDataW @ 0x1C003AEDC (cjCopyFontDataW.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     xxxGetTitleBarInfoEx @ 0x1C004A0DC (xxxGetTitleBarInfoEx.c)
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C004B5A0 (_GetWindowPlacement.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C004BAB0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     _GetCursorInfo @ 0x1C00532C0 (_GetCursorInfo.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     _SetWinEventHook @ 0x1C0058360 (_SetWinEventHook.c)
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     NtUserSetWindowPos @ 0x1C00665E0 (NtUserSetWindowPos.c)
 *     NtUserInvalidateRect @ 0x1C0069850 (NtUserInvalidateRect.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     NtUserGetMenuBarInfo @ 0x1C007BE60 (NtUserGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C009AA00 (NtUserDeferWindowPosAndBand.c)
 *     _GetIconSize @ 0x1C009B6FC (_GetIconSize.c)
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     xxxGetCursorPos @ 0x1C00A0860 (xxxGetCursorPos.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00AAED0 (TransformMessageBetweenCoordinateSpaces.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C0100DA0 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C0100F40 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserMoveWindow @ 0x1C0101A90 (NtUserMoveWindow.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     NtUserGetUpdateRect @ 0x1C010AB90 (NtUserGetUpdateRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010FE00 (NtUserGetWindowMinimizeRect.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     NtUserGetComboBoxInfo @ 0x1C0137280 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C0138CDC (_ChildWindowFromPointEx.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C013F060 (_GetOwnerTransformedMonitorRect.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C013F110 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetMouseMovePointsEx @ 0x1C01BB284 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01BD79C (xxxInjectTouchInput.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01C2A70 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01C3B8C (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C43B4 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01C574C (zzzStartSonar.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D7CE8 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01D9474 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01E2EAC (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01E4950 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01E6410 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C01E9C20 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01EA150 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C01EC4F0 (NtUserSetWindowShowState.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0202F64 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C0205CD0 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     _RealChildWindowFromPoint @ 0x1C0212FA8 (_RealChildWindowFromPoint.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0218794 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v5; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 18;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v8 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v8 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v8 + 340) )
        {
          return *(unsigned int *)(v8 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
          if ( CurrentProcessWin32Process )
            return *(unsigned int *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  return v5;
}
