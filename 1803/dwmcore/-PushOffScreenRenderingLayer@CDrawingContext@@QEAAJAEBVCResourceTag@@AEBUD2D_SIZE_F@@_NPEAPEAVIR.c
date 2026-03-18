/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowIntermediates@1@@Z @ 0x180189550 (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowInte.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180189860 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?GenerateBlurIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18019FD0C (-GenerateBlurIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0014 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A01F0 (-GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A143C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C (-GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x1800244D8 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@.c)
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x180024620 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x180024D1C (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 */

__int64 __fastcall CDrawingContext::PushOffScreenRenderingLayer(
        struct IRenderTarget **this,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_F *a3,
        char a4,
        struct IRenderTargetBitmap **a5)
{
  __m128 v5; // xmm2
  float width; // xmm4_4
  int v8; // eax
  float height; // xmm3_4
  int v10; // eax
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // edi
  __m128 v15; // rt1
  unsigned int v16; // eax
  _DWORD v17[4]; // [rsp+30h] [rbp-10h] BYREF
  __int128 v18; // [rsp+60h] [rbp+20h] BYREF

  width = a3->width;
  v17[0] = 0;
  v17[1] = 0;
  *(float *)&v18 = width;
  if ( (LODWORD(width) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)width - width;
    v5 = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5));
    LODWORD(v18) = v5.m128_i32[0];
    v8 = (int)width - v5.m128_i32[0];
  }
  else
  {
    *(float *)&v18 = width + 6291456.25;
    v8 = (int)((_DWORD)v18 << 10) >> 11;
  }
  height = a3->height;
  v17[2] = v8;
  *(float *)&v18 = height;
  if ( (LODWORD(height) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)height - height;
    v15.m128_f32[0] = FLOAT_N0_5;
    v10 = (int)height - _mm_cmple_ss(v5, v15).m128_u32[0];
  }
  else
  {
    *(float *)&v18 = height + 6291456.25;
    v10 = (int)((_DWORD)v18 << 10) >> 11;
  }
  v11 = 0LL;
  v17[3] = v10;
  *(_QWORD *)&v18 = 0LL;
  if ( width <= 0.0 || height <= 0.0 )
  {
    v13 = -2147024809;
    v16 = 2737;
  }
  else
  {
    v12 = COffScreenRenderingLayer::Create(
            a2,
            this[45],
            (const struct MilPointAndSizeL *)v17,
            a4,
            (struct COffScreenRenderingLayer **)&v18);
    v11 = (__int64 *)v18;
    v13 = v12;
    if ( v12 < 0 )
    {
      v16 = 2733;
    }
    else
    {
      v13 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, (struct CLayer *)v18, 1, 1);
      if ( v13 >= 0 )
      {
        SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(a5, v11[1]);
        return (unsigned int)v13;
      }
      v16 = 2741;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v16);
  if ( v11 )
    COffScreenRenderingLayer::`vector deleting destructor'((COffScreenRenderingLayer *)v11, 1);
  return (unsigned int)v13;
}
