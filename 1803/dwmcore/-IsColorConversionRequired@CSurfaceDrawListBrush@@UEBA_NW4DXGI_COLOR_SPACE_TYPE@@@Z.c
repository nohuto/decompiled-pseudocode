/*
 * XREFs of ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800B8610 (-GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(
        CSurfaceDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)(CBitmapSourceD2DCacheAdapter::GetPixelFormatInfo((__int64)this + 56, (__int64)v3) + 8) != a2;
}
