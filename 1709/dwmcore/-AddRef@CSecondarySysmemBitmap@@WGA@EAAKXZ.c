/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800C64D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 96));
}
