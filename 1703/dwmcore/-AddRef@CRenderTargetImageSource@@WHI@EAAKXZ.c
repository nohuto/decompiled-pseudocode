/*
 * XREFs of ?AddRef@CRenderTargetImageSource@@WHI@EAAKXZ @ 0x1800D5980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 120));
}
