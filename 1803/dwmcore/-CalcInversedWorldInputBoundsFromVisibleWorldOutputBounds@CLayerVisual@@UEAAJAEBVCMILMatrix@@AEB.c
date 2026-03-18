/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180009F90
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009D6C (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009E58 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18004BD70 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18018A428 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801981FC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198470 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CDropShadow **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  int BoundsWithLayerEffect; // eax
  unsigned int v10; // edi
  FLOAT v11; // xmm1_4
  float v12; // xmm0_4
  FLOAT v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  FLOAT v16; // xmm2_4
  float v17; // xmm6_4
  FLOAT v18; // xmm3_4
  float v19; // xmm4_4
  __int64 v20; // xmm1_8
  int v21; // eax
  int ShadowBounds; // eax
  FLOAT v24; // xmm0_4
  float left; // xmm1_4
  float v26; // xmm0_4
  float top; // xmm2_4
  float v28; // xmm0_4
  float right; // xmm3_4
  float v30; // xmm0_4
  float bottom; // xmm4_4
  FLOAT v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  int v40; // eax
  __int128 v41; // xmm1
  struct D2D_RECT_F v42; // [rsp+38h] [rbp-69h] BYREF
  float v43; // [rsp+48h] [rbp-59h] BYREF
  float v44; // [rsp+4Ch] [rbp-55h]
  float v45; // [rsp+50h] [rbp-51h]
  float v46; // [rsp+54h] [rbp-4Dh]
  __int64 v47[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v48; // [rsp+68h] [rbp-39h]
  __int128 v49; // [rsp+70h] [rbp-31h] BYREF
  __int64 v50; // [rsp+80h] [rbp-21h]

  if ( a1[65] )
  {
    ShadowBounds = CLayerVisual::GetShadowBounds((CLayerVisual *)a1, &v42);
    v10 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShadowBounds, 0xD9u);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v42, &v42);
      v24 = *(float *)a3;
      left = v42.left;
      if ( *(float *)a3 > v42.left )
      {
        v42.left = *(FLOAT *)a3;
        left = v24;
      }
      v26 = *(float *)(a3 + 4);
      top = v42.top;
      if ( v26 > v42.top )
      {
        v42.top = *(FLOAT *)(a3 + 4);
        top = v26;
      }
      v28 = *(float *)(a3 + 8);
      right = v42.right;
      if ( v42.right > v28 )
      {
        v42.right = *(FLOAT *)(a3 + 8);
        right = v28;
      }
      v30 = *(float *)(a3 + 12);
      bottom = v42.bottom;
      if ( v42.bottom > v30 )
      {
        v42.bottom = *(FLOAT *)(a3 + 12);
        bottom = v30;
      }
      if ( right <= left || bottom <= top )
      {
        v42.bottom = 0.0;
        v42.right = 0.0;
        v42.top = 0.0;
        v42.left = 0.0;
      }
      CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds((int)a1, (__int64)v47);
      CLayerVisual::GetMaskBounds((CLayerVisual *)a1);
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v43, &v43);
      v32 = *(float *)a3;
      v33 = v43;
      if ( *(float *)a3 > v43 )
      {
        v43 = *(float *)a3;
        v33 = v32;
      }
      v34 = *(float *)(a3 + 4);
      v35 = v44;
      if ( v34 > v44 )
      {
        v44 = *(float *)(a3 + 4);
        v35 = v34;
      }
      v36 = *(float *)(a3 + 8);
      v37 = v45;
      if ( v45 > v36 )
      {
        v45 = *(float *)(a3 + 8);
        v37 = v36;
      }
      v38 = *(float *)(a3 + 12);
      v39 = v46;
      if ( v46 > v38 )
      {
        v46 = *(float *)(a3 + 12);
        v39 = v38;
      }
      if ( v37 <= v33 || v39 <= v35 )
      {
        v46 = 0.0;
        v45 = 0.0;
        v44 = 0.0;
        v43 = 0.0;
      }
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v49, &v43);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v47, &v43);
      if ( CDropShadow::GetMaskForLayerVisualNoRef(a1[65]) )
      {
        v41 = *(_OWORD *)v47;
        *a5 = v49;
        *a6 = v41;
      }
      else
      {
        v48 = *(_QWORD *)(a3 + 16);
        *(_OWORD *)v47 = v49;
        v40 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds((CVisual *)a1, (__int64)a5, (__int64)a6);
        v10 = v40;
        if ( v40 >= 0 )
          return v10;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x112u);
      }
    }
    goto LABEL_46;
  }
  BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect((CLayerVisual *)a1, &v42);
  v10 = BoundsWithLayerEffect;
  if ( BoundsWithLayerEffect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsWithLayerEffect, 0xC2u);
LABEL_46:
    if ( (v10 & 0x80000000) != 0 )
    {
      *a5 = *(_OWORD *)a3;
      *a6 = *(_OWORD *)a3;
    }
    return v10;
  }
  CMILMatrix::Transform2DBoundsHelper<1>(a2, &v42, &v42);
  v11 = *(float *)a3;
  v12 = v42.left;
  if ( *(float *)a3 > v42.left )
  {
    v42.left = *(FLOAT *)a3;
    v12 = v11;
  }
  v13 = v42.top;
  v14 = *(float *)(a3 + 4);
  v15 = v42.top;
  if ( v14 > v42.top )
  {
    v42.top = *(FLOAT *)(a3 + 4);
    v13 = v14;
    v15 = v14;
  }
  v16 = v42.right;
  v17 = v42.right;
  if ( v42.right > *(float *)(a3 + 8) )
  {
    v42.right = *(FLOAT *)(a3 + 8);
    v16 = v42.right;
    v17 = v42.right;
  }
  v18 = v42.bottom;
  v19 = v42.bottom;
  if ( v42.bottom > *(float *)(a3 + 12) )
  {
    v42.bottom = *(FLOAT *)(a3 + 12);
    v18 = v42.bottom;
    v19 = v42.bottom;
  }
  if ( v17 <= v12 || v19 <= v15 )
  {
    v12 = 0.0;
    v18 = 0.0;
    v16 = 0.0;
    v42.bottom = 0.0;
    v13 = 0.0;
    v42.right = 0.0;
    v42.top = 0.0;
    v42.left = 0.0;
  }
  *((FLOAT *)v47 + 1) = v13;
  v20 = *(_QWORD *)(a3 + 16);
  *(float *)v47 = v12;
  v47[1] = __PAIR64__(LODWORD(v18), LODWORD(v16));
  v50 = v20;
  v49 = *(_OWORD *)v47;
  v21 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds((CVisual *)a1, (__int64)a5, (__int64)a6);
  v10 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xCFu);
    goto LABEL_46;
  }
  return v10;
}
