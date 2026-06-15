/*
 * XREFs of ??1AudioDeviceMgr@@MEAA@XZ @ 0x1800E66BC
 * Callers:
 *     ??_EAudioDeviceMgr@@MEAAPEAXI@Z @ 0x1800E6894 (--_EAudioDeviceMgr@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x1800704C8 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 *     ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x1800E7F00 (-Shutdown@AudioDeviceMgr@@UEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopology3WorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800EC490 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhone.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall AudioDeviceMgr::~AudioDeviceMgr(AudioDeviceMgr *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &AudioDeviceMgr::`vftable'{for `IAudioDeviceMgr'};
  *((_QWORD *)this + 1) = &AudioDeviceMgr::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &AudioDeviceMgr::`vftable'{for `CUnknown'};
  AudioDeviceMgr::Shutdown(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopology3WorkItem>,ATL::CAutoPtrElementTraits<PhoneTopology3WorkItem>>::RemoveAll((char *)this + 168);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
      v2,
      *((_QWORD *)this + 13));
    free(*((void **)this + 12));
  }
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
