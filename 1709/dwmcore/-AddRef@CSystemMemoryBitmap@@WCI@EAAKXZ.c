/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800C6F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 40));
}
