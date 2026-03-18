/*
 * XREFs of ?AddRef@CHwndRenderTarget@@WEA@EAAKXZ @ 0x1800D6690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 64));
}
