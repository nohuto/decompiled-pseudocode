/*
 * XREFs of ?AddRef@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800DD4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 168));
}
