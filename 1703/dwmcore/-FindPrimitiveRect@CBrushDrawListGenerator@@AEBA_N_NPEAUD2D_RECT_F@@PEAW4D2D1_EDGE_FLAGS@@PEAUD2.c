/*
 * XREFs of ?FindPrimitiveRect@CBrushDrawListGenerator@@AEBA_N_NPEAUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180059828
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180024080 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800C0034 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AE374 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall CBrushDrawListGenerator::FindPrimitiveRect(
        CBrushDrawListGenerator *this,
        char a2,
        struct D2D_RECT_F *a3,
        enum D2D1_EDGE_FLAGS *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  const struct D2D_MATRIX_3X2_F *i; // rdx
  __int64 v10; // r9
  __int64 v12; // r9
  struct D2D_MATRIX_3X2_F *v13; // r11
  __int64 v14; // xmm4_8
  __int64 v15; // r9
  const struct D2D_MATRIX_3X2_F *v16; // r8
  struct D2D_RECT_F v17; // [rsp+20h] [rbp-50h]
  struct D2D_RECT_F v18; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-28h]

  v5 = *((_DWORD *)this + 26);
  v6 = 0;
  if ( !v5 )
    return 0;
  for ( i = (const struct D2D_MATRIX_3X2_F *)((char *)this + 72); ; i = (const struct D2D_MATRIX_3X2_F *)((char *)i + 8) )
  {
    v10 = *(_QWORD *)&i->m11;
    if ( !*(_QWORD *)&i->m11
      || *(_DWORD *)(v10 + 24) != 2
      || !*(_BYTE *)(v10 + 140)
      || *(_DWORD *)(v10 + 120) == 50529027 )
    {
      goto LABEL_5;
    }
    v17.left = *(FLOAT *)(v10 + 28);
    v17.right = *(FLOAT *)(v10 + 40);
    v17.top = *(FLOAT *)(v10 + 32);
    v17.bottom = *(FLOAT *)(v10 + 44);
    v19 = _mm_unpacklo_ps((__m128)*(unsigned int *)(v10 + 52), (__m128)*(unsigned int *)(v10 + 56)).m128_u64[0];
    v18 = v17;
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)&v18, i) )
      break;
    if ( !a2 )
    {
      *(_OWORD *)&v13->m11 = *(_OWORD *)(v12 + 104);
      *(_DWORD *)a4 = *(_DWORD *)(v12 + 120);
      *(struct D2D_RECT_F *)&a5->m11 = v17;
      *(_QWORD *)&a5->m[2][0] = v14;
      return 1;
    }
LABEL_5:
    if ( ++v6 >= v5 )
      return 0;
  }
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)(v12 + 104),
    &v18,
    v13,
    (struct D2D_RECT_F *)v12);
  *(_DWORD *)a4 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                    (D2DMatrixHelper *)*(unsigned int *)(v15 + 120),
                    (unsigned int)&v18,
                    v16);
  *(_OWORD *)&a5->m11 = _xmm;
  *(_QWORD *)&a5->m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return 1;
}
