/*
 * XREFs of ??1AudioDeviceMgr@@MEAA@XZ @ 0x180116590
 * Callers:
 *     ??_EAudioDeviceMgr@@MEAAPEAXI@Z @ 0x1801166A0 (--_EAudioDeviceMgr@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x1801172F0 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@.c)
 *     ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x1801173A0 (-Shutdown@AudioDeviceMgr@@UEAAXXZ.c)
 */

void __fastcall AudioDeviceMgr::~AudioDeviceMgr(AudioDeviceMgr *this)
{
  __int64 v2; // rcx
  EndpointDevice *v3; // rcx
  __int64 (__fastcall *v4)(EndpointDevice *); // rax
  EndpointDevice *v5; // rcx
  __int64 (__fastcall *v6)(EndpointDevice *); // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &AudioDeviceMgr::`vftable'{for `IAudioDeviceMgr'};
  *((_QWORD *)this + 1) = &AudioDeviceMgr::`vftable'{for `IMMNotificationClientInternal'};
  *((_QWORD *)this + 2) = &AudioDeviceMgr::`vftable'{for `CUnknown'};
  AudioDeviceMgr::Shutdown(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll((char *)this + 128);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (EndpointDevice *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == EndpointDevice::Release )
      EndpointDevice::Release(v3);
    else
      v4(v3);
  }
  v5 = (EndpointDevice *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == EndpointDevice::Release )
      EndpointDevice::Release(v5);
    else
      v6(v5);
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
