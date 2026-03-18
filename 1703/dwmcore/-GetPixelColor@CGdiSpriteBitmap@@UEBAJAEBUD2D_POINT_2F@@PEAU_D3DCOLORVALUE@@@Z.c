/*
 * XREFs of ?GetPixelColor@CGdiSpriteBitmap@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801637E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelColor@CSystemMemoryBitmap@@QEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801A8E28 (-GetPixelColor@CSystemMemoryBitmap@@QEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetPixelColor(
        CGdiSpriteBitmap *this,
        const struct D2D_POINT_2F *a2,
        struct _D3DCOLORVALUE *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  *(struct _D3DCOLORVALUE *)&a3->r = *(const struct _D3DCOLORVALUE *)&stru_1801FC928.r;
  if ( !*((_QWORD *)this + 37) )
  {
    v4 = *((_QWORD *)this - 1);
    if ( v4 )
      return CSystemMemoryBitmap::GetPixelColor((CSystemMemoryBitmap *)((v4 - 16) & -(__int64)(v4 != 0)), a2, a3);
  }
  return result;
}
