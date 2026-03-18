/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0
 * Callers:
 *     GreGetAppClipBox @ 0x1C000DDFC (GreGetAppClipBox.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0018A24 (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     GreExtTextOutRect @ 0x1C001CE28 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0022408 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0022528 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0029060 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002DBD0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002DC00 (UntrapAppContainerRenderingWrap.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00384F8 (GreGetOutlineTextMetricsInternalW.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     GreSetBrushOrg @ 0x1C007F6C8 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     GreGetDCDpiScaleValue @ 0x1C0082CD4 (GreGetDCDpiScaleValue.c)
 *     GreGetTextColor @ 0x1C0082D98 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C0082DE4 (GreGetBkColor.c)
 *     GreSetStretchBltMode @ 0x1C009B588 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C009B814 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreGetCharSet @ 0x1C00B0B68 (GreGetCharSet.c)
 *     GrePolyTextOutW @ 0x1C00E3088 (GrePolyTextOutW.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C00F2548 (GreGetBoundsRect.c)
 *     GreTransformPoints @ 0x1C00F5EFC (GreTransformPoints.c)
 *     GreSetDeviceGammaRamp @ 0x1C00F6708 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C00F6FA8 (GreGetDeviceGammaRamp.c)
 *     NtGdiSetMetaRgn @ 0x1C00F99D0 (NtGdiSetMetaRgn.c)
 *     GreForceUFIMapping @ 0x1C00FDE3C (GreForceUFIMapping.c)
 *     GreGetUFI @ 0x1C010006C (GreGetUFI.c)
 *     GreExtEscape @ 0x1C01012BC (GreExtEscape.c)
 *     NtGdiGetAndSetDCDword @ 0x1C0101DF0 (NtGdiGetAndSetDCDword.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     NtGdiComputeXformCoefficients @ 0x1C01034E0 (NtGdiComputeXformCoefficients.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0107720 (NtGdiGetLinkedUFIs.c)
 *     GreGetGlyphIndicesW @ 0x1C0107B3C (GreGetGlyphIndicesW.c)
 *     bUMPD @ 0x1C010F7C4 (bUMPD.c)
 *     NtGdiSetColorSpace @ 0x1C011A1C0 (NtGdiSetColorSpace.c)
 *     NtGdiMakeInfoDC @ 0x1C011AC10 (NtGdiMakeInfoDC.c)
 *     GreGetRealizationInfo @ 0x1C0144A44 (GreGetRealizationInfo.c)
 *     NtGdiGetMonitorID @ 0x1C024C790 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024E138 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E70C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E824 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02569E8 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0257B00 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiRemoveMergeFont @ 0x1C0257ED0 (NtGdiRemoveMergeFont.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0257F80 (NtGdiSetLinkedUFIs.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C025B358 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C02697A0 (NtGdiAddRemoteFontToDC.c)
 *     GreGetHFONT @ 0x1C027AB3C (GreGetHFONT.c)
 *     GreMoveTo @ 0x1C027B284 (GreMoveTo.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C0290918 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0290A90 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C0290BC4 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0290C64 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0290E4C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetMapMode @ 0x1C0291BB0 (GreGetMapMode.c)
 *     NtGdiUpdateTransform @ 0x1C0291F20 (NtGdiUpdateTransform.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0292098 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C0294E2C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0294E74 (GreSetTextCharacterExtra.c)
 *     GreSetGraphicsMode @ 0x1C02981EC (GreSetGraphicsMode.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
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
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
