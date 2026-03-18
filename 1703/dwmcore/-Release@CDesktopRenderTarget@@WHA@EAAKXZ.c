/*
 * XREFs of ?Release@CDesktopRenderTarget@@WHA@EAAKXZ @ 0x1800D68C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 112));
}
