/*
 * XREFs of ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA4C
 * Callers:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18009AF60 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18008AB74 (-RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18013F454 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 */

char __fastcall CCpuClip::FullyContains(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int128 *v7; // r14
  CShape *v8; // r15
  const struct CMILMatrix *v10; // rdx
  __int128 v11; // [rsp+28h] [rbp-59h]
  __int128 v12; // [rsp+28h] [rbp-59h]
  __m256i v13; // [rsp+38h] [rbp-49h]
  __m256i v14; // [rsp+38h] [rbp-49h]
  __int128 v15; // [rsp+58h] [rbp-29h]
  __int128 v16; // [rsp+58h] [rbp-29h]
  __int128 v17; // [rsp+78h] [rbp-9h] BYREF
  __m256i v18; // [rsp+88h] [rbp+7h]
  __int128 v19; // [rsp+A8h] [rbp+27h]
  int v20; // [rsp+B8h] [rbp+37h]

  v3 = 0;
  v7 = 0LL;
  v20 = 0;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( !CShapePtr::IsAxisAlignedRectangle((CShapePtr *)(a1 + 16)) )
      return v3;
    v8 = *(CShape **)(a1 + 16);
    if ( !a3 )
      goto LABEL_5;
    HIDWORD(v12) = 0;
    *((_QWORD *)&v16 + 1) = 0x3F80000000000000LL;
    *(_QWORD *)((char *)&v12 + 4) = *(unsigned int *)(a3 + 4);
    v14.m256i_i32[0] = *(_DWORD *)(a3 + 8);
    LODWORD(v12) = *(_DWORD *)a3;
    *(_OWORD *)&v14.m256i_u64[1] = 0LL;
    v14.m256i_i64[3] = 1065353216LL;
    v14.m256i_i32[1] = *(_DWORD *)(a3 + 12);
    *(_QWORD *)&v16 = *(_QWORD *)(a3 + 16);
    v20 = 0;
    v17 = v12;
    v18 = v14;
    v19 = v16;
  }
  else
  {
    if ( !CShape::IsAxisAlignedRectangle(*(CShape **)a1) )
      return v3;
    v8 = *(CShape **)a1;
    if ( !a3 )
    {
      v7 = *(__int128 **)(a1 + 8);
      goto LABEL_5;
    }
    HIDWORD(v11) = 0;
    *((_QWORD *)&v15 + 1) = 0x3F80000000000000LL;
    v10 = *(const struct CMILMatrix **)(a1 + 8);
    *(_QWORD *)((char *)&v11 + 4) = *(unsigned int *)(a3 + 4);
    v13.m256i_i32[0] = *(_DWORD *)(a3 + 8);
    LODWORD(v11) = *(_DWORD *)a3;
    v13.m256i_i32[1] = *(_DWORD *)(a3 + 12);
    DWORD1(v15) = *(_DWORD *)(a3 + 20);
    v13.m256i_i64[3] = 1065353216LL;
    v20 = 0;
    *(_OWORD *)&v13.m256i_u64[1] = 0LL;
    LODWORD(v15) = *(_DWORD *)(a3 + 16);
    v17 = v11;
    v18 = v13;
    v19 = v15;
    if ( v10 )
      CMILMatrix::Multiply((CMILMatrix *)&v17, v10);
  }
  v7 = &v17;
LABEL_5:
  if ( v8 )
    return CCpuClip::RectangleShapeFullyContains(v8, a2, v7);
  return v3;
}
