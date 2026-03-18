/*
 * XREFs of ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800DD780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 32));
}
