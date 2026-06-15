/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001FE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 8);
}
