/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@@Z @ 0x1801620D8
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18006BFF8 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18015E480 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@PEAPEAV1@@Z @ 0x1801749E8 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(CDrawingContext *this, struct CVisual *a2, __int64 a3)
{
  CColorTransformLayer *v4; // rdi
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorTransformLayer *v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)v11);
  if ( v7 < 0 )
  {
    v9 = 5580;
  }
  else
  {
    v8 = CColorTransformLayer::Create(*((_QWORD *)this + 45), v11, a3, &v12);
    v4 = v12;
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 5585;
    }
    else
    {
      v7 = CDrawingContext::PushLayer(this, a2, v12, 1, 1);
      if ( v7 >= 0 )
        return (unsigned int)v7;
      v9 = 5593;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v9);
  if ( v4 )
    CColorTransformLayer::`vector deleting destructor'(v4, 1);
  return (unsigned int)v7;
}
