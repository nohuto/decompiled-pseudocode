/*
 * XREFs of ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003D3F0 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180055A98 (-GetWorldBounds2D@CPreComputeContext@@AEAA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x180082780 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV-$TMilRect_@MUM.c)
 *     ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1800831F8 (-InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMil3DRect@MV-$TMilRect_.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A560 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18018F334 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18018FF7C (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 */

float *__fastcall CMILMatrix::Transform3DBoundsHelper<1>(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rcx
  float *v5; // r10
  float *result; // rax
  __int128 v7; // xmm0
  char v8; // si
  bool v9; // di
  float *v10; // rcx
  float *v11; // r10
  _BYTE *v12; // rcx
  unsigned int v13; // edx
  float *v14; // r10
  float *v15; // r11
  int v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  __int64 v22; // rcx
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int128 v30; // [rsp+20h] [rbp-69h] BYREF
  __int128 v31; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v32[4]; // [rsp+50h] [rbp-39h] BYREF
  char v33; // [rsp+54h] [rbp-35h] BYREF

  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[5]) & _xmm) < 0.000081380211
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[4]) & _xmm) < 0.000081380211 )
  {
    v30 = *(_OWORD *)v5;
    result = (float *)CMILMatrix::Transform2DBoundsHelper<1>(v4, &v30, &v31);
    v7 = v31;
    *(_OWORD *)a3 = v31;
    *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v30 = v7;
    return result;
  }
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)CMILMatrix::IsTranslate<1>() )
  {
    v9 = 1;
    *(float *)a3 = *v11 + v10[12];
    *((float *)a3 + 1) = v11[1] + v10[13];
    *((float *)a3 + 4) = v11[4] + v10[14];
    *((float *)a3 + 2) = v11[2] + v10[12];
    *((float *)a3 + 3) = v11[3] + v10[13];
    *((float *)a3 + 5) = v11[5] + v10[14];
  }
  else
  {
    if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>() )
    {
      CMILMatrix::Transform3DRectToPerspective(v15, v14, v32);
      v12 = v32;
      v13 = 24;
      goto LABEL_8;
    }
    *(float *)a3 = (float)(*v14 * *v15) + v15[12];
    *((float *)a3 + 1) = (float)(v14[1] * v15[5]) + v15[13];
    *((float *)a3 + 4) = (float)(v14[4] * v15[10]) + v15[14];
    *((float *)a3 + 2) = (float)(v14[2] * *v15) + v15[12];
    *((float *)a3 + 3) = (float)(v14[3] * v15[5]) + v15[13];
    *((float *)a3 + 5) = (float)(v14[5] * v15[10]) + v15[14];
    if ( *v15 > 0.0 && v15[5] > 0.0 )
      v9 = v15[10] > 0.0;
  }
  v12 = a3;
  v13 = 6;
  v8 = 1;
LABEL_8:
  LODWORD(result) = 0;
  do
  {
    result = (float *)(unsigned int)((_DWORD)result + 1);
    v12 += 4;
  }
  while ( (unsigned int)result < v13 );
  if ( !v9 )
  {
    if ( v8 )
    {
      v16 = *a3;
      v17 = *((float *)a3 + 2);
      if ( *(float *)a3 > v17 )
      {
        *(float *)a3 = v17;
        a3[2] = v16;
      }
      v18 = *((float *)a3 + 1);
      v19 = *((float *)a3 + 3);
      if ( v18 > v19 )
      {
        *((float *)a3 + 1) = v19;
        *((float *)a3 + 3) = v18;
      }
      v20 = *((float *)a3 + 4);
      v21 = *((float *)a3 + 5);
      if ( v20 > v21 )
      {
        *((float *)a3 + 4) = v21;
        *((float *)a3 + 5) = v20;
      }
    }
    else
    {
      result = (float *)&v33;
      v22 = 8LL;
      *(_QWORD *)&v31 = 0x7F7FFFFF7F7FFFFFLL;
      *((_QWORD *)&v31 + 1) = 0xFF7FFFFFFF7FFFFFuLL;
      *(_OWORD *)a3 = v31;
      *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
      v23 = *((float *)a3 + 1);
      v24 = *((float *)a3 + 4);
      v25 = *((float *)a3 + 2);
      v26 = *((float *)a3 + 3);
      v27 = *((float *)a3 + 5);
      do
      {
        v28 = *(result - 1);
        if ( *(float *)a3 > v28 )
          *(float *)a3 = v28;
        if ( v28 > v25 )
          v25 = v28;
        if ( v23 > *result )
          v23 = *result;
        if ( *result > v26 )
          v26 = *result;
        v29 = result[1];
        if ( v24 > v29 )
          v24 = result[1];
        if ( v29 > v27 )
          v27 = result[1];
        result += 3;
        --v22;
      }
      while ( v22 );
      *((float *)a3 + 5) = v27;
      *((float *)a3 + 1) = v23;
      *((float *)a3 + 4) = v24;
      *((float *)a3 + 2) = v25;
      *((float *)a3 + 3) = v26;
    }
  }
  return result;
}
