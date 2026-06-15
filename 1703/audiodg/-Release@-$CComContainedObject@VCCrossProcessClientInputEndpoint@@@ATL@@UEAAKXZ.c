/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAKXZ @ 0x140053190
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001FFF0 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x140020000 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLA@EAAKXZ @ 0x140020010 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140020020 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x140020030 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x140020040 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 16LL))(*(_QWORD *)(a1 + 472));
}
