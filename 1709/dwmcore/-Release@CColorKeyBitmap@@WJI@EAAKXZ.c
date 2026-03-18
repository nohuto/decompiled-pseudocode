/*
 * XREFs of ?Release@CColorKeyBitmap@@WJI@EAAKXZ @ 0x1800C70D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CColorKeyBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 152));
}
