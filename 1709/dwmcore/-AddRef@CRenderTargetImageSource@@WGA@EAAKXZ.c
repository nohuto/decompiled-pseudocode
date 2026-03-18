/*
 * XREFs of ?AddRef@CRenderTargetImageSource@@WGA@EAAKXZ @ 0x1800C6290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 96));
}
