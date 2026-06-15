/*
 * XREFs of ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015360
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400159D0 (-CreateInstance@-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E410 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E420 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E430 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CAPOWrapperSrv::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
