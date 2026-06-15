/*
 * XREFs of ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400581B0
 * Callers:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400582F4 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x1400583A8 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140058770 (--_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140018648 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x14002EFFC (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140033E04 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140057724 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140059150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140059718 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 *v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  volatile signed __int32 *v6; // rdi

  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  v2 = (__int64 *)((char *)this + 376);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 47);
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    AERTDestroyZoneHeap(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((void **)this + 110, 0x326u);
  v4 = (void *)*((_QWORD *)this + 112);
  if ( v4 )
    operator delete(v4);
  *((_QWORD *)this + 112) = 0LL;
  v5 = (void *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( *((_QWORD *)this + 111) )
    ATL::CHandle::Close((void **)this + 111);
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 384));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 40);
  if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
  }
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 20) - 24LL));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
