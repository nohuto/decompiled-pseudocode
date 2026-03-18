/*
 * XREFs of ?Release@CFlipChain@@W7EAAKXZ @ 0x1800C66F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CFlipChain::Release(__int64 a1)
{
  return CHwndBitmap::Release((CHwndBitmap *)(a1 - 8));
}
