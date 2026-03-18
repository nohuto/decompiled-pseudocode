/*
 * XREFs of ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180162018
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18006BFF8 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x18015E440 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180174718 (-Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 */

__int64 __fastcall CDrawingContext::PushColorSpaceLayer(
        struct IRenderTarget **this,
        const struct CVisual *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  CColorSpaceLayer *v4; // rdi
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorSpaceLayer *v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds((CDrawingContext *)this, (struct MilPointAndSizeL *)v11);
  if ( v7 < 0 )
  {
    v9 = 5536;
  }
  else
  {
    v8 = CColorSpaceLayer::Create(this[45], (const struct MilPointAndSizeL *)v11, a3, &v12);
    v4 = v12;
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 5541;
    }
    else
    {
      v7 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v12, 1, 1);
      if ( v7 >= 0 )
        return (unsigned int)v7;
      v9 = 5549;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v9);
  if ( v4 )
    CColorSpaceLayer::`vector deleting destructor'(v4, 1);
  return (unsigned int)v7;
}
