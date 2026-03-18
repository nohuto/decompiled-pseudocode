/*
 * XREFs of ?FindPrimitiveRect@CBrushDrawListGenerator@@CA_NV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18008C67C
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180016DFC (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18001793C (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180018260 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall CBrushDrawListGenerator::FindPrimitiveRect(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 i; // rdx
  __int64 v8; // r9
  int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  struct D2D_MATRIX_3X2_F *v13; // r11
  __int64 v14; // r9
  float *v15; // rdx
  const struct D2D_MATRIX_3X2_F *v16; // r8
  unsigned __int64 v17; // xmm1_8

  *a3 = 50529027;
  v5 = *a1;
  for ( i = 0LL; ; ++i )
  {
    if ( i == v5 )
      return 0;
    v8 = *(_QWORD *)(a1[1] + 8 * i);
    if ( v8 && *(_BYTE *)(v8 + 52) )
    {
      v9 = *(_DWORD *)(v8 + 48);
      *a3 = v9;
      if ( !v9 )
        return 0;
      if ( v9 != 50529027 )
        break;
    }
  }
  if ( D2DMatrixHelper::Is2DAxisAlignedPreserving(
         (D2DMatrixHelper *)(v8 + 8),
         (const struct D2D_MATRIX_3X2_F *)(v8 + 8)) )
  {
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
      (D2DMatrixHelper *)(v12 + 32),
      (const struct D2D_RECT_F *)v11,
      v13,
      (struct D2D_RECT_F *)v12);
    *a3 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
            (D2DMatrixHelper *)*(unsigned int *)(v14 + 48),
            v15,
            v16);
    *(_OWORD *)a4 = _xmm;
    v17 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  else
  {
    *(_OWORD *)&v13->m11 = *(_OWORD *)(v12 + 32);
    *a3 = *(_DWORD *)(v12 + 48);
    *(_OWORD *)a4 = *(_OWORD *)v11;
    v17 = *(_QWORD *)(v11 + 16);
  }
  *(_QWORD *)(a4 + 16) = v17;
  return 1;
}
