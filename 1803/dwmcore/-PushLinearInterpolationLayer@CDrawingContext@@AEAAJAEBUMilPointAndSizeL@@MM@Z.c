/*
 * XREFs of ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1801622D8
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x18015E570 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x180176188 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLinearInterpolationLayer(
        struct IRenderTarget **this,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4)
{
  int v5; // ebx
  unsigned int v6; // eax
  CLinearInterpolationLayer *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = CLinearInterpolationLayer::Create(this[45], a2, a3, a4, &v8);
  if ( v5 < 0 )
  {
    v6 = 5750;
  }
  else
  {
    v5 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v8, 1, 0);
    if ( v5 >= 0 )
      return (unsigned int)v5;
    v6 = 5758;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v6);
  if ( v8 )
    CLinearInterpolationLayer::`scalar deleting destructor'(v8, 1);
  return (unsigned int)v5;
}
