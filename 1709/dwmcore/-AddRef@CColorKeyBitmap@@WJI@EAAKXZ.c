/*
 * XREFs of ?AddRef@CColorKeyBitmap@@WJI@EAAKXZ @ 0x1800C7080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CColorKeyBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 152));
}
