/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@@Z @ 0x18013DEF4
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003B750 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18003BC70 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18013BF30 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@PEAPEAV1@@Z @ 0x18014BB78 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(CDrawingContext *this, struct CVisual *a2, __int64 a3)
{
  CColorTransformLayer *v4; // rdi
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorTransformLayer *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x159Bu);
  }
  else
  {
    v9 = CColorTransformLayer::Create(*((_QWORD *)this + 45), v12, a3, &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x15A0u);
      v4 = v13;
    }
    else
    {
      v4 = v13;
      v10 = CDrawingContext::PushLayer(this, a2, v13, 1, 1);
      v8 = v10;
      if ( v10 >= 0 )
        return v8;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x15A8u);
    }
  }
  if ( v4 )
    CColorTransformLayer::`vector deleting destructor'(v4, 1);
  return v8;
}
