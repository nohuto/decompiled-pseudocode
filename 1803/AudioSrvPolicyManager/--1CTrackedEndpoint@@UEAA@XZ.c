/*
 * XREFs of ??1CTrackedEndpoint@@UEAA@XZ @ 0x18002CB30
 * Callers:
 *     ??_ECTrackedEndpoint@@UEAAPEAXI@Z @ 0x18002CAFC (--_ECTrackedEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA@XZ @ 0x18002D160 (--1-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CTrackedEndpoint::~CTrackedEndpoint(CTrackedEndpoint *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CTrackedEndpoint::`vftable'{for `IAudioEndpointVolumeCallback'};
  *((_QWORD *)this + 1) = &CTrackedEndpoint::`vftable'{for `IAudioStreamVolumeCallback'};
  *((_QWORD *)this + 2) = &CTrackedEndpoint::`vftable'{for `CUnknown'};
  ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::~CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>((char *)this + 112);
  CoTaskMemFree(*((LPVOID *)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
