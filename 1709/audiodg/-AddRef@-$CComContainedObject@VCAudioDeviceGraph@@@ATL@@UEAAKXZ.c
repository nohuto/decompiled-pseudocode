/*
 * XREFs of ?AddRef@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140031DD0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14001E550 (-AddRef@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14001E560 (-AddRef@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
}
