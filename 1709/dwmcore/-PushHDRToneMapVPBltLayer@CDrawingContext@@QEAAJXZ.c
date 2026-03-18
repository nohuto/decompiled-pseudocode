/*
 * XREFs of ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x18013DFD0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003B750 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18003BC70 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z @ 0x18013BFB0 (--_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@PEAPEAV1@@Z @ 0x18014B47C (-Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TY.c)
 */

__int64 __fastcall CDrawingContext::PushHDRToneMapVPBltLayer(struct IRenderTarget **this)
{
  CHDRToSDRToneMapLayer *v1; // rdi
  signed int v3; // eax
  enum DXGI_COLOR_SPACE_TYPE v4; // r8d
  enum DXGI_FORMAT v5; // r9d
  unsigned int v6; // ebx
  signed int v7; // eax
  signed int v8; // eax
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  CHDRToSDRToneMapLayer *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  v3 = CDrawingContext::ComputeExternalLayerOffsetAndBounds((CDrawingContext *)this, (struct MilPointAndSizeL *)v10);
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x14CDu);
  }
  else
  {
    v7 = CHDRToSDRToneMapLayer::Create(this[45], (const struct MilPointAndSizeL *)v10, v4, v5, &v11);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x14D3u);
      v1 = v11;
    }
    else
    {
      v1 = v11;
      v8 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v11, 1, 1);
      v6 = v8;
      if ( v8 >= 0 )
        return v6;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x14DBu);
    }
  }
  if ( v1 )
    CHDRToSDRToneMapLayer::`vector deleting destructor'(v1, 1);
  return v6;
}
