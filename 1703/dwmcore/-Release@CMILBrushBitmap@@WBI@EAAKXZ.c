/*
 * XREFs of ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x1800D60B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::Release(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::Release((CBitmapOfDeviceBitmaps *)(a1 - 24));
}
