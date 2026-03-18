/*
 * XREFs of ?AddRef@CHwndRenderTarget@@WEA@EAAKXZ @ 0x1800C5E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndRenderTarget::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 64));
}
