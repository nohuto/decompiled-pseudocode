/*
 * XREFs of ?GetBitmapSource@CGdiSpriteBitmap@@WFA@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800D5C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetBitmapSource(
        __int64 a1,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  return CGdiSpriteBitmap::GetBitmapSource((CGdiSpriteBitmap *)(a1 - 80), a2, a3);
}
