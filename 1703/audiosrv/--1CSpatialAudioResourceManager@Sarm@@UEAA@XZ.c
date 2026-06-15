/*
 * XREFs of ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800C1D6C
 * Callers:
 *     ??_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z @ 0x1800C2100 (--_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18002EEF4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800AD75C (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXXZ @ 0x1800C3D88 (-RemoveAll@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioSt.c)
 *     ?RemoveAll@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXXZ @ 0x1800C3E18 (-RemoveAll@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaD.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800C498C (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800C6978 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=67
void __fastcall Sarm::CSpatialAudioResourceManager::~CSpatialAudioResourceManager(
        Sarm::CSpatialAudioResourceManager *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((Sarm::CSpatialAudioResourceManager *)((char *)this + 536));
  CWorkFifo::Shutdown((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
  v3 = (wil::details *)*((_QWORD *)this + 66);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  _Mtx_destroy_in_situ((Sarm::CSpatialAudioResourceManager *)((char *)this + 448));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy((_QWORD *)this + 50);
  std::_Deallocate(*((_QWORD **)this + 50), 1uLL, 0x10uLL);
  *((_QWORD *)this + 50) = 0LL;
  if ( *((_QWORD *)this + 34) )
  {
    std::_Deallocate(*((_QWORD **)this + 34), (__int64)(*((_QWORD *)this + 36) - *((_QWORD *)this + 34)) >> 3, 8uLL);
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAll((char *)this + 192);
  ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAll((char *)this + 112);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
