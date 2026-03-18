/*
 * XREFs of ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1801AE250
 * Callers:
 *     ?AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180040260 (-AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVerte.c)
 * Callees:
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801AE2EC (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  float v13[10]; // [rsp+20h] [rbp-28h]

  D2DMatrixHelper::GetScaleDimensions(this, a2, a3, a4);
  v8 = 1.0 / a2->m11;
  v9 = 1.0 / *a3;
  v10 = v8 * *(float *)this;
  v13[1] = v8 * *((float *)this + 1);
  v11 = (__m128)*((unsigned int *)this + 4);
  v13[0] = v10;
  v13[2] = v9 * *((float *)this + 2);
  v13[3] = v9 * *((float *)this + 3);
  v12 = (__m128)*((unsigned int *)this + 5);
  *(_OWORD *)a4 = *(_OWORD *)v13;
  *((_QWORD *)a4 + 2) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
}
