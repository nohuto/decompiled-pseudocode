/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001ED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::QueryInterface(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::QueryInterface(a1 - 8);
}
