/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140009420
 * Callers:
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400094A0 (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF90 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FFA0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FFB0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessServerInputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
