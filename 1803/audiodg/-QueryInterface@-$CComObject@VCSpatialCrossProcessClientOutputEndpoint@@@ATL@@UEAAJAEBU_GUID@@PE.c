/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140058FA0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F270 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F280 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F290 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F2A0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F2B0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F2C0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F2D0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAJAEBU_GUID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSpatialCrossProcessClientOutputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
