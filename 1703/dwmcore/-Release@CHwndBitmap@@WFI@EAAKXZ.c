/*
 * XREFs of ?Release@CHwndBitmap@@WFI@EAAKXZ @ 0x1800D5CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 88));
}
