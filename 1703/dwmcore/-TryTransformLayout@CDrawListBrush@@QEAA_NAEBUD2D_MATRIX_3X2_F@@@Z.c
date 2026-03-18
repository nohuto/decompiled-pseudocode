/*
 * XREFs of ?TryTransformLayout@CDrawListBrush@@QEAA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015FA50
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001BF48 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180041464 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

bool __fastcall CDrawListBrush::TryTransformLayout(CDrawListBrush *this, struct D2D_MATRIX_3X2_F *a2)
{
  float *v2; // rax
  __int64 v3; // rcx
  bool result; // al
  float v5[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( *((_DWORD *)this + 6) != 1 )
  {
    v2 = Matrix3x3::operator*((float *)this + 7, v5, &a2->m11);
    *(_OWORD *)v3 = *(_OWORD *)v2;
    *(_OWORD *)(v3 + 16) = *((_OWORD *)v2 + 1);
    *(float *)(v3 + 32) = v2[8];
    return 1;
  }
  result = D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)a2);
  if ( result )
    return 1;
  return result;
}
