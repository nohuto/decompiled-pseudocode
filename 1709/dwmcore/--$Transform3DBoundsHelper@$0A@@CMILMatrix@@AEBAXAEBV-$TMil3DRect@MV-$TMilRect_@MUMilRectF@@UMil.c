/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180059A5C
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D18 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800B1B20 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A560 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18018F334 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18018FF7C (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 */

float *__fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rcx
  float *v5; // r11
  float *result; // rax
  float *v7; // rcx
  float *v8; // r11
  __int128 v9; // xmm0
  float *v10; // r10
  float *v11; // r11
  int v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int128 v26; // [rsp+28h] [rbp-59h] BYREF
  __int128 v27; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v28[4]; // [rsp+58h] [rbp-29h] BYREF
  char v29; // [rsp+5Ch] [rbp-25h] BYREF

  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[5]) & _xmm) < 0.000081380211
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[4]) & _xmm) < 0.000081380211 )
  {
    v26 = *(_OWORD *)v5;
    result = (float *)CMILMatrix::Transform2DBoundsHelper<0>(v4, &v26, &v27);
    v9 = v27;
    *(_OWORD *)a3 = v27;
    *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v26 = v9;
  }
  else
  {
    result = (float *)CMILMatrix::IsTranslate<1>();
    if ( (_BYTE)result )
    {
      *(float *)a3 = *v8 + v7[12];
      *((float *)a3 + 1) = v8[1] + v7[13];
      *((float *)a3 + 4) = v8[4] + v7[14];
      *((float *)a3 + 2) = v8[2] + v7[12];
      *((float *)a3 + 3) = v8[3] + v7[13];
      *((float *)a3 + 5) = v8[5] + v7[14];
    }
    else
    {
      result = (float *)CMILMatrix::IsTranslateAndScale<1>();
      if ( (_BYTE)result )
      {
        *(float *)a3 = (float)(*v11 * *v10) + v10[12];
        *((float *)a3 + 1) = (float)(v11[1] * v10[5]) + v10[13];
        *((float *)a3 + 4) = (float)(v11[4] * v10[10]) + v10[14];
        *((float *)a3 + 2) = (float)(v11[2] * *v10) + v10[12];
        *((float *)a3 + 3) = (float)(v11[3] * v10[5]) + v10[13];
        *((float *)a3 + 5) = (float)(v11[5] * v10[10]) + v10[14];
        if ( *v10 <= 0.0 || v10[5] <= 0.0 || v10[10] <= 0.0 )
        {
          v12 = *a3;
          v13 = *((float *)a3 + 2);
          if ( *(float *)a3 > v13 )
          {
            *(float *)a3 = v13;
            a3[2] = v12;
          }
          v14 = *((float *)a3 + 1);
          v15 = *((float *)a3 + 3);
          if ( v14 > v15 )
          {
            *((float *)a3 + 1) = v15;
            *((float *)a3 + 3) = v14;
          }
          v16 = *((float *)a3 + 4);
          v17 = *((float *)a3 + 5);
          if ( v16 > v17 )
          {
            *((float *)a3 + 4) = v17;
            *((float *)a3 + 5) = v16;
          }
        }
      }
      else
      {
        CMILMatrix::Transform3DRectToPerspective(v10, v11, v28);
        result = (float *)&v29;
        v18 = 8LL;
        *(_QWORD *)&v27 = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD *)&v27 + 1) = 0xFF7FFFFFFF7FFFFFuLL;
        *(_OWORD *)a3 = v27;
        *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
        v19 = *((float *)a3 + 1);
        v20 = *((float *)a3 + 4);
        v21 = *((float *)a3 + 2);
        v22 = *((float *)a3 + 3);
        v23 = *((float *)a3 + 5);
        do
        {
          v24 = *(result - 1);
          if ( *(float *)a3 > v24 )
            *(float *)a3 = v24;
          if ( v24 > v21 )
            v21 = v24;
          if ( v19 > *result )
            v19 = *result;
          if ( *result > v22 )
            v22 = *result;
          v25 = result[1];
          if ( v20 > v25 )
            v20 = result[1];
          if ( v25 > v23 )
            v23 = result[1];
          result += 3;
          --v18;
        }
        while ( v18 );
        *((float *)a3 + 1) = v19;
        *((float *)a3 + 4) = v20;
        *((float *)a3 + 2) = v21;
        *((float *)a3 + 3) = v22;
        *((float *)a3 + 5) = v23;
      }
    }
  }
  return result;
}
