/*
 * XREFs of ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800D5570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 72));
}
