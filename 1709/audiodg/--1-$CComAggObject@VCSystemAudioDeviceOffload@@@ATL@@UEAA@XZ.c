/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003C5EC
 * Callers:
 *     ??_G?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14003C8F0 (--_G-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CSystemAudioDeviceOffload>::~CComAggObject<CSystemAudioDeviceOffload>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceOffload>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload((CSystemAudioDeviceOffload *)(a1 + 24));
}
