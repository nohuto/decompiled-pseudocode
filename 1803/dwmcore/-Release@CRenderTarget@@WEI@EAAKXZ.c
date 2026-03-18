/*
 * XREFs of ?Release@CRenderTarget@@WEI@EAAKXZ @ 0x1800DD570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 72));
}
