/*
 * XREFs of ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x1800DE720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 24));
}
