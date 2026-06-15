/*
 * XREFs of ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008CE0
 * Callers:
 *     ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x1400023B0 (-DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 *     ?ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002490 (-ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002A50 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140006670 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ??$try_copy@UISubmixInternal@@@?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISubmixInternal@@Uerr_returncode_policy@wil@@@1@XZ @ 0x140008780 (--$try_copy@UISubmixInternal@@@-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-$.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EA20 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EA30 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EA40 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CStreamGroup>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CStreamGroup::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
