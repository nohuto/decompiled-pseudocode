/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801616C0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180013C90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801613E8 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x1801615C0 (-CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV-$TMilRect_@MU.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180161930 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __m128 *a3,
        __m128 *a4,
        __m128 *a5)
{
  float v9; // xmm6_4
  int MaskBounds; // eax
  int v11; // ebx
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  __m128 v16; // xmm7
  float v17; // xmm8_4
  float v18; // xmm9_4
  __int32 v19; // xmm10_4
  __m128 v20; // [rsp+38h] [rbp-A1h] BYREF
  __m128 v21; // [rsp+48h] [rbp-91h] BYREF
  __m128 v22; // [rsp+58h] [rbp-81h] BYREF
  float v23[4]; // [rsp+68h] [rbp-71h] BYREF
  float v24[4]; // [rsp+78h] [rbp-61h] BYREF
  float v25[4]; // [rsp+88h] [rbp-51h] BYREF

  v9 = *(float *)(*(_QWORD *)(a1 + 496) + 96LL);
  MaskBounds = CLayerVisual::GetMaskBounds(a1, &v21);
  v11 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MaskBounds, 0x191u);
  }
  else
  {
    v12 = v21.m128_f32[0];
    v13 = v21.m128_f32[1];
    v14 = v21.m128_f32[2];
    v20 = v21;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v20.m128_f32) )
    {
      v20.m128_f32[0] = v12 - v9;
      v20.m128_f32[1] = v13 - v9;
      v20.m128_f32[2] = v14 + v9;
      v20.m128_f32[3] = v15 + v9;
    }
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v21, v25);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v20, v23);
    v22 = *a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
      a1,
      a2,
      (struct Windows::Foundation::Numerics::float4x4 *)&v22,
      v23,
      v20.m128_f32,
      (__int64)v24);
    v22 = v20;
    CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(a1, &v22, (__int64)v25, (__int64)&v20, v24);
    v16 = v20;
    LODWORD(v17) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    LODWORD(v18) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    v19 = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    *(unsigned __int64 *)((char *)v20.m128_u64 + 4) = __PAIR64__(LODWORD(v18), LODWORD(v17));
    v20.m128_i32[3] = v19;
    *a4 = v16;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v20.m128_f32) )
    {
      v16.m128_f32[0] = v16.m128_f32[0] - v9;
      v17 = v17 - v9;
      v18 = v18 + v9;
      *(float *)&v19 = *(float *)&v19 + v9;
    }
    v20.m128_u64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 104LL);
    v21.m128_f32[0] = v16.m128_f32[0] + v20.m128_f32[0];
    v21.m128_f32[1] = v17 + v20.m128_f32[1];
    v21.m128_f32[2] = v18 + v20.m128_f32[0];
    v21.m128_f32[3] = *(float *)&v19 + v20.m128_f32[1];
    *a5 = v21;
  }
  if ( v11 < 0 )
  {
    *a4 = *a3;
    *a5 = *a3;
  }
}
