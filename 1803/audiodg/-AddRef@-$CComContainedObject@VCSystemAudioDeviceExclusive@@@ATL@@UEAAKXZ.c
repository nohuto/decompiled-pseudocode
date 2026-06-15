/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140044980
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14001D9E0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14001E290 (-AddRef@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14001E2A0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
}
