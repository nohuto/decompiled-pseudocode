/*
 * XREFs of ?GetPixelColor@CSectionBitmapRealization@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801D0F00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelColor@CSystemMemoryBitmap@@QEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801C3FB8 (-GetPixelColor@CSystemMemoryBitmap@@QEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetPixelColor(
        CSectionBitmapRealization *this,
        const struct D2D_POINT_2F *a2,
        struct _D3DCOLORVALUE *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = *((_QWORD *)this + 36);
  result = 2291674884LL;
  if ( v3 )
    return CSystemMemoryBitmap::GetPixelColor((CSystemMemoryBitmap *)((v3 - 224) & -(__int64)(v3 != 0)), a2, a3);
  return result;
}
