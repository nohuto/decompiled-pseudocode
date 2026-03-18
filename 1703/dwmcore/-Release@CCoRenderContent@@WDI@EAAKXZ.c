/*
 * XREFs of ?Release@CCoRenderContent@@WDI@EAAKXZ @ 0x1800D66D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCoRenderContent::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 56));
}
