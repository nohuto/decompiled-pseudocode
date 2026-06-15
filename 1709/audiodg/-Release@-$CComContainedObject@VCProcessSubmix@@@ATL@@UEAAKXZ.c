/*
 * XREFs of ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140046900
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14001E8E0 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14001F140 (-Release@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14001F150 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 16LL))(*(_QWORD *)(a1 + 296));
}
