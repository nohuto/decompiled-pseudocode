/*
 * XREFs of ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180095178
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __m128 v3; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm6
  float v8; // xmm7_4
  float v9; // xmm0_4
  FLOAT v10; // xmm8_4
  FLOAT v11; // xmm6_4
  __m128 v12; // xmm7
  float v13; // xmm4_4
  float v14; // xmm3_4
  __m128 v15; // xmm5
  __m128 v16; // xmm4
  float v17; // xmm8_4
  float m21; // xmm3_4
  FLOAT v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm2_4
  FLOAT v23; // xmm1_4
  float v24; // xmm0_4
  float dx; // xmm1_4
  __m128 m12_low; // xmm5
  __m128 dx_low; // xmm1
  __int128 v28; // [rsp+28h] [rbp-19h]
  float v29[6]; // [rsp+28h] [rbp-19h]
  D2D1_POINT_2F center; // [rsp+40h] [rbp-1h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+48h] [rbp+7h] BYREF

  v3 = (__m128)*((unsigned int *)this + 18);
  v3.m128_f32[0] = v3.m128_f32[0] * a2->width;
  v6 = (__m128)*((unsigned int *)this + 19);
  v6.m128_f32[0] = v6.m128_f32[0] * a2->height;
  *(_OWORD *)&a3->m11 = _xmm;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(_mm_xor_ps(v3, (__m128)_xmm), _mm_xor_ps(v6, (__m128)_xmm)).m128_u64[0];
  v7 = (__m128)*((unsigned int *)this + 24);
  v8 = *((float *)this + 20);
  center.x = v8;
  center.y = *((FLOAT *)this + 21);
  if ( v7.m128_f32[0] != 1.0 || *((float *)this + 25) != 1.0 )
  {
    v16 = (__m128)*((unsigned int *)this + 25);
    v17 = *((float *)this + 21) - (float)(*((float *)this + 25) * *((float *)this + 21));
    m21 = a3->m21;
    v19 = (float)(v7.m128_f32[0] * a3->m11) + (float)(a3->m12 * 0.0);
    v20 = a3->m22 * 0.0;
    matrix.m12 = (float)(*((float *)this + 25) * a3->m12) + (float)(a3->m11 * 0.0);
    v21 = v16.m128_f32[0];
    v16.m128_f32[0] = v16.m128_f32[0] * a3->dy;
    v22 = v21 * a3->m22;
    matrix.m11 = v19;
    v23 = (float)(v7.m128_f32[0] * m21) + v20;
    v24 = a3->dy * 0.0;
    matrix.m21 = v23;
    dx = a3->dx;
    matrix.m22 = v22 + (float)(m21 * 0.0);
    *(_OWORD *)&a3->m11 = *(_OWORD *)&matrix.m11;
    v7.m128_f32[0] = (float)((float)(v7.m128_f32[0] * dx) + v24) + (float)(v8 - (float)(v7.m128_f32[0] * v8));
    v16.m128_f32[0] = (float)(v16.m128_f32[0] + (float)(dx * 0.0)) + v17;
    *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(v7, v16).m128_u64[0];
  }
  v9 = *((float *)this + 26);
  if ( v9 != 0.0 )
  {
    D2D1MakeRotateMatrix(v9 * 57.295776, center, &matrix);
    m12_low = (__m128)LODWORD(matrix.m12);
    v29[0] = (float)(matrix.m21 * a3->m12) + (float)(a3->m11 * matrix.m11);
    v29[1] = (float)(matrix.m12 * a3->m11) + (float)(matrix.m22 * a3->m12);
    v29[2] = (float)(matrix.m21 * a3->m22) + (float)(a3->m21 * matrix.m11);
    dx_low = (__m128)LODWORD(a3->dx);
    m12_low.m128_f32[0] = (float)((float)(matrix.m12 * a3->dx) + (float)(matrix.m22 * a3->dy)) + matrix.dy;
    v29[3] = (float)(matrix.m12 * a3->m21) + (float)(matrix.m22 * a3->m22);
    dx_low.m128_f32[0] = (float)((float)(dx_low.m128_f32[0] * matrix.m11) + (float)(matrix.m21 * a3->dy)) + matrix.dx;
    *(_OWORD *)&a3->m11 = *(_OWORD *)v29;
    *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(dx_low, m12_low).m128_u64[0];
  }
  v10 = *((float *)this + 22) + a3->dx;
  a3->dx = v10;
  v11 = *((float *)this + 23) + a3->dy;
  a3->dy = v11;
  v12 = (__m128)*((unsigned int *)this + 27);
  v13 = *((float *)this + 29);
  v14 = *((float *)this + 30);
  v15 = (__m128)*((unsigned int *)this + 28);
  *(float *)&v28 = (float)(*((float *)this + 27) * a3->m11) + (float)(v13 * a3->m12);
  *((float *)&v28 + 1) = (float)(v15.m128_f32[0] * a3->m11) + (float)(v14 * a3->m12);
  *((float *)&v28 + 2) = (float)(v12.m128_f32[0] * a3->m21) + (float)(v13 * a3->m22);
  v12.m128_f32[0] = (float)((float)(v12.m128_f32[0] * v10) + (float)(v13 * v11)) + *((float *)this + 31);
  *((float *)&v28 + 3) = (float)(*((float *)this + 28) * a3->m21) + (float)(v14 * a3->m22);
  v15.m128_f32[0] = (float)((float)(v15.m128_f32[0] * v10) + (float)(v14 * v11)) + *((float *)this + 32);
  *(_OWORD *)&a3->m11 = v28;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(v12, v15).m128_u64[0];
}
