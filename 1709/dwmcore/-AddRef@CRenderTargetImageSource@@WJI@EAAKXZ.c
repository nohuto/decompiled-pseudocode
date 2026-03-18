/*
 * XREFs of ?AddRef@CRenderTargetImageSource@@WJI@EAAKXZ @ 0x1800C62A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 152));
}
