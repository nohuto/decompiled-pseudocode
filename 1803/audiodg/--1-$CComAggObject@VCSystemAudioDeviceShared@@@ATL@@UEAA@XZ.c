/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14003A878
 * Callers:
 *     ??_E?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14003A8D0 (--_E-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::~CComAggObject<CSystemAudioDeviceShared>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceShared::~CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
}
