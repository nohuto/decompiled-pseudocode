/*
 * XREFs of ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800DD580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 72));
}
