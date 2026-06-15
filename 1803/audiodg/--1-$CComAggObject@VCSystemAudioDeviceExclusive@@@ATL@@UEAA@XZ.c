/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140037BDC
 * Callers:
 *     ??_G?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z @ 0x140037D90 (--_G-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CSystemAudioDeviceExclusive>::~CComAggObject<CSystemAudioDeviceExclusive>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceExclusive>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive((CSystemAudioDeviceExclusive *)(a1 + 24));
}
