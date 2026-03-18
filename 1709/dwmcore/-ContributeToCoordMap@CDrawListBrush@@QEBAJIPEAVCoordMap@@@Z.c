/*
 * XREFs of ?ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z @ 0x18011CAA4
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x18009F8A8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListBrush::ContributeToCoordMap(struct D2D_RECT_F *this, __int64 a2, struct CoordMap *a3)
{
  unsigned int v3; // ebx
  FLOAT left; // xmm1_4
  FLOAT right; // xmm0_4
  FLOAT bottom; // xmm1_4
  FLOAT top; // xmm0_4
  FLOAT v9; // xmm1_4
  __int64 v10; // r9
  const struct D2D_RECT_F *v11; // r10
  int v12; // r11d
  signed int v13; // eax
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
    v9 = this[3].right;
    v18 = top;
    v19 = v9;
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
      (D2DMatrixHelper *)&this->right,
      (const struct D2D_RECT_F *)v15.m[2],
      &v15,
      this);
    v13 = CoordMap::AddNineGrid(
            a3,
            v12,
            (const struct D2D_RECT_F *)&v15,
            (const struct Insets *)(v10 + 84),
            v11,
            (const struct Insets *)(v10 + 68),
            *(unsigned __int8 *)(v10 + 100));
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x85u);
  }
  return v3;
}
