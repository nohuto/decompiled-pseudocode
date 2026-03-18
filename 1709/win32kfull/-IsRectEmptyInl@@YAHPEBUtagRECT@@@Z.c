/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368
 * Callers:
 *     GreUnlockDisplayArea @ 0x1C000CEC8 (GreUnlockDisplayArea.c)
 *     GreLockDisplayArea @ 0x1C000CF60 (GreLockDisplayArea.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C005F004 (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C007DCE0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00CB310 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00EB138 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00EEE3C (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreGetBoundsRect @ 0x1C00F2548 (GreGetBoundsRect.c)
 *     IsTitleWindow @ 0x1C00F8DD4 (IsTitleWindow.c)
 *     GreSetBoundsRect @ 0x1C010359C (GreSetBoundsRect.c)
 *     GreRectangle @ 0x1C01057D0 (GreRectangle.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C01453A4 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01AAEC8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01DB908 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01DFCF0 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C020F94C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C023A620 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C023AC74 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025073C (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
