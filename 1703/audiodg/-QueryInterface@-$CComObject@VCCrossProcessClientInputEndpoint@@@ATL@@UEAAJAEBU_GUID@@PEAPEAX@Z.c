/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400526D0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FED0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FEE0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FEF0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF00 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF10 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF20 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessClientInputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
