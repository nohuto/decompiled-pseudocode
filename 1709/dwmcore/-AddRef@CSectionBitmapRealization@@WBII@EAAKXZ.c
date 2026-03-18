/*
 * XREFs of ?AddRef@CSectionBitmapRealization@@WBII@EAAKXZ @ 0x1800C7200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 392));
}
