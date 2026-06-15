/*
 * XREFs of ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x1400028A0
 * Callers:
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x14000230C (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGra.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x140004F10 (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140014A94 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
GraphStreamingResourceManager *__fastcall GraphStreamingResourceManager::GraphStreamingResourceManager(
        GraphStreamingResourceManager *this)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r10

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamingResourceRegistration>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &GraphStreamingResourceManager::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &GraphStreamingResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamingResourceRegistration>'};
  ATL::CCriticalSection::CCriticalSection((GraphStreamingResourceManager *)((char *)this + 24));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 17;
  *((_QWORD *)this + 12) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 10;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 21) = 1061158912;
  *((_DWORD *)this + 22) = 1048576000;
  *((_DWORD *)this + 23) = 1074790400;
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((char *)this + 64);
  *((_QWORD *)this + 17) = v2;
  *((_QWORD *)this + 18) = v2;
  *((_DWORD *)this + 38) = 17;
  *((_QWORD *)this + 21) = v3;
  *((_QWORD *)this + 22) = v2;
  *((_DWORD *)this + 46) = v2;
  *((_DWORD *)this + 47) = 10;
  *((_QWORD *)this + 24) = v2;
  *((_QWORD *)this + 25) = v2;
  *((_DWORD *)this + 39) = 1061158912;
  *((_DWORD *)this + 40) = 1048576000;
  *((_DWORD *)this + 41) = 1074790400;
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((char *)this + 136);
  *((_QWORD *)this + 26) = v4;
  *((_QWORD *)this + 27) = v4;
  *((_DWORD *)this + 56) = 17;
  *((_QWORD *)this + 30) = v5;
  *((_QWORD *)this + 31) = v4;
  *((_DWORD *)this + 64) = v4;
  *((_DWORD *)this + 65) = 10;
  *((_QWORD *)this + 33) = v4;
  *((_QWORD *)this + 34) = v4;
  *((_DWORD *)this + 57) = 1061158912;
  *((_DWORD *)this + 58) = 1048576000;
  *((_DWORD *)this + 59) = 1074790400;
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((char *)this + 208);
  *((_QWORD *)this + 35) = v6;
  return this;
}
