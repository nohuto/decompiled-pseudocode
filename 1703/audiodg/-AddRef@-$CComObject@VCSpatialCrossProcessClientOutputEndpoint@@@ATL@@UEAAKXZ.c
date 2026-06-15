/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140058560
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x140020210 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140020220 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140020230 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDII@EAAKXZ @ 0x140020240 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDII@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAKXZ @ 0x140020250 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAKXZ @ 0x140020260 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDMI@EAAKXZ @ 0x140020270 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDMI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 984));
}
