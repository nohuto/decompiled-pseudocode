/*
 * XREFs of ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800F1E70
 * Callers:
 *     ??_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z @ 0x1800F21F0 (--_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BAD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationC.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXXZ @ 0x1800F4204 (-RemoveAll@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioSt.c)
 *     ?RemoveAll@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXXZ @ 0x1800F42A4 (-RemoveAll@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaD.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800F4E0C (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800F54D8 (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800F5ABC (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=62
void __fastcall Sarm::CSpatialAudioResourceManager::~CSpatialAudioResourceManager(
        Sarm::CSpatialAudioResourceManager *this)
{
  __int64 v2; // rcx
  void *v3; // rdx
  wil::details *v4; // rcx

  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((Sarm::CSpatialAudioResourceManager *)((char *)this + 584));
  v2 = *((_QWORD *)this + 72);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient,Microsoft::WRL::FtmBase>::Release(v2);
  CWorkFifo::Shutdown((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
  v4 = (wil::details *)*((_QWORD *)this + 71);
  if ( v4 )
    wil::details::CloseHandle(v4, v3);
  _Mtx_destroy_in_situ((Sarm::CSpatialAudioResourceManager *)((char *)this + 488));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy((char *)this + 440);
  std::_Deallocate(*((_QWORD **)this + 55), 1uLL, 0x10uLL);
  *((_QWORD *)this + 55) = 0LL;
  if ( *((_QWORD *)this + 39) )
  {
    std::_Deallocate(*((_QWORD **)this + 39), (__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 39)) >> 3, 8uLL);
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
  }
  ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAll((char *)this + 232);
  ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAll((char *)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
