/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180170EF4 (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18017122C (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180178460 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x180014200 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x18001BB38 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBU_GUID@@AEBUMilPoin.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  const struct _GUID *v13; // r8
  int v14; // eax
  CColorSpaceLayer *v15; // rdi
  unsigned int v16; // ebx
  int v17; // eax
  struct IRenderTargetBitmap *v18; // rcx
  _DWORD v20[4]; // [rsp+30h] [rbp-10h] BYREF
  __int128 v21; // [rsp+50h] [rbp+10h] BYREF

  width = a3->width;
  v20[0] = 0;
  v20[1] = 0;
  *(float *)&v21 = width;
  if ( (LODWORD(width) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)width - width;
    v5 = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5));
    LODWORD(v21) = v5.m128_i32[0];
    v9 = (int)width - v5.m128_i32[0];
  }
  else
  {
    *(float *)&v21 = width + 6291456.25;
    v9 = (int)((_DWORD)v21 << 10) >> 11;
  }
  height = a3->height;
  v20[2] = v9;
  *(float *)&v21 = height;
  if ( (LODWORD(height) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)height - height;
    LODWORD(v21) = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v11 = (int)height - v21;
  }
  else
  {
    *(float *)&v21 = height + 6291456.25;
    v11 = (int)((_DWORD)v21 << 10) >> 11;
  }
  v12 = (struct IRenderTarget *)*((_QWORD *)this + 46);
  v13 = (const struct _GUID *)(*((_QWORD *)this + 4) + 324LL);
  *(_QWORD *)&v21 = 0LL;
  v20[3] = v11;
  v14 = COffScreenRenderingLayer::Create(
          a2,
          v12,
          v13,
          (const struct MilPointAndSizeL *)v20,
          a4,
          (struct COffScreenRenderingLayer **)&v21);
  v15 = (CColorSpaceLayer *)v21;
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xBE4u);
  }
  else
  {
    v17 = CDrawingContext::PushLayer(this, 0LL, (struct CLayer *)v21, 1, 1);
    v16 = v17;
    if ( v17 >= 0 )
    {
      v18 = (struct IRenderTargetBitmap *)*((_QWORD *)v15 + 1);
      *a5 = v18;
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v18 + 8LL))(v18);
      return v16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xBE7u);
  }
  if ( v15 )
    CColorSpaceLayer::`vector deleting destructor'(v15, 1u);
  return v16;
}
