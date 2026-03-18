/*
 * XREFs of ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800ABFD4
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800297CC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __m128 v3; // xmm1
  __m128 v6; // xmm2
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm0_4
  FLOAT v11; // xmm8_4
  FLOAT v12; // xmm6_4
  __m128 v13; // xmm7
  float v14; // xmm4_4
  float v15; // xmm3_4
  __m128 v16; // xmm5
  float v17; // xmm6_4
  float m22; // xmm4_4
  __m128 dy_low; // xmm5
  float m21; // xmm3_4
  FLOAT v21; // xmm1_4
  __m128 dx_low; // xmm2
  float v23; // xmm1_4
  __m128 m12_low; // xmm5
  __m128 v25; // xmm1
  __int128 v26; // [rsp+28h] [rbp-39h]
  float v27[6]; // [rsp+28h] [rbp-39h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+48h] [rbp-19h] BYREF

  v3 = (__m128)*((unsigned int *)this + 18);
  v3.m128_f32[0] = v3.m128_f32[0] * a2->width;
  v6 = (__m128)*((unsigned int *)this + 19);
  v6.m128_f32[0] = v6.m128_f32[0] * a2->height;
  *(_OWORD *)&a3->m11 = _xmm;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(_mm_xor_ps(v3, (__m128)_xmm), _mm_xor_ps(v6, (__m128)_xmm)).m128_u64[0];
  v7 = *((float *)this + 24);
  v8 = *((float *)this + 20);
  v9 = *((float *)this + 21);
  if ( v7 != 1.0 || *((float *)this + 25) != 1.0 )
  {
    v17 = *((float *)this + 25);
    m22 = a3->m22;
    dy_low = (__m128)LODWORD(a3->dy);
    m21 = a3->m21;
    v21 = (float)(a3->m11 * v7) + (float)(a3->m12 * 0.0);
    matrix.m12 = (float)(v17 * a3->m12) + (float)(a3->m11 * 0.0);
    matrix.m11 = v21;
    matrix.m21 = (float)(m21 * v7) + (float)(m22 * 0.0);
    dx_low = (__m128)LODWORD(a3->dx);
    v23 = dx_low.m128_f32[0] * 0.0;
    matrix.m22 = (float)(m22 * v17) + (float)(m21 * 0.0);
    dx_low.m128_f32[0] = (float)(dx_low.m128_f32[0] * v7) + (float)(dy_low.m128_f32[0] * 0.0);
    dy_low.m128_f32[0] = (float)((float)(dy_low.m128_f32[0] * v17) + v23) + (float)(v9 - (float)(v17 * v9));
    *(_OWORD *)&a3->m11 = *(_OWORD *)&matrix.m11;
    dx_low.m128_f32[0] = dx_low.m128_f32[0] + (float)(v8 - (float)(v7 * v8));
    *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(dx_low, dy_low).m128_u64[0];
  }
  v10 = *((float *)this + 26);
  if ( v10 != 0.0 )
  {
    D2D1MakeRotateMatrix(v10 * 57.295776, (D2D1_POINT_2F)__PAIR64__(LODWORD(v9), LODWORD(v8)), &matrix);
    m12_low = (__m128)LODWORD(matrix.m12);
    v27[0] = (float)(matrix.m21 * a3->m12) + (float)(matrix.m11 * a3->m11);
    v27[1] = (float)(matrix.m12 * a3->m11) + (float)(matrix.m22 * a3->m12);
    v27[2] = (float)(matrix.m21 * a3->m22) + (float)(matrix.m11 * a3->m21);
    v25 = (__m128)LODWORD(a3->dx);
    m12_low.m128_f32[0] = (float)((float)(matrix.m12 * a3->dx) + (float)(matrix.m22 * a3->dy)) + matrix.dy;
    v27[3] = (float)(matrix.m12 * a3->m21) + (float)(matrix.m22 * a3->m22);
    v25.m128_f32[0] = (float)((float)(v25.m128_f32[0] * matrix.m11) + (float)(matrix.m21 * a3->dy)) + matrix.dx;
    *(_OWORD *)&a3->m11 = *(_OWORD *)v27;
    *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(v25, m12_low).m128_u64[0];
  }
  v11 = *((float *)this + 22) + a3->dx;
  a3->dx = v11;
  v12 = *((float *)this + 23) + a3->dy;
  a3->dy = v12;
  v13 = (__m128)*((unsigned int *)this + 27);
  v14 = *((float *)this + 29);
  v15 = *((float *)this + 30);
  v16 = (__m128)*((unsigned int *)this + 28);
  *(float *)&v26 = (float)(*((float *)this + 27) * a3->m11) + (float)(v14 * a3->m12);
  *((float *)&v26 + 1) = (float)(v16.m128_f32[0] * a3->m11) + (float)(v15 * a3->m12);
  *((float *)&v26 + 2) = (float)(v13.m128_f32[0] * a3->m21) + (float)(v14 * a3->m22);
  v13.m128_f32[0] = (float)((float)(v13.m128_f32[0] * v11) + (float)(v14 * v12)) + *((float *)this + 31);
  *((float *)&v26 + 3) = (float)(*((float *)this + 28) * a3->m21) + (float)(v15 * a3->m22);
  v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] * v11) + (float)(v15 * v12)) + *((float *)this + 32);
  *(_OWORD *)&a3->m11 = v26;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(v13, v16).m128_u64[0];
}
