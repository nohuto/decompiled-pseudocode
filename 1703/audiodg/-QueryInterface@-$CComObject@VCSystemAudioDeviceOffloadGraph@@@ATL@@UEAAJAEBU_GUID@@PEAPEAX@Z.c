/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14003E990
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F210 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F220 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F230 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F240 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F250 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F260 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F270 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F280 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceOffloadGraph::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
