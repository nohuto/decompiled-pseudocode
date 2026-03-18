/*
 * XREFs of ?AddRef@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800C6280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 24));
}
