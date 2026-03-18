/*
 * XREFs of ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x1800D5BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 16));
}
