/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001ECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 384, a2);
}
