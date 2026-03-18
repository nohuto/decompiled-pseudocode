/*
 * XREFs of ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800DD800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 144));
}
