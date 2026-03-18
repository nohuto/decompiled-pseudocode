/*
 * XREFs of ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180155C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800488DC (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(
        CSurfaceDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo((__int64)this + 144, (__int64)v3) + 8) != a2;
}
