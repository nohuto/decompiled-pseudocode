/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14003C2B0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001DE10 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001DE20 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001DE30 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001DE40 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001DE50 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001DE60 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceOffload::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
