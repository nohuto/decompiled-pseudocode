/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14003C9B0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x14001EB20 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x14001EB30 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ @ 0x14001EB40 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ @ 0x14001EB50 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ @ 0x14001EB60 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ @ 0x14001EB70 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffload>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 8LL))(*(_QWORD *)(a1 + 320));
}
