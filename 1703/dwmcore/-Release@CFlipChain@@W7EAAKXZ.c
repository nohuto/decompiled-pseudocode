/*
 * XREFs of ?Release@CFlipChain@@W7EAAKXZ @ 0x1800D5E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CFlipChain::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 8));
}
