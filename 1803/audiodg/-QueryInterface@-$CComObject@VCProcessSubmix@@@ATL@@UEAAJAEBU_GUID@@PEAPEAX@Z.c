/*
 * XREFs of ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015710
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140016B44 (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E2F0 (-QueryInterface@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E300 (-QueryInterface@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CProcessSubmix>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CProcessSubmix::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
