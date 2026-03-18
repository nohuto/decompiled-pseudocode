/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800DD720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 224));
}
