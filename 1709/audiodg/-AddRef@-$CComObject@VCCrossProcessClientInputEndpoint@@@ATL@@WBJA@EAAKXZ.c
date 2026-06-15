/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x14001FB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComObject<CCrossProcessClientOutputEndpoint>::AddRef(a1 - 400);
}
