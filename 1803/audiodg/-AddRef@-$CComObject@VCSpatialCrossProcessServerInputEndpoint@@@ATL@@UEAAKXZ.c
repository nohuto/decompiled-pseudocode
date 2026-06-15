/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140058880
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001F140 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x14001F150 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x14001F160 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJA@EAAKXZ @ 0x14001F170 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJI@EAAKXZ @ 0x14001F180 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WEEI@EAAKXZ @ 0x14001F190 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WEEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 1104), a2);
}
