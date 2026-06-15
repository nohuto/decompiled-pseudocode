/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003ADDC
 * Callers:
 *     ??_G?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14003B040 (--_G-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CSystemAudioDeviceOffload>::~CComAggObject<CSystemAudioDeviceOffload>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceOffload>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload((CSystemAudioDeviceOffload *)(a1 + 24));
}
