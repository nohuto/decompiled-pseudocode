/*
 * XREFs of ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801C1C3C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180042D38 (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180060F58 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BDFD8 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800BEA04 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::CalculateOcclusion(
        struct CComposition **this,
        struct CVisualTree *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  struct CComposition **v9; // rsi
  int v10; // eax
  int v11; // edi
  int v12; // eax

  if ( !this[843] )
  {
    v9 = this + 844;
    v10 = COcclusionContext::Create(this[4], this + 844);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201E04, 1u, v10, 0x24FEu);
      goto LABEL_6;
    }
    this[843] = *v9;
  }
  v12 = COcclusionContext::Compute(this[843], a5, a6, (struct CMILMatrix *)(this + 434), 0LL);
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201E04, 1u, v12, 0x2510u);
  else
    CDrawingContext::UpdateCVIRenderTargets((CDrawingContext *)this, a2);
LABEL_6:
  if ( v11 < 0 )
  {
    SAFE_DELETE<COcclusionContext>(this + 844);
    this[843] = 0LL;
  }
  *a7 = this[843];
  return (unsigned int)v11;
}
