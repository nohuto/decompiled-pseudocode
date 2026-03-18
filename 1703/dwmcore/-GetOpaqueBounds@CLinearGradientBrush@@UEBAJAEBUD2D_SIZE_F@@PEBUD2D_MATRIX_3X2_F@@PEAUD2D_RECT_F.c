/*
 * XREFs of ?GetOpaqueBounds@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180162110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientBrush::GetOpaqueBounds(
        CLinearGradientBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 153) )
    return CSurfaceBrush::GetOpaqueBounds(this, a2, a3, a4);
  result = 0LL;
  *a4 = 0LL;
  return result;
}
