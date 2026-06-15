/*
 * XREFs of ?Release@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140033A30
 * Callers:
 *     ?Release@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14001E8D0 (-Release@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14001E8E0 (-Release@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
}
