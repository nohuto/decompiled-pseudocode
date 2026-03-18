/*
 * XREFs of ?GetOpaqueBounds@CColorBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180159C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorBrush::GetOpaqueBounds(
        CColorBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm2_4
  struct D2D_RECT_F v6; // [rsp+0h] [rbp-18h]

  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 23) - 1.0)) & _xmm);
  if ( v4 >= 0.0000011920929 )
  {
    *a4 = 0LL;
  }
  else
  {
    *(_QWORD *)&v6.left = 0LL;
    *(struct D2D_SIZE_F *)&v6.right = *a2;
    *a4 = v6;
  }
  return 0LL;
}
