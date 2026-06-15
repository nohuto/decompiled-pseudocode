/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400526F0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF30 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF40 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF50 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF60 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF70 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLA@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FF80 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessClientOutputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
