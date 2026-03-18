/*
 * XREFs of ?Release@CCachedVisualImage@@WFA@EAAKXZ @ 0x1800D5E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCachedVisualImage::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 80));
}
