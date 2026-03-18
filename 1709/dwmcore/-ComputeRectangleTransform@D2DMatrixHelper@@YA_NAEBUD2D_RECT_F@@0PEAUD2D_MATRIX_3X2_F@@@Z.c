/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BDC50
 * Callers:
 *     ?DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCBitmapResource@@AEBUMilRectF@@@Z @ 0x18001D8BC (-DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??8?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z @ 0x180036B40 (--8-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z.c)
 */

char __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // r9
  __int128 v8; // xmm0
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v12; // xmm6
  float v13; // xmm1_4
  float v14; // xmm0_4
  __m128 v15; // xmm6
  float v16; // xmm5_4
  float v17; // xmm3_4
  __int128 v18; // [rsp+20h] [rbp-38h]

  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::operator==((float *)this, &a2->left) )
  {
    v8 = _xmm;
    v9 = 0LL;
    v10 = 0LL;
  }
  else
  {
    v12 = (__m128)*(unsigned int *)(v5 + 4);
    v13 = *(float *)(v5 + 8) - *(float *)v5;
    v14 = *(float *)(v5 + 12) - v12.m128_f32[0];
    if ( v13 == 0.0 && v14 == 0.0 )
      return 0;
    v9 = (__m128)*(unsigned int *)(v4 + 12);
    v15 = _mm_xor_ps(v12, (__m128)_xmm);
    LODWORD(v16) = *(_DWORD *)v5 ^ _xmm;
    v17 = (float)(*(float *)(v4 + 8) - *(float *)v4) / v13;
    v9.m128_f32[0] = (float)(v9.m128_f32[0] - *(float *)(v4 + 4)) / v14;
    *(float *)&v18 = v17 + 0.0;
    *((float *)&v18 + 1) = (float)(v9.m128_f32[0] * 0.0) + 0.0;
    v10 = v15;
    *((float *)&v18 + 2) = (float)(v17 * 0.0) + 0.0;
    v10.m128_f32[0] = (float)((float)(v15.m128_f32[0] * 0.0) + (float)(v17 * v16)) + *(float *)v4;
    *((float *)&v18 + 3) = v9.m128_f32[0] + 0.0;
    v8 = v18;
    v9.m128_f32[0] = (float)((float)(v9.m128_f32[0] * v15.m128_f32[0]) + (float)(v16 * 0.0)) + *(float *)(v4 + 4);
  }
  *(_OWORD *)v6 = v8;
  *(_QWORD *)(v6 + 16) = _mm_unpacklo_ps(v10, v9).m128_u64[0];
  return v7;
}
