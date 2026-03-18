/*
 * XREFs of ?Release@CAtlasImageSource@@WBA@EAAKXZ @ 0x1800C6FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasImageSource::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 16));
}
