/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001ED10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::QueryInterface(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::QueryInterface(a1 - 400);
}
