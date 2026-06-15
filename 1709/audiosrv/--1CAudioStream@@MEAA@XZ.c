/*
 * XREFs of ??1CAudioStream@@MEAA@XZ @ 0x18001CE58
 * Callers:
 *     ??1CPerStreamVolumeAudioStream@@EEAA@XZ @ 0x18002D804 (--1CPerStreamVolumeAudioStream@@EEAA@XZ.c)
 *     ??_GCAudioStream@@MEAAPEAXI@Z @ 0x18007C554 (--_GCAudioStream@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180011868 (--1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800317C0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180031884 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800846D4 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall CAudioStream::~CAudioStream(CAudioStream *this)
{
  char *v2; // rcx
  void *v3; // rdx
  __int64 v4; // rcx
  wil::details *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rdi
  HANDLE ProcessHeap; // rax
  void *v13; // rdi
  HANDLE v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CAudioStream::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, this);
  }
  v2 = (char *)*((_QWORD *)this + 64);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 64) = 0LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  v18 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v19 = *((_QWORD *)this + 56);
  while ( v19 )
  {
    v4 = *(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                      v4,
                      &v19);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  v5 = (wil::details *)*((_QWORD *)this + 65);
  if ( v5 )
    wil::details::CloseHandle(v5, v3);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((char *)this + 448);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 408));
  AudioSrvVolumeTelemetryStreamVolume::~AudioSrvVolumeTelemetryStreamVolume((CAudioStream *)((char *)this + 216));
  v6 = *((_QWORD *)this + 26);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 22);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v11 = (void *)*((_QWORD *)this + 15);
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
  v13 = (void *)*((_QWORD *)this + 14);
  if ( v13 )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v13);
  }
  v15 = *((_QWORD *)this + 9);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 7);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
