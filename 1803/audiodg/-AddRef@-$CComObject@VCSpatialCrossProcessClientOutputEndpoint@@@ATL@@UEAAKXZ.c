/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140058870
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001F0D0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x14001F0E0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x14001F0F0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAKXZ @ 0x14001F100 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAKXZ @ 0x14001F110 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAKXZ @ 0x14001F120 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAKXZ @ 0x14001F130 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 992), a2);
}
