/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14003C9D0
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x14001EB80 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x14001EB90 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ @ 0x14001EBA0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ @ 0x14001EBB0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ @ 0x14001EBC0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ @ 0x14001EBD0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 320));
}
