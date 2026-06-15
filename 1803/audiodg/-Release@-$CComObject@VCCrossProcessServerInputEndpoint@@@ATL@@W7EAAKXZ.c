/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001EFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(__int64 a1)
{
  return ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((CCrossProcessBaseServerEndpoint *)(a1 - 8));
}
