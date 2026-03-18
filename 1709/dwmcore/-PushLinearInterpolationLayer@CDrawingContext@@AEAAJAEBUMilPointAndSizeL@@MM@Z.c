/*
 * XREFs of ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x18013E0A0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003B750 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x18013C020 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x18014CE88 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLinearInterpolationLayer(
        struct IRenderTarget **this,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4)
{
  signed int v5; // eax
  unsigned int v6; // ebx
  signed int v7; // eax
  CLinearInterpolationLayer *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = CLinearInterpolationLayer::Create(this[45], a2, a3, a4, &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x1645u);
  }
  else
  {
    v7 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v9, 1, 0);
    v6 = v7;
    if ( v7 >= 0 )
      return v6;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x164Du);
  }
  if ( v9 )
    CLinearInterpolationLayer::`scalar deleting destructor'(v9, 1);
  return v6;
}
