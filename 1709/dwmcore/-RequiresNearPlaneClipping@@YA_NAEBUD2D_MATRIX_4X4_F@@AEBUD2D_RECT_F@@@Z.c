/*
 * XREFs of ?RequiresNearPlaneClipping@@YA_NAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@@Z @ 0x180191FF4
 * Callers:
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x180192070 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RequiresNearPlaneClipping(const struct D2D_MATRIX_4X4_F *a1, const struct D2D_RECT_F *a2)
{
  float _24; // xmm1_4
  float v3; // xmm5_4
  float _44; // xmm3_4
  float v5; // xmm2_4
  bool result; // al

  _24 = a1->_24;
  v3 = a1->_14 * a2->left;
  _44 = a1->_44;
  result = 1;
  if ( (float)((float)((float)(_24 * a2->top) + v3) + _44) > 0.000099999997
    && (float)((float)((float)(_24 * a2->bottom) + v3) + _44) > 0.000099999997 )
  {
    v5 = a1->_14 * a2->right;
    if ( (float)((float)((float)(_24 * a2->top) + v5) + _44) > 0.000099999997
      && (float)((float)((float)(_24 * a2->bottom) + v5) + _44) > 0.000099999997 )
    {
      return 0;
    }
  }
  return result;
}
