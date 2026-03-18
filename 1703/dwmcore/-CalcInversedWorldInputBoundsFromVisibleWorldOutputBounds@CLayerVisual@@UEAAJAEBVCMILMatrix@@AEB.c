/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180013C90
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013E6C (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013F24 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800878D0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Intersect@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180128608 (-Intersect@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801616C0 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CVisual *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  int BoundsWithLayerEffect; // eax
  unsigned int v10; // ebx
  __m128 v11; // xmm1
  int v12; // eax
  int ShadowBounds; // eax
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v17; // [rsp+30h] [rbp-49h] BYREF
  __int128 v18; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-29h]
  __int128 v20; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-11h]

  if ( *((_QWORD *)this + 62) )
  {
    ShadowBounds = CLayerVisual::GetShadowBounds(this, &v20);
    v10 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShadowBounds, 0xD8u);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v20, &v20);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Intersect(&v20, a3);
      CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        (_DWORD)this,
        a2,
        (unsigned int)&v20,
        (unsigned int)&v17,
        (__int64)&v18);
      if ( *(_QWORD *)(*((_QWORD *)this + 62) + 136LL) )
      {
        v15 = v18;
        *a5 = v17;
        *a6 = v15;
      }
      else
      {
        v19 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a3 + 16), (__m128)*(unsigned int *)(a3 + 20)).m128_u64[0];
        v18 = v17;
        v14 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, (__int64)a5, (__int64)a6);
        v10 = v14;
        if ( v14 >= 0 )
          return v10;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF4u);
      }
    }
  }
  else
  {
    BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(this, &v17);
    v10 = BoundsWithLayerEffect;
    if ( BoundsWithLayerEffect < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsWithLayerEffect, 0xC2u);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v17, &v17);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Intersect(&v17, a3);
      v11 = (__m128)*(unsigned int *)(a3 + 16);
      v18 = v17;
      v11.m128_u64[0] = _mm_unpacklo_ps(v11, (__m128)*(unsigned int *)(a3 + 20)).m128_u64[0];
      v20 = v17;
      v21 = v11.m128_u64[0];
      v12 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, (__int64)a5, (__int64)a6);
      v10 = v12;
      if ( v12 >= 0 )
        return v10;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xCFu);
    }
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    *a5 = *(_OWORD *)a3;
    *a6 = *(_OWORD *)a3;
  }
  return v10;
}
