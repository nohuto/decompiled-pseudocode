/*
 * XREFs of ??0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z @ 0x18002C9E8
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002B8C0 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXXZ @ 0x180018234 (-UpdateRehashThresholds@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAX.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002A1F4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
CTrackedEndpoint *__fastcall CTrackedEndpoint::CTrackedEndpoint(
        CTrackedEndpoint *this,
        struct IVolumeLimitTracker *a2,
        float a3)
{
  int v5; // eax

  *((_QWORD *)this + 2) = &CUnknown::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &CTrackedEndpoint::`vftable'{for `IAudioEndpointVolumeCallback'};
  *((_QWORD *)this + 1) = &CTrackedEndpoint::`vftable'{for `IAudioStreamVolumeCallback'};
  *((_QWORD *)this + 2) = &CTrackedEndpoint::`vftable'{for `CUnknown'};
  memset((char *)this + 32, 0, 0x28uLL);
  v5 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  if ( v5 < 0 )
    ATL::AtlThrowImpl(v5);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IVolumeLimitTracker *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 25) = 0;
  *((float *)this + 26) = a3;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 17;
  *((_QWORD *)this + 18) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 10;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 33) = 1061158912;
  *((_DWORD *)this + 34) = 1048576000;
  *((_DWORD *)this + 35) = 1074790400;
  ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::UpdateRehashThresholds((__int64)this + 112);
  return this;
}
