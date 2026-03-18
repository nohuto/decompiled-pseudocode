/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800B1DD4 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowIntermediates@1@@Z @ 0x18015FC9C (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowInte.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18015FFB4 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003B750 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x18007843C (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x1800804F0 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x1800BF430 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@.c)
 */

__int64 __fastcall CDrawingContext::PushOffScreenRenderingLayer(
        CDrawingContext *this,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_F *a3,
        bool a4,
        struct IRenderTargetBitmap **a5)
{
  __m128 v5; // xmm2
  float width; // xmm0_4
  int v9; // eax
  float height; // xmm0_4
  int v11; // eax
  struct IRenderTarget *v12; // rdx
  int v13; // eax
  CColorSpaceLayer *v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  _DWORD v18[4]; // [rsp+30h] [rbp-10h] BYREF
  __int128 v19; // [rsp+50h] [rbp+10h] BYREF

  width = a3->width;
  v18[0] = 0;
  v18[1] = 0;
  *(float *)&v19 = width;
  if ( (LODWORD(width) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)width - width;
    v5 = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5));
    LODWORD(v19) = v5.m128_i32[0];
    v9 = (int)width - v5.m128_i32[0];
  }
  else
  {
    *(float *)&v19 = width + 6291456.25;
    v9 = (int)((_DWORD)v19 << 10) >> 11;
  }
  height = a3->height;
  v18[2] = v9;
  *(float *)&v19 = height;
  if ( (LODWORD(height) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)height - height;
    LODWORD(v19) = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v11 = (int)height - v19;
  }
  else
  {
    *(float *)&v19 = height + 6291456.25;
    v11 = (int)((_DWORD)v19 << 10) >> 11;
  }
  v12 = (struct IRenderTarget *)*((_QWORD *)this + 45);
  *(_QWORD *)&v19 = 0LL;
  v18[3] = v11;
  v13 = COffScreenRenderingLayer::Create(
          a2,
          v12,
          (const struct MilPointAndSizeL *)v18,
          a4,
          (struct COffScreenRenderingLayer **)&v19);
  v14 = (CColorSpaceLayer *)v19;
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA93u);
  }
  else
  {
    v16 = CDrawingContext::PushLayer(this, 0LL, (struct CLayer *)v19, 1, 1);
    v15 = v16;
    if ( v16 >= 0 )
    {
      SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(a5, *((_QWORD *)v14 + 1));
      return v15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xA96u);
  }
  if ( v14 )
    CColorSpaceLayer::`vector deleting destructor'(v14, 1u);
  return v15;
}
