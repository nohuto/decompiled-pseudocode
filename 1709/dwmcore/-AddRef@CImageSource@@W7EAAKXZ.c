/*
 * XREFs of ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800C6620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSource::AddRef(__int64 a1)
{
  return CFlipChain::AddRef((CFlipChain *)(a1 - 8));
}
