/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140050CB0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001FD80 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001FD90 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001FDA0 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 8LL))(*(_QWORD *)(a1 + 464));
}
