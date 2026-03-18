/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180007E98
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000829C (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180008F98 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x1800092B0 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18000A2C0 (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8AC (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800953D0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18015E4C0 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180175B7C (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IRenderTarget **this,
        const struct CVisual *a2,
        __int64 a3,
        double a4,
        __int64 a5,
        struct CFilterEffect *a6,
        char *a7)
{
  __m128 v7; // xmm2
  CFilterEffectLayer *v10; // r15
  struct CLayer *v11; // r14
  char v12; // r13
  _OWORD *v13; // rax
  float *v14; // r10
  float v15; // xmm6_4
  float v16; // xmm4_4
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  int v20; // eax
  int v21; // eax
  __int64 (__fastcall *v22)(struct CFilterEffect *, __int64); // rax
  char v23; // al
  __int64 (__fastcall *v24)(struct CFilterEffect *, __int64); // rax
  char v25; // al
  __m128i v26; // xmm0
  int v27; // eax
  int v28; // ebx
  __m128 v30; // rt1
  __m128 v31; // rt1
  int v32; // eax
  int v33; // r9d
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // [rsp+28h] [rbp-81h]
  float v38; // [rsp+48h] [rbp-61h]
  float v39; // [rsp+48h] [rbp-61h]
  struct CLayer *v40; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v41[4]; // [rsp+58h] [rbp-51h] BYREF
  CFilterEffectLayer *v42[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v43; // [rsp+78h] [rbp-31h]
  char *v44; // [rsp+80h] [rbp-29h]
  float v45[2]; // [rsp+88h] [rbp-21h] BYREF
  const struct CVisual *v46; // [rsp+90h] [rbp-19h]

  v43 = a5;
  v10 = 0LL;
  v11 = 0LL;
  v44 = a7;
  v42[0] = 0LL;
  v40 = 0LL;
  v12 = 0;
  v13 = (_OWORD *)CTreeEffectLayer::RoundOffLayerSize(v45, a3);
  v15 = *v14;
  v16 = v14[1];
  v17.m128_f32[0] = v14[2] - *v14;
  *(_OWORD *)v41 = *v13;
  v18 = *(__m128 *)v41;
  LODWORD(v13) = (int)v17.m128_f32[0];
  v18.m128_f32[0] = (float)(int)v17.m128_f32[0];
  v18.m128_i32[0] = _mm_cmplt_ss(v18, v17).m128_u32[0];
  v17.m128_f32[0] = v14[3] - v16;
  v19 = (__m128)COERCE_UNSIGNED_INT((float)((int)v13 - v18.m128_i32[0]));
  LODWORD(v46) = v19.m128_i32[0];
  v19.m128_f32[0] = (float)(int)v17.m128_f32[0];
  *((float *)&v46 + 1) = (float)(int)((int)v17.m128_f32[0] - _mm_cmplt_ss(v19, v17).m128_u32[0]);
  if ( (LODWORD(v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v15 - v15;
    v30.m128_f32[0] = FLOAT_N0_5;
    v20 = (int)v15 - _mm_cmple_ss(v7, v30).m128_u32[0];
  }
  else
  {
    v38 = v15 + 6291456.25;
    v20 = (int)(LODWORD(v38) << 10) >> 11;
  }
  v45[0] = (float)v20;
  if ( (LODWORD(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a4 = (float)(int)v16 - v16;
    v31.m128_f32[0] = FLOAT_N0_5;
    v21 = (int)v16 - _mm_cmple_ss(*(__m128 *)&a4, v31).m128_u32[0];
  }
  else
  {
    v39 = v16 + 6291456.25;
    v21 = (int)(LODWORD(v39) << 10) >> 11;
  }
  v45[1] = (float)v21;
  if ( (int)v41[2] <= 0 || (int)v41[3] <= 0 )
  {
    LODWORD(v45[0]) = 6;
    v46 = a2;
    v12 = 1;
    v28 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 56, v45);
    if ( v28 >= 0 )
      goto LABEL_18;
    v35 = 5640;
    goto LABEL_44;
  }
  if ( !a6 )
    goto LABEL_14;
  v22 = *(__int64 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL);
  if ( (char *)v22 == (char *)CEffectBrush::IsOfType )
    v23 = CEffectBrush::IsOfType(a6, 55LL);
  else
    v23 = v22(a6, 55LL);
  if ( v23 )
  {
    if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v41[2], v41[3]) )
    {
      LODWORD(v45[0]) = 6;
      v46 = a2;
      v32 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 56, v45);
      v28 = v32;
      if ( v32 >= 0 )
        goto LABEL_18;
      v37 = 5649;
      goto LABEL_28;
    }
    v34 = CFilterEffectLayer::Create(
            this[45],
            (const struct MilPointAndSizeL *)v41,
            a6,
            a2,
            (const struct MilPointAndSizeF *)v45,
            v42);
    v10 = v42[0];
    v28 = v34;
    if ( v34 < 0 )
    {
      v35 = 5660;
    }
    else
    {
      v28 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v42[0], 1, 1);
      if ( v28 >= 0 )
        goto LABEL_18;
      v35 = 5666;
    }
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v35);
    if ( !v10 )
      return (unsigned int)v28;
    CFilterEffectLayer::`vector deleting destructor'(v10, 1u);
    goto LABEL_19;
  }
  v24 = *(__int64 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL);
  if ( (char *)v24 == (char *)CEffectBrush::IsOfType )
    v25 = CEffectBrush::IsOfType(a6, 51LL);
  else
    v25 = v24(a6, 51LL);
  if ( !v25 )
  {
    v28 = -2147024809;
    v37 = 5716;
    v33 = -2147024809;
    goto LABEL_30;
  }
LABEL_14:
  v26 = _mm_srli_si128(*(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(v42, a6, v41, v45), 8);
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, _mm_cvtsi128_si32(v26), v26.m128i_u32[1]) )
  {
    LODWORD(v45[0]) = 6;
    v46 = a2;
    v32 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 56, v45);
    v28 = v32;
    if ( v32 >= 0 )
      goto LABEL_18;
    v37 = 5682;
LABEL_28:
    v33 = v32;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, v37);
    return (unsigned int)v28;
  }
  if ( (int)CTreeEffectLayer::Create(this[45], v41, a6, a2, v45, v43, &v40) < 0 )
  {
    LODWORD(v45[0]) = 6;
    v46 = a2;
    v36 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(this + 56, v45);
    v28 = v36;
    if ( v36 >= 0 )
    {
      v11 = v40;
      v28 = 0;
      goto LABEL_18;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x1641u);
    v11 = v40;
  }
  else
  {
    v11 = v40;
    v27 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v40, 1, 1);
    v28 = v27;
    if ( v27 >= 0 )
    {
      v11 = 0LL;
LABEL_18:
      *v44 = v12;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x164Au);
  }
LABEL_19:
  if ( v11 )
    CTreeEffectLayer::`vector deleting destructor'(v11, 1u);
  return (unsigned int)v28;
}
