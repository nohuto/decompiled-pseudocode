/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18003BAAC
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003B750 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18003D284 (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800801EC (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x1800804F0 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18008253C (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BBE78 (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18013BF70 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18014C86C (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 */

__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IRenderTarget **this,
        struct CVisual *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct CFilterEffect *a6,
        char *a7)
{
  CFilterEffectLayer *v9; // r15
  struct CLayer *v10; // rsi
  char v11; // r13
  __m128i *v12; // rax
  float *v13; // r10
  float v14; // xmm2_4
  __m128i v15; // xmm3
  float v16; // xmm0_4
  float v17; // xmm1_4
  unsigned __int64 v18; // xmm3_8
  __m128i v19; // xmm0
  int v20; // eax
  unsigned int v21; // ebx
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-71h]
  unsigned int v30[4]; // [rsp+40h] [rbp-51h] BYREF
  struct CLayer *v31; // [rsp+50h] [rbp-41h] BYREF
  CFilterEffectLayer *v32[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v33; // [rsp+68h] [rbp-29h]
  char *v34; // [rsp+70h] [rbp-21h]
  _DWORD v35[4]; // [rsp+78h] [rbp-19h] BYREF

  v33 = a5;
  v9 = 0LL;
  v10 = 0LL;
  v34 = a7;
  v32[0] = 0LL;
  v31 = 0LL;
  v11 = 0;
  v12 = (__m128i *)CTreeEffectLayer::RoundOffLayerSize(v30, a3);
  v14 = v13[1];
  v15 = *v12;
  v16 = v13[2] - *v13;
  *(float *)v35 = *v13;
  v17 = v13[3];
  *(__m128i *)v30 = v15;
  v18 = _mm_srli_si128(v15, 8).m128i_u64[0];
  *(float *)&v35[1] = v14;
  *(float *)&v35[2] = v16;
  *(float *)&v35[3] = v17 - v14;
  if ( (int)v18 <= 0 || SHIDWORD(v18) <= 0 )
  {
    v30[0] = 6;
    *(_QWORD *)&v30[2] = a2;
    v11 = 1;
    v28 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 56, v30);
    v21 = v28;
    if ( v28 >= 0 )
      goto LABEL_10;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x15D7u);
    goto LABEL_32;
  }
  if ( !a6 )
    goto LABEL_6;
  if ( (*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL))(a6, 49LL) )
  {
    if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v18, v30[3]) )
    {
      v30[0] = 6;
      *(_QWORD *)&v30[2] = a2;
      v23 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 56, v30);
      v21 = v23;
      if ( v23 >= 0 )
        goto LABEL_10;
      v29 = 5600;
      goto LABEL_17;
    }
    v25 = CFilterEffectLayer::Create(
            this[45],
            (const struct MilPointAndSizeL *)v30,
            a6,
            a2,
            (const struct MilPointAndSizeF *)v35,
            v32);
    v21 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x15EBu);
      v9 = v32[0];
    }
    else
    {
      v9 = v32[0];
      v26 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v32[0], 1, 1);
      v21 = v26;
      if ( v26 >= 0 )
        goto LABEL_10;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x15F1u);
    }
LABEL_32:
    if ( !v9 )
      return v21;
    CFilterEffectLayer::`vector deleting destructor'(v9, 1u);
    goto LABEL_11;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL))(a6, 46LL) )
  {
    v21 = -2147024809;
    v29 = 5667;
    v24 = -2147024809;
    goto LABEL_19;
  }
LABEL_6:
  v19 = _mm_srli_si128(*(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(v32, a6, v30, v35), 8);
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, _mm_cvtsi128_si32(v19), v19.m128i_u32[1]) )
  {
    v30[0] = 6;
    *(_QWORD *)&v30[2] = a2;
    v23 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 56, v30);
    v21 = v23;
    if ( v23 >= 0 )
      goto LABEL_10;
    v29 = 5633;
LABEL_17:
    v24 = v23;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v29);
    return v21;
  }
  if ( (int)CTreeEffectLayer::Create(this[45], v30, a6, a2, v35, v33, &v31) < 0 )
  {
    v30[0] = 6;
    *(_QWORD *)&v30[2] = a2;
    v27 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 56, v30);
    v21 = v27;
    if ( v27 >= 0 )
    {
      v10 = v31;
      v21 = 0;
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1610u);
    v10 = v31;
  }
  else
  {
    v10 = v31;
    v20 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v31, 1, 1);
    v21 = v20;
    if ( v20 >= 0 )
    {
      v10 = 0LL;
LABEL_10:
      *v34 = v11;
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1619u);
  }
LABEL_11:
  if ( v10 )
    CColorSpaceLayer::`vector deleting destructor'(v10, 1u);
  return v21;
}
