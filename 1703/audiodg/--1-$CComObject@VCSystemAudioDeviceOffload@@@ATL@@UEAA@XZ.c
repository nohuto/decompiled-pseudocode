/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003C0F4
 * Callers:
 *     ??_E?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14003C410 (--_E-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::~CComObject<CSystemAudioDeviceOffload>(
        CSystemAudioDeviceOffload *this)
{
  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 38) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 39) = &ATL::CComObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMeter'};
  *((_DWORD *)this + 80) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(this);
}
