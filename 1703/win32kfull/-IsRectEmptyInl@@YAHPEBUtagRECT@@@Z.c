/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374
 * Callers:
 *     GreUnlockDisplayArea @ 0x1C0007D78 (GreUnlockDisplayArea.c)
 *     GreLockDisplayArea @ 0x1C0007E18 (GreLockDisplayArea.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C003BE18 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C0062CD0 (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C0063590 (xxxSetWindowPosAndBand.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     xxEngNineGrid @ 0x1C0081A90 (xxEngNineGrid.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C009BE74 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00B3D90 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00DDC50 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreGetBoundsRect @ 0x1C00E0588 (GreGetBoundsRect.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     IsTitleWindow @ 0x1C00F6F04 (IsTitleWindow.c)
 *     GreSetBoundsRect @ 0x1C00F805C (GreSetBoundsRect.c)
 *     GreRectangle @ 0x1C00F9578 (GreRectangle.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011F0DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C013FB74 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A3974 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01D3908 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F4560 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0202DD4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxCompositedPaint @ 0x1C020BA84 (xxxCompositedPaint.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C020E138 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     FindBestPos @ 0x1C02135AC (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C024ECC8 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
