/*
 * XREFs of ?ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z @ 0x1800BFF3C
 * Callers:
 *     ?ComputeCoordMap@CBrushDrawListGenerator@@AEBAJPEAVCoordMap@@@Z @ 0x180059790 (-ComputeCoordMap@CBrushDrawListGenerator@@AEBAJPEAVCoordMap@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x180057750 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800C0034 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListBrush::ContributeToCoordMap(struct D2D_RECT_F *this, __int64 a2, struct CoordMap *a3)
{
  unsigned int v3; // ebx
  FLOAT left; // xmm1_4
  FLOAT right; // xmm0_4
  FLOAT bottom; // xmm1_4
  FLOAT top; // xmm0_4
  FLOAT v10; // xmm1_4
  __int64 v11; // r9
  const struct D2D_RECT_F *v12; // r10
  int v13; // r11d
  int v14; // eax
  struct D2D_MATRIX_3X2_F v15; // [rsp+40h] [rbp-38h] BYREF
  FLOAT v16; // [rsp+58h] [rbp-20h]
  FLOAT v17; // [rsp+5Ch] [rbp-1Ch]
  FLOAT v18; // [rsp+60h] [rbp-18h]
  FLOAT v19; // [rsp+64h] [rbp-14h]

  v3 = 0;
  if ( LODWORD(this[1].right) == 1 )
  {
    left = this[2].left;
    v15.dx = this[1].bottom;
    right = this[2].right;
    v15.dy = left;
    bottom = this[2].bottom;
    v16 = right;
    top = this[3].top;
    v17 = bottom;
    v10 = this[3].right;
    v18 = top;
    v19 = v10;
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
      (D2DMatrixHelper *)&this->right,
      (const struct D2D_RECT_F *)v15.m[2],
      &v15,
      this);
    v14 = CoordMap::AddNineGrid(
            a3,
            v13,
            (const struct D2D_RECT_F *)&v15,
            (const struct Insets *)(v11 + 84),
            v12,
            (const struct Insets *)(v11 + 68),
            *(unsigned __int8 *)(v11 + 100));
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x85u);
  }
  return v3;
}
