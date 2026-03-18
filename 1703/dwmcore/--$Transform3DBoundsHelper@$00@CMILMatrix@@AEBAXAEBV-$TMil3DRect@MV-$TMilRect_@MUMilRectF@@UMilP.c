/*
 * XREFs of ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820
 * Callers:
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18000DEDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x1800108B4 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV-$TMilRect_@MUM.c)
 *     ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180011214 (-InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMil3DRect@MV-$TMilRect_.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001FE78 (-GetWorldBounds2D@CPreComputeContext@@AEAA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800113A0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x1800114D0 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x180099DE0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform3DBoundsHelper<1>(__int64 a1, __int64 a2, float *a3)
{
  float *v4; // r10
  __int64 v5; // r11
  float *result; // rax
  __int128 v7; // xmm0
  char v8; // si
  bool v9; // di
  float *v10; // r10
  float *v11; // r11
  unsigned int v12; // edx
  unsigned int i; // ecx
  float *v14; // r10
  float *v15; // r11
  __int64 v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm0_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  __int128 v39; // [rsp+20h] [rbp-69h] BYREF
  __int128 v40; // [rsp+38h] [rbp-51h] BYREF
  float v41; // [rsp+50h] [rbp-39h] BYREF
  char v42; // [rsp+54h] [rbp-35h] BYREF

  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[5]) & _xmm) < 0.00012207031
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[4]) & _xmm) < 0.00012207031 )
  {
    v39 = *(_OWORD *)v4;
    result = (float *)CMILMatrix::Transform2DBoundsHelper<1>(v5, &v39, &v40);
    v7 = v40;
    *(_OWORD *)a3 = v40;
    *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v39 = v7;
    return result;
  }
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(v5) )
  {
    v8 = 1;
    v9 = 1;
    *a3 = *v10 + v11[12];
    a3[1] = v10[1] + v11[13];
    a3[4] = v10[4] + v11[14];
    a3[2] = v10[2] + v11[12];
    a3[3] = v10[3] + v11[13];
    a3[5] = v10[5] + v11[14];
  }
  else
  {
    if ( !CMILMatrix::IsTranslateAndScale<1>((__int64)v11) )
    {
      CMILMatrix::Transform3DRectToPerspective(v15, v14, &v41);
      result = &v41;
      v12 = 24;
      goto LABEL_8;
    }
    v8 = 1;
    *a3 = (float)(*v14 * *v15) + v15[12];
    a3[1] = (float)(v14[1] * v15[5]) + v15[13];
    a3[4] = (float)(v14[4] * v15[10]) + v15[14];
    a3[2] = (float)(v14[2] * *v15) + v15[12];
    a3[3] = (float)(v14[3] * v15[5]) + v15[13];
    a3[5] = (float)(v14[5] * v15[10]) + v15[14];
    if ( *v15 > 0.0 && v15[5] > 0.0 )
      v9 = v15[10] > 0.0;
  }
  result = a3;
  v12 = 6;
LABEL_8:
  for ( i = 0; i < v12; ++i )
    ++result;
  if ( !v9 )
  {
    if ( v8 )
    {
      v33 = *a3;
      v34 = a3[2];
      if ( *a3 > v34 )
      {
        *a3 = v34;
        a3[2] = v33;
      }
      v35 = a3[1];
      v36 = a3[3];
      if ( v35 > v36 )
      {
        a3[1] = v36;
        a3[3] = v35;
      }
      v37 = a3[4];
      v38 = a3[5];
      if ( v37 > v38 )
      {
        a3[4] = v38;
        a3[5] = v37;
      }
    }
    else
    {
      result = (float *)&v42;
      v16 = 2LL;
      *(_QWORD *)&v40 = 0x7F7FFFFF7F7FFFFFLL;
      *((_QWORD *)&v40 + 1) = 0xFF7FFFFFFF7FFFFFuLL;
      *(_OWORD *)a3 = v40;
      *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
      v17 = a3[2];
      v18 = a3[1];
      v19 = a3[3];
      v20 = a3[4];
      v21 = a3[5];
      do
      {
        v22 = *(result - 1);
        if ( *a3 > v22 )
          *a3 = v22;
        if ( v22 > v17 )
          v17 = v22;
        if ( v18 > *result )
          v18 = *result;
        if ( *result > v19 )
          v19 = *result;
        v23 = result[1];
        if ( v20 > v23 )
          v20 = result[1];
        if ( v23 > v21 )
          v21 = result[1];
        v24 = result[2];
        if ( *a3 > v24 )
          *a3 = v24;
        if ( v24 > v17 )
          v17 = v24;
        v25 = result[3];
        if ( v18 > v25 )
          v18 = result[3];
        if ( v25 > v19 )
          v19 = result[3];
        v26 = result[4];
        if ( v20 > v26 )
          v20 = result[4];
        if ( v26 > v21 )
          v21 = result[4];
        v27 = result[5];
        if ( *a3 > v27 )
          *a3 = v27;
        if ( v27 > v17 )
          v17 = v27;
        v28 = result[6];
        if ( v18 > v28 )
          v18 = result[6];
        if ( v28 > v19 )
          v19 = result[6];
        v29 = result[7];
        if ( v20 > v29 )
          v20 = result[7];
        if ( v29 > v21 )
          v21 = result[7];
        v30 = result[8];
        if ( *a3 > v30 )
          *a3 = v30;
        if ( v30 > v17 )
          v17 = v30;
        v31 = result[9];
        if ( v18 > v31 )
          v18 = result[9];
        if ( v31 > v19 )
          v19 = result[9];
        v32 = result[10];
        if ( v20 > v32 )
          v20 = result[10];
        if ( v32 > v21 )
          v21 = result[10];
        result += 12;
        --v16;
      }
      while ( v16 );
      a3[2] = v17;
      a3[1] = v18;
      a3[3] = v19;
      a3[4] = v20;
      a3[5] = v21;
    }
  }
  return result;
}
