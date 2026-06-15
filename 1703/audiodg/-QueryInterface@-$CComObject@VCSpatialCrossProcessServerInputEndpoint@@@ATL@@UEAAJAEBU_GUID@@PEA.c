/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140058C90
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020420 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020430 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020440 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020450 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDII@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020460 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WEEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020470 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WEEA@EAAJAEBU_GUID@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSpatialCrossProcessServerInputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
