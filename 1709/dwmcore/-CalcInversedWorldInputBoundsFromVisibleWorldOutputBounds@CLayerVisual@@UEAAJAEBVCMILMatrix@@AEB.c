/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180083620
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180052720 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800832C0 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800834F8 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x180160B84 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x18016F9C8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CDropShadow **this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  signed int BoundsWithLayerEffect; // eax
  unsigned int v11; // ebx
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  signed int v20; // eax
  signed int ShadowBounds; // eax
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  signed int v29; // eax
  __int128 v30; // xmm1
  __int128 v31; // [rsp+30h] [rbp-49h] BYREF
  __int128 v32; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-29h]
  __int128 v34; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-11h]

  if ( this[64] )
  {
    ShadowBounds = CLayerVisual::GetShadowBounds((CVisual *)this, &v31);
    v11 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShadowBounds, 0xD8u);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v31, (float *)&v31);
      v23 = *(float *)a3;
      v24 = *(float *)&v31;
      if ( *(float *)a3 > *(float *)&v31 )
      {
        LODWORD(v31) = *(_DWORD *)a3;
        v24 = v23;
      }
      v25 = *(float *)(a3 + 4);
      v26 = *((float *)&v31 + 1);
      if ( v25 > *((float *)&v31 + 1) )
      {
        DWORD1(v31) = *(_DWORD *)(a3 + 4);
        v26 = v25;
      }
      v27 = *((float *)&v31 + 2);
      if ( *((float *)&v31 + 2) > *(float *)(a3 + 8) )
      {
        v27 = *(float *)(a3 + 8);
        *((float *)&v31 + 2) = v27;
      }
      v28 = *((float *)&v31 + 3);
      if ( *((float *)&v31 + 3) > *(float *)(a3 + 12) )
      {
        v28 = *(float *)(a3 + 12);
        *((float *)&v31 + 3) = v28;
      }
      if ( v27 <= v24 || v28 <= v26 )
        v31 = 0uLL;
      CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        (_DWORD)this,
        a2,
        (unsigned int)&v31,
        (unsigned int)&v34,
        (__int64)&v32);
      if ( CDropShadow::GetMaskForLayerVisualNoRef(this[64]) )
      {
        v30 = v32;
        *a5 = v34;
        *a6 = v30;
      }
      else
      {
        v33 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a3 + 16), (__m128)*(unsigned int *)(a3 + 20)).m128_u64[0];
        v32 = v34;
        v29 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds((CVisual *)this, a2, &v32, a4, a5, a6);
        v11 = v29;
        if ( v29 >= 0 )
          return v11;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0xF4u);
      }
    }
    goto LABEL_35;
  }
  BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect((CVisual *)this, (float *)&v31);
  v11 = BoundsWithLayerEffect;
  if ( BoundsWithLayerEffect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BoundsWithLayerEffect, 0xC2u);
LABEL_35:
    if ( (v11 & 0x80000000) != 0 )
    {
      *a5 = *(_OWORD *)a3;
      *a6 = *(_OWORD *)a3;
    }
    return v11;
  }
  CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v31, (float *)&v31);
  v12 = *(float *)a3;
  v13 = *(float *)&v31;
  if ( *(float *)a3 > *(float *)&v31 )
  {
    LODWORD(v31) = *(_DWORD *)a3;
    v13 = v12;
  }
  v14 = *(float *)(a3 + 4);
  v15 = *((float *)&v31 + 1);
  if ( v14 > *((float *)&v31 + 1) )
  {
    DWORD1(v31) = *(_DWORD *)(a3 + 4);
    v15 = v14;
  }
  v16 = *((float *)&v31 + 2);
  if ( *((float *)&v31 + 2) > *(float *)(a3 + 8) )
  {
    v16 = *(float *)(a3 + 8);
    *((float *)&v31 + 2) = v16;
  }
  v17 = *((float *)&v31 + 3);
  if ( *((float *)&v31 + 3) > *(float *)(a3 + 12) )
  {
    v17 = *(float *)(a3 + 12);
    *((float *)&v31 + 3) = v17;
  }
  if ( v16 <= v13 || v17 <= v15 )
  {
    v13 = 0.0;
    v17 = 0.0;
    v16 = 0.0;
    v15 = 0.0;
    v31 = 0uLL;
  }
  *(_QWORD *)((char *)&v32 + 4) = __PAIR64__(LODWORD(v16), LODWORD(v15));
  v18 = (__m128)*(unsigned int *)(a3 + 16);
  v19 = (__m128)*(unsigned int *)(a3 + 20);
  *(float *)&v32 = v13;
  *((float *)&v32 + 3) = v17;
  v34 = v32;
  v35 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
  v20 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds((CVisual *)this, a2, &v34, a4, a5, a6);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xCFu);
    goto LABEL_35;
  }
  return v11;
}
