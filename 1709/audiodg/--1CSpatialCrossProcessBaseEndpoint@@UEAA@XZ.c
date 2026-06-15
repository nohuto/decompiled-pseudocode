/*
 * XREFs of ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x14005A508
 * Callers:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14005A6AC (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     _CSpatialCrossProcessClientEndpoint::_CSpatialCrossProcessClientEndpoint_::_1_::dtor$0 @ 0x14005A736 (_CSpatialCrossProcessClientEndpoint--_CSpatialCrossProcessClientEndpoint_--_1_--dtor$0.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005A790 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     _CSpatialCrossProcessServerEndpoint::_CSpatialCrossProcessServerEndpoint_::_1_::dtor$0 @ 0x14005A913 (_CSpatialCrossProcessServerEndpoint--_CSpatialCrossProcessServerEndpoint_--_1_--dtor$0.c)
 *     ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x14005ABA0 (--_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140017FDC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140030040 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140034F38 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140059AD0 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14005BCC0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14005C2CC (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 *v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  std::_Ref_count_base *v6; // rcx

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
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((LPCVOID *)this + 110, 0x326u);
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
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 40);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 20) - 24LL));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
