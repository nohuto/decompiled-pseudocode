/*
 * XREFs of ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x180162224
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18006BFF8 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ??_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z @ 0x18015E500 (--_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@PEAPEAV1@@Z @ 0x1801742EC (-Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TY.c)
 */

__int64 __fastcall CDrawingContext::PushHDRToneMapVPBltLayer(struct IRenderTarget **this)
{
  CHDRToSDRToneMapLayer *v1; // rdi
  int v3; // ebx
  enum DXGI_COLOR_SPACE_TYPE v4; // r8d
  enum DXGI_FORMAT v5; // r9d
  int v6; // eax
  unsigned int v7; // eax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  CHDRToSDRToneMapLayer *v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v10 = 0LL;
  v3 = CDrawingContext::ComputeExternalLayerOffsetAndBounds((CDrawingContext *)this, (struct MilPointAndSizeL *)v9);
  if ( v3 < 0 )
  {
    v7 = 5374;
  }
  else
  {
    v6 = CHDRToSDRToneMapLayer::Create(this[45], (const struct MilPointAndSizeL *)v9, v4, v5, &v10);
    v1 = v10;
    v3 = v6;
    if ( v6 < 0 )
    {
      v7 = 5380;
    }
    else
    {
      v3 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v10, 1, 1);
      if ( v3 >= 0 )
        return (unsigned int)v3;
      v7 = 5388;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v7);
  if ( v1 )
    CHDRToSDRToneMapLayer::`vector deleting destructor'(v1, 1);
  return (unsigned int)v3;
}
