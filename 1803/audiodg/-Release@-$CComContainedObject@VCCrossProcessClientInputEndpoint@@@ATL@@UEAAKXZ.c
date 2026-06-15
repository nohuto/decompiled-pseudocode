/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAKXZ @ 0x140052D30
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001EEB0 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001EEC0 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001EED0 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x14001EEE0 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLA@EAAKXZ @ 0x14001EEF0 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x14001EF00 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 16LL))(*(_QWORD *)(a1 + 472));
}
