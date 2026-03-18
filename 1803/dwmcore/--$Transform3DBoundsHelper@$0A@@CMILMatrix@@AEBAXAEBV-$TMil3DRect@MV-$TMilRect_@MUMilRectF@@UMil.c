/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A3F20
 * Callers:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006B28 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x18000BCA8 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004DC40 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18000F5D8 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18000F730 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x180065244 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5AA0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5CA8 (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800A6304 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, float *a2, __m128 *a3)
{
  float *v3; // rbx
  bool v5; // dl
  __int64 v6; // r11
  char v7; // r8
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float *v12; // rax
  __m128 v13; // xmm3
  float v14; // xmm5_4
  __m128 v15; // xmm4
  float v16; // xmm1_4
  __m128 v17; // xmm3
  __m128 v18; // xmm3
  __m128 v19; // xmm3
  float *v20; // r11
  float *v21; // r11
  float *v22; // r11
  __int64 v23; // rcx
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  float v26; // xmm0_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  float v29; // xmm1_4
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm7_4
  float v33; // xmm6_4
  __int128 v34; // xmm1
  __int128 v35; // xmm10
  __int128 v36; // xmm11
  float v37; // xmm1_4
  float v38; // xmm1_4
  __int128 v39; // xmm1
  float v40; // xmm1_4
  float v41; // xmm1_4
  __int128 v42; // xmm1
  float v43; // xmm1_4
  float v44; // xmm1_4
  __int128 v45; // xmm1
  float v46; // xmm1_4
  float v47; // xmm0_4
  __int32 v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm7_4
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm6_4
  float v54; // xmm4_4
  float v55; // xmm2_4
  __m128 v57; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v58; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v59[32]; // [rsp+58h] [rbp-B0h] BYREF
  float v60; // [rsp+78h] [rbp-90h] BYREF
  char v61; // [rsp+7Ch] [rbp-8Ch] BYREF

  v3 = a2;
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3[5]) & _xmm) < 0.000081380211
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3[4]) & _xmm) < 0.000081380211 )
  {
    v7 = *(_BYTE *)(v6 + 64);
    v8 = *v3;
    v9 = v3[2];
    v10 = v3[1];
    v11 = v3[3];
    LOBYTE(v12) = (char)(4 * v7) >> 6;
    v57.m128_f32[0] = *v3;
    *(unsigned __int64 *)((char *)v57.m128_u64 + 4) = __PAIR64__(LODWORD(v9), LODWORD(v10));
    v57.m128_f32[3] = v11;
    if ( (_BYTE)v12 )
    {
      v5 = (_BYTE)v12 == 1;
    }
    else
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v6 - 1.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 4) - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 12) - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 16) - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 20) - 1.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 28) - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 60) - 1.0)) & _xmm) >= 0.000081380211 )
      {
        v5 = 0;
      }
      LOBYTE(v12) = 32 * v5;
      *(_BYTE *)(v6 + 64) = v7 ^ (v7 ^ (-16 - 32 * v5)) & 0x30;
      if ( !v5 )
        goto LABEL_21;
      *(_BYTE *)(v6 + 65) &= ~2u;
      *(_BYTE *)(v6 + 65) |= 0x3Du;
    }
    if ( v5 )
    {
      v13 = (__m128)*(unsigned int *)(v6 + 48);
      v13.m128_f32[0] = v13.m128_f32[0] + v8;
      v14 = *(float *)(v6 + 52) + v10;
      v15.m128_f32[0] = *(float *)(v6 + 48) + v9;
      v16 = *(float *)(v6 + 52) + v11;
LABEL_17:
      v17 = _mm_shuffle_ps(v13, v13, 225);
      v17.m128_f32[0] = v14;
      v18 = _mm_shuffle_ps(v17, v17, 198);
      v18.m128_f32[0] = v15.m128_f32[0];
      v19 = _mm_shuffle_ps(v18, v18, 39);
      v19.m128_f32[0] = v16;
      *a3 = _mm_shuffle_ps(v19, v19, 57);
      a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      return (char)v12;
    }
LABEL_21:
    LOBYTE(v12) = CMILMatrix::IsTranslateAndScaleFor2DInput<1>(v6);
    if ( (_BYTE)v12 )
    {
      v46 = v21[12];
      v13 = (__m128)*(unsigned int *)v21;
      v47 = v21[13];
      v15 = v13;
      v13.m128_f32[0] = (float)(v13.m128_f32[0] * v8) + v46;
      v15.m128_f32[0] = (float)(v15.m128_f32[0] * v9) + v46;
      v14 = (float)(v21[5] * v10) + v47;
      v16 = (float)(v21[5] * v11) + v47;
      if ( *v21 <= 0.0 || v21[5] <= 0.0 )
      {
        v48 = v13.m128_i32[0];
        if ( v13.m128_f32[0] > v15.m128_f32[0] )
        {
          v13 = v15;
          v15.m128_i32[0] = v48;
        }
        v49 = v14;
        if ( v14 > v16 )
        {
          v14 = v16;
          v16 = v49;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(
        (CMILMatrix *)v21,
        (const struct MilRectF *)&v57,
        (struct MilPoint2F *const)v59);
      v57.m128_u64[0] = 4LL;
      v57.m128_u64[1] = (unsigned __int64)v59;
      v58 = v57;
      LOBYTE(v12) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                      v57.m128_f32,
                      (__int64)&v58);
      v16 = v57.m128_f32[3];
      v15.m128_i32[0] = v57.m128_i32[2];
      v14 = v57.m128_f32[1];
      v13 = (__m128)v57.m128_u32[0];
    }
    goto LABEL_17;
  }
  LOBYTE(v12) = CMILMatrix::IsTranslate<1>(v6);
  if ( (_BYTE)v12 )
  {
    a3->m128_f32[0] = v20[12] + *v3;
    a3->m128_f32[1] = v3[1] + v20[13];
    a3[1].m128_f32[0] = v3[4] + v20[14];
    a3->m128_f32[2] = v3[2] + v20[12];
    a3->m128_f32[3] = v3[3] + v20[13];
    a3[1].m128_f32[1] = v3[5] + v20[14];
  }
  else
  {
    LOBYTE(v12) = CMILMatrix::IsTranslateAndScale<1>((__int64)v20);
    if ( (_BYTE)v12 )
    {
      v50 = (float)(*v22 * *v3) + v22[12];
      a3->m128_f32[0] = v50;
      v51 = (float)(v3[1] * v22[5]) + v22[13];
      a3->m128_f32[1] = v51;
      v52 = (float)(v3[4] * v22[10]) + v22[14];
      a3[1].m128_f32[0] = v52;
      v53 = (float)(v3[2] * *v22) + v22[12];
      a3->m128_f32[2] = v53;
      v54 = (float)(v3[3] * v22[5]) + v22[13];
      a3->m128_f32[3] = v54;
      v55 = (float)(v3[5] * v22[10]) + v22[14];
      a3[1].m128_f32[1] = v55;
      if ( *v22 <= 0.0 || v22[5] <= 0.0 || v22[10] <= 0.0 )
      {
        if ( v50 > v53 )
        {
          a3->m128_f32[0] = v53;
          a3->m128_f32[2] = v50;
        }
        if ( v51 > v54 )
        {
          a3->m128_f32[1] = v54;
          a3->m128_f32[3] = v51;
        }
        if ( v52 > v55 )
        {
          a3[1].m128_f32[0] = v55;
          a3[1].m128_f32[1] = v52;
        }
      }
    }
    else
    {
      CMILMatrix::Transform3DRectToPerspective(v22, v3, &v60);
      v12 = (float *)&v61;
      v23 = 2LL;
      v58.m128_u64[0] = 0x7F7FFFFF7F7FFFFFLL;
      v58.m128_u64[1] = 0xFF7FFFFFFF7FFFFFuLL;
      *a3 = v58;
      a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
      v24 = a3[1].m128_u32[0];
      v25 = a3[1].m128_u32[1];
      v26 = a3->m128_f32[2];
      v27 = a3->m128_f32[1];
      v28 = a3->m128_f32[3];
      do
      {
        v29 = *(v12 - 1);
        v30 = a3->m128_f32[0];
        if ( a3->m128_f32[0] > v29 )
        {
          a3->m128_f32[0] = v29;
          v30 = v29;
        }
        v31 = v26;
        if ( v29 > v26 )
        {
          v26 = v29;
          v31 = v29;
        }
        v32 = v27;
        if ( v27 > *v12 )
        {
          v27 = *v12;
          v32 = *v12;
        }
        v33 = v28;
        if ( *v12 > v28 )
        {
          v28 = *v12;
          v33 = *v12;
        }
        v34 = *((unsigned int *)v12 + 1);
        v35 = v24;
        if ( *(float *)&v24 > *(float *)&v34 )
        {
          a3[1].m128_i32[0] = v34;
          v35 = v34;
        }
        v36 = v25;
        if ( *(float *)&v34 > *(float *)&v25 )
        {
          a3[1].m128_i32[1] = v34;
          v36 = v34;
        }
        v37 = v12[2];
        if ( v30 > v37 )
        {
          a3->m128_f32[0] = v37;
          v30 = v37;
        }
        if ( v37 > v31 )
        {
          v26 = v37;
          v31 = v37;
        }
        v38 = v12[3];
        if ( v32 > v38 )
        {
          v27 = v12[3];
          v32 = v27;
        }
        if ( v38 > v33 )
        {
          v28 = v12[3];
          v33 = v28;
        }
        v39 = *((unsigned int *)v12 + 4);
        v24 = v35;
        if ( *(float *)&v35 > *(float *)&v39 )
        {
          a3[1].m128_i32[0] = v39;
          v24 = v39;
        }
        v25 = v36;
        if ( *(float *)&v39 > *(float *)&v36 )
        {
          a3[1].m128_i32[1] = v39;
          v25 = v39;
        }
        v40 = v12[5];
        if ( v30 > v40 )
        {
          a3->m128_f32[0] = v40;
          v30 = v40;
        }
        if ( v40 > v31 )
        {
          v26 = v40;
          v31 = v40;
        }
        v41 = v12[6];
        if ( v32 > v41 )
        {
          v27 = v12[6];
          v32 = v27;
        }
        if ( v41 > v33 )
        {
          v28 = v12[6];
          v33 = v28;
        }
        v42 = *((unsigned int *)v12 + 7);
        if ( *(float *)&v24 > *(float *)&v42 )
        {
          a3[1].m128_i32[0] = v42;
          v24 = v42;
        }
        if ( *(float *)&v42 > *(float *)&v25 )
        {
          a3[1].m128_i32[1] = v42;
          v25 = v42;
        }
        v43 = v12[8];
        if ( v30 > v43 )
          a3->m128_f32[0] = v43;
        if ( v43 > v31 )
          v26 = v43;
        v44 = v12[9];
        if ( v32 > v44 )
          v27 = v12[9];
        if ( v44 > v33 )
          v28 = v12[9];
        v45 = *((unsigned int *)v12 + 10);
        if ( *(float *)&v24 > *(float *)&v45 )
        {
          a3[1].m128_i32[0] = v45;
          v24 = v45;
        }
        if ( *(float *)&v45 > *(float *)&v25 )
        {
          a3[1].m128_i32[1] = v45;
          v25 = v45;
        }
        v12 += 12;
        --v23;
      }
      while ( v23 );
      a3->m128_f32[2] = v26;
      a3->m128_f32[1] = v27;
      a3->m128_f32[3] = v28;
    }
  }
  return (char)v12;
}
