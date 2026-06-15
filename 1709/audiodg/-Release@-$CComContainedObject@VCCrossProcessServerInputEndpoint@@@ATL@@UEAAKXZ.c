/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140055110
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001FD50 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001FD60 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001FD70 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 16LL))(*(_QWORD *)(a1 + 464));
}
