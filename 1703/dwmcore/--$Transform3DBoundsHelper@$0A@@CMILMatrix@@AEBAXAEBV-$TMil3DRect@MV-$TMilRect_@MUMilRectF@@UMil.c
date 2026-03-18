/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180088340 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801547C4 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndS_ea_1801547C4.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180178318 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800113A0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x1800114D0 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x180099DE0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // r10
  float *v5; // r11
  float v6; // xmm1_4
  float v7; // xmm1_4
  float *v8; // rax
  __int128 v9; // xmm0
  float *v10; // r10
  float *v11; // r11
  float v12; // xmm1_4
  float *v13; // r10
  float *v14; // r11
  __int64 v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  __int128 v29; // [rsp+28h] [rbp-59h] BYREF
  __int128 v30; // [rsp+40h] [rbp-41h] BYREF
  float v31; // [rsp+58h] [rbp-29h] BYREF
  char v32; // [rsp+5Ch] [rbp-25h] BYREF

  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2) )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[5]) & _xmm);
    if ( v6 < 0.00012207031 )
    {
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[4]) & _xmm);
      if ( v7 < 0.00012207031 )
      {
        v29 = *(_OWORD *)v5;
        LOBYTE(v8) = CMILMatrix::Transform2DBoundsHelper<0>(v4, &v29, &v30);
        v9 = v30;
        *(_OWORD *)a3 = v30;
        *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v29 = v9;
        return (char)v8;
      }
    }
  }
  LOBYTE(v8) = CMILMatrix::IsTranslate<1>(v4);
  if ( (_BYTE)v8 )
  {
    *(float *)a3 = *v11 + v10[12];
    *((float *)a3 + 1) = v11[1] + v10[13];
    *((float *)a3 + 4) = v11[4] + v10[14];
    *((float *)a3 + 2) = v11[2] + v10[12];
    *((float *)a3 + 3) = v11[3] + v10[13];
    v12 = v11[5] + v10[14];
LABEL_8:
    *((float *)a3 + 5) = v12;
    return (char)v8;
  }
  LOBYTE(v8) = CMILMatrix::IsTranslateAndScale<1>((__int64)v10);
  if ( (_BYTE)v8 )
  {
    *(float *)a3 = (float)(*v14 * *v13) + v13[12];
    *((float *)a3 + 1) = (float)(v14[1] * v13[5]) + v13[13];
    *((float *)a3 + 4) = (float)(v14[4] * v13[10]) + v13[14];
    *((float *)a3 + 2) = (float)(v14[2] * *v13) + v13[12];
    *((float *)a3 + 3) = (float)(v14[3] * v13[5]) + v13[13];
    *((float *)a3 + 5) = (float)(v14[5] * v13[10]) + v13[14];
    if ( *v13 <= 0.0 || v13[5] <= 0.0 || v13[10] <= 0.0 )
    {
      v23 = *a3;
      v24 = *((float *)a3 + 2);
      if ( *(float *)a3 > v24 )
      {
        *(float *)a3 = v24;
        a3[2] = v23;
      }
      v25 = *((float *)a3 + 1);
      v26 = *((float *)a3 + 3);
      if ( v25 > v26 )
      {
        *((float *)a3 + 1) = v26;
        *((float *)a3 + 3) = v25;
      }
      v12 = *((float *)a3 + 4);
      v27 = *((float *)a3 + 5);
      if ( v12 > v27 )
      {
        *((float *)a3 + 4) = v27;
        goto LABEL_8;
      }
    }
  }
  else
  {
    CMILMatrix::Transform3DRectToPerspective(v13, v14, &v31);
    v8 = (float *)&v32;
    v15 = 8LL;
    *(_QWORD *)&v30 = 0x7F7FFFFF7F7FFFFFLL;
    *((_QWORD *)&v30 + 1) = 0xFF7FFFFFFF7FFFFFuLL;
    *(_OWORD *)a3 = v30;
    *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
    v16 = *((float *)a3 + 1);
    v17 = *((float *)a3 + 4);
    v18 = *((float *)a3 + 2);
    v19 = *((float *)a3 + 3);
    v20 = *((float *)a3 + 5);
    do
    {
      v21 = *(v8 - 1);
      if ( *(float *)a3 > v21 )
        *(float *)a3 = v21;
      if ( v21 > v18 )
        v18 = v21;
      if ( v16 > *v8 )
        v16 = *v8;
      if ( *v8 > v19 )
        v19 = *v8;
      v22 = v8[1];
      if ( v17 > v22 )
        v17 = v8[1];
      if ( v22 > v20 )
        v20 = v8[1];
      v8 += 3;
      --v15;
    }
    while ( v15 );
    *((float *)a3 + 1) = v16;
    *((float *)a3 + 4) = v17;
    *((float *)a3 + 2) = v18;
    *((float *)a3 + 3) = v19;
    *((float *)a3 + 5) = v20;
  }
  return (char)v8;
}
