/*
 * XREFs of ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801A6C4C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18009F160 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x1800AB024 (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C624C (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C77EC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::CalculateOcclusion(
        CDrawingContext *this,
        struct CVisualTree *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v10; // rsi
  int v11; // eax
  int v12; // edi
  int v13; // eax

  if ( !*((_QWORD *)this + 835) )
  {
    v10 = (_QWORD *)((char *)this + 6688);
    v11 = COcclusionContext::Create(*((struct CComposition **)this + 4), (struct COcclusionContext **)this + 836);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F35A4, 1u, v11, 0x26F7u);
      goto LABEL_6;
    }
    *((_QWORD *)this + 835) = *v10;
  }
  v13 = COcclusionContext::Compute(
          *((_QWORD *)this + 835),
          (__int64)a2,
          a3,
          a4,
          a5,
          (CDrawingContext *)((char *)this + 3376),
          0LL);
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801F35A4, 1u, v13, 0x270Au);
  else
    CDrawingContext::UpdateCVIRenderTargets((COcclusionContext **)this, a2);
LABEL_6:
  if ( v12 < 0 )
  {
    SAFE_DELETE<COcclusionContext>((char *)this + 6688);
    *((_QWORD *)this + 835) = 0LL;
  }
  *a6 = *((_QWORD *)this + 835);
  return (unsigned int)v12;
}
