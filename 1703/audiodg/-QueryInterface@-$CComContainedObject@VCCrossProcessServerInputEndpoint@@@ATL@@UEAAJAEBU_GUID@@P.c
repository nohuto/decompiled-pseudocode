/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400526B0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FEA0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FEB0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FEC0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 464))(*(_QWORD *)(a1 + 464));
}
