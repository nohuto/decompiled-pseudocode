/*
 * XREFs of ?Release@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800C6FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasImageSource::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 24));
}
