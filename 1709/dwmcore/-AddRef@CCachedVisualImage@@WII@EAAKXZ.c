/*
 * XREFs of ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800C6560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::AddRef(__int64 a1)
{
  return CFlipChain::AddRef((CFlipChain *)(a1 - 136));
}
