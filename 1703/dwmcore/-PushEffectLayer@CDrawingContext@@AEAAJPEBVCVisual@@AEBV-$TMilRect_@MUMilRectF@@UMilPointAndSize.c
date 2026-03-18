/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000D620
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180002170 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180002330 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000DD5C (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18001027C (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180010700 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x180014200 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18001AA50 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrus.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FBBC (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v19)(struct CFilterEffect *, __int64); // rax
  char v20; // al
  __int64 (__fastcall *v21)(struct CFilterEffect *, __int64); // rax
  char v22; // al
  __m128i v23; // xmm0
  int v24; // eax
  unsigned int v25; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // r9d
  int v31; // eax
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-71h]
  unsigned int v34[4]; // [rsp+40h] [rbp-51h] BYREF
  struct CLayer *v35; // [rsp+50h] [rbp-41h] BYREF
  CFilterEffectLayer *v36[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v37; // [rsp+68h] [rbp-29h]
  char *v38; // [rsp+70h] [rbp-21h]
  _DWORD v39[4]; // [rsp+78h] [rbp-19h] BYREF

  v37 = a5;
  v9 = 0LL;
  v10 = 0LL;
  v38 = a7;
  v36[0] = 0LL;
  v35 = 0LL;
  v11 = 0;
  v12 = (__m128i *)CTreeEffectLayer::RoundOffLayerSize(v34, a3);
  v14 = v13[1];
  v15 = *v12;
  v16 = v13[2] - *v13;
  *(float *)v39 = *v13;
  v17 = v13[3];
  *(__m128i *)v34 = v15;
  v18 = _mm_srli_si128(v15, 8).m128i_u64[0];
  *(float *)&v39[1] = v14;
  *(float *)&v39[2] = v16;
  *(float *)&v39[3] = v17 - v14;
  if ( (int)v18 <= 0 || SHIDWORD(v18) <= 0 )
  {
    v34[0] = 6;
    *(_QWORD *)&v34[2] = a2;
    v11 = 1;
    v32 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 55, v34);
    v25 = v32;
    if ( v32 >= 0 )
      goto LABEL_13;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x181Cu);
    goto LABEL_37;
  }
  v19 = *(__int64 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL);
  if ( (char *)v19 == (char *)CEffectBrush::IsOfType )
    v20 = CEffectBrush::IsOfType(a6, 8LL);
  else
    v20 = v19(a6, 8LL);
  if ( v20 )
  {
    if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v18, v34[3]) )
    {
      v34[0] = 6;
      *(_QWORD *)&v34[2] = a2;
      v29 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 55, v34);
      v25 = v29;
      if ( v29 >= 0 )
        goto LABEL_13;
      v33 = 6181;
      goto LABEL_24;
    }
    v27 = CFilterEffectLayer::Create(
            this[46],
            (const struct _GUID *)((char *)this[4] + 324),
            (const struct MilPointAndSizeL *)v34,
            a6,
            a2,
            (const struct MilPointAndSizeF *)v39,
            v36);
    v25 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1831u);
      v9 = v36[0];
    }
    else
    {
      v9 = v36[0];
      v28 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v36[0], 1, 1);
      v25 = v28;
      if ( v28 >= 0 )
        goto LABEL_13;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1837u);
    }
LABEL_37:
    if ( !v9 )
      return v25;
    CFilterEffectLayer::`vector deleting destructor'(v9, 1);
    goto LABEL_14;
  }
  v21 = *(__int64 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 48LL);
  if ( (char *)v21 == (char *)CEffectBrush::IsOfType )
    v22 = CEffectBrush::IsOfType(a6, 85LL);
  else
    v22 = v21(a6, 85LL);
  if ( !v22 )
  {
    v25 = -2147024809;
    v33 = 6250;
    v30 = -2147024809;
    goto LABEL_26;
  }
  v23 = _mm_srli_si128(*(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(v36, a6, v34, v39), 8);
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, _mm_cvtsi128_si32(v23), v23.m128i_u32[1]) )
  {
    v34[0] = 6;
    *(_QWORD *)&v34[2] = a2;
    v29 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 55, v34);
    v25 = v29;
    if ( v29 >= 0 )
      goto LABEL_13;
    v33 = 6215;
LABEL_24:
    v30 = v29;
LABEL_26:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v33);
    return v25;
  }
  if ( (int)((__int64 (__fastcall *)(struct IRenderTarget *, char *, unsigned int *, struct CFilterEffect *, struct CVisual *, _DWORD *, __int64, struct CLayer **))CTreeEffectLayer::Create)(
              this[46],
              (char *)this[4] + 324,
              v34,
              a6,
              a2,
              v39,
              v37,
              &v35) < 0 )
  {
    v34[0] = 6;
    *(_QWORD *)&v34[2] = a2;
    v31 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 55, v34);
    v25 = v31;
    if ( v31 >= 0 )
    {
      v10 = v35;
      v25 = 0;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1857u);
    v10 = v35;
  }
  else
  {
    v10 = v35;
    v24 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v35, 1, 1);
    v25 = v24;
    if ( v24 >= 0 )
    {
      v10 = 0LL;
LABEL_13:
      *v38 = v11;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x1860u);
  }
LABEL_14:
  if ( v10 )
    CColorSpaceLayer::`vector deleting destructor'(v10, 1u);
  return v25;
}
