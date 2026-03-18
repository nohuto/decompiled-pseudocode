/*
 * XREFs of ?AddRef@CCachedVisualImage@@WFA@EAAKXZ @ 0x1800D5DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 80));
}
