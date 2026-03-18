/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0
 * Callers:
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     NtGdiGetRandomRgn @ 0x1C0022270 (NtGdiGetRandomRgn.c)
 *     GreGetUFI @ 0x1C00287F0 (GreGetUFI.c)
 *     GreSetBrushOrg @ 0x1C0029144 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     GreSetStretchBltMode @ 0x1C00449E4 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067408 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0071600 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00731EC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00732F0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0075400 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C0075430 (UntrapAppContainerRenderingWrap.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C007FDFC (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetDIBitsInternal @ 0x1C00800D0 (GreGetDIBitsInternal.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GreExtTextOutRect @ 0x1C0092F90 (GreExtTextOutRect.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00936F4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreGetAppClipBox @ 0x1C009499C (GreGetAppClipBox.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetTextColor @ 0x1C00D6898 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C00D68EC (GreGetBkColor.c)
 *     GreGetBoundsRect @ 0x1C00E0588 (GreGetBoundsRect.c)
 *     GreGetCharSet @ 0x1C00E09EC (GreGetCharSet.c)
 *     GreTransformPoints @ 0x1C00E53AC (GreTransformPoints.c)
 *     GreSetDeviceGammaRamp @ 0x1C00E6DB8 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C00E765C (GreGetDeviceGammaRamp.c)
 *     NtGdiSetMetaRgn @ 0x1C00E9BC0 (NtGdiSetMetaRgn.c)
 *     GreForceUFIMapping @ 0x1C00EBED8 (GreForceUFIMapping.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     GreExtEscape @ 0x1C00F360C (GreExtEscape.c)
 *     NtGdiGetAndSetDCDword @ 0x1C00F3BC0 (NtGdiGetAndSetDCDword.c)
 *     NtGdiComputeXformCoefficients @ 0x1C00F40C0 (NtGdiComputeXformCoefficients.c)
 *     NtGdiGetLinkedUFIs @ 0x1C00F9130 (NtGdiGetLinkedUFIs.c)
 *     GreGetGlyphIndicesW @ 0x1C00FA32C (GreGetGlyphIndicesW.c)
 *     bUMPD @ 0x1C0102FD4 (bUMPD.c)
 *     NtGdiSetColorSpace @ 0x1C010F0C0 (NtGdiSetColorSpace.c)
 *     NtGdiMakeInfoDC @ 0x1C01100E0 (NtGdiMakeInfoDC.c)
 *     GreGetRealizationInfo @ 0x1C013EABC (GreGetRealizationInfo.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     NtGdiGetMonitorID @ 0x1C024AE80 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CC78 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CD98 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0254F18 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0256000 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiRemoveMergeFont @ 0x1C02563D0 (NtGdiRemoveMergeFont.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0256480 (NtGdiSetLinkedUFIs.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C025A244 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C026AA30 (NtGdiAddRemoteFontToDC.c)
 *     GreGetHFONT @ 0x1C027E024 (GreGetHFONT.c)
 *     GreMoveTo @ 0x1C027E758 (GreMoveTo.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02941DC (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029435C (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C029449C (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C029453C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C029472C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetMapMode @ 0x1C0295510 (GreGetMapMode.c)
 *     NtGdiUpdateTransform @ 0x1C0295880 (NtGdiUpdateTransform.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02959E8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C0298794 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02987E4 (GreSetTextCharacterExtra.c)
 *     GreSetGraphicsMode @ 0x1C029C860 (GreSetGraphicsMode.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(DC **this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  int v5; // edi

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *this = (DC *)v4;
  if ( v4 )
  {
    if ( (!*((_DWORD *)this + 3)
       || (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 32LL) & 0x8000) != 0
       && (v5 = *(_DWORD *)(v4 + 2544), v5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
      && (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)this) )
    {
      if ( (*((_DWORD *)*this + 134) & 4) != 0 )
        DC::vMarkTransformDirty(*this);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)*this + 3);
      *this = 0LL;
    }
  }
}
