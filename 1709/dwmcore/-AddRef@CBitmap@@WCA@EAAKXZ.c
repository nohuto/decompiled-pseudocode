/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800C6880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 32));
}
