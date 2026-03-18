/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800C6510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondarySysmemBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 96));
}
