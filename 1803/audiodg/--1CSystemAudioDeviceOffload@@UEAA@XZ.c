/*
 * XREFs of ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14003AEC0
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceOffload_::CComObject_CSystemAudioDeviceOffload__::_1_::dtor$0 @ 0x14003ACCF (_ATL--CComObject_CSystemAudioDeviceOffload_--CComObject_CSystemAudioDeviceOffload__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003ADDC (--1-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003AE24 (--1-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14003AE2C (--1-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z @ 0x14003B080 (--_GCSystemAudioDeviceOffload@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x14000349C (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x14003B130 (-Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceOffload::~CSystemAudioDeviceOffload(CSystemAudioDeviceOffload *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceOffload::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceOffload::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 38) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 39) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMeter'};
  v6 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v6);
  if ( !*((_DWORD *)this + 110) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    CSystemAudioDeviceOffload::Cleanup(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  EtwEventActivityIdControl(4LL, &v6);
  v2 = *((_QWORD *)this + 54);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 53);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 52);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 51);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 368) )
  {
    *((_BYTE *)this + 368) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  }
}
