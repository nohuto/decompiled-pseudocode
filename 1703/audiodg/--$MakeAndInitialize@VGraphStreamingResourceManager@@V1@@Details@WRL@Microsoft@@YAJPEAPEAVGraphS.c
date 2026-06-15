/*
 * XREFs of ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140016A40
 * Callers:
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000E9D0 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140036A78 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x1400019C4 (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140002760 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140002D00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingResourceReg.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001BB80 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingResourceRegi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager>(
        _QWORD *a1)
{
  unsigned int v2; // esi
  volatile signed __int32 *v3; // rbx
  char *v4; // rax
  char *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r9
  void (__fastcall *v8)(char *); // rax
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rax

  v2 = 0;
  *a1 = 0LL;
  v3 = 0LL;
  v4 = (char *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 5) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IUnknown'};
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &GraphStreamingResourceManager::`vftable'{for `IUnknown'};
    *((_QWORD *)v5 + 1) = &GraphStreamingResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>,1,0>'};
    ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v5 + 24));
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_DWORD *)v5 + 20) = 17;
    *((_QWORD *)v5 + 12) = 0xFFFFFFFFLL;
    *((_QWORD *)v5 + 13) = 0LL;
    *((_DWORD *)v5 + 28) = 0;
    *((_DWORD *)v5 + 29) = 10;
    *((_QWORD *)v5 + 15) = 0LL;
    *((_QWORD *)v5 + 16) = 0LL;
    *((_DWORD *)v5 + 21) = 1061158912;
    *((_DWORD *)v5 + 22) = 1048576000;
    *((_DWORD *)v5 + 23) = 1074790400;
    ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((__int64)(v5 + 64));
    *((_QWORD *)v5 + 17) = 0LL;
    *((_QWORD *)v5 + 18) = 0LL;
    *((_DWORD *)v5 + 38) = 17;
    *((_QWORD *)v5 + 21) = v6;
    *((_QWORD *)v5 + 22) = 0LL;
    *((_DWORD *)v5 + 46) = 0;
    *((_DWORD *)v5 + 47) = 10;
    *((_QWORD *)v5 + 24) = 0LL;
    *((_QWORD *)v5 + 25) = 0LL;
    *((_DWORD *)v5 + 39) = 1061158912;
    *((_DWORD *)v5 + 40) = 1048576000;
    *((_DWORD *)v5 + 41) = 1074790400;
    ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((__int64)(v5 + 136));
    *((_QWORD *)v5 + 26) = 0LL;
    *((_QWORD *)v5 + 27) = 0LL;
    *((_DWORD *)v5 + 56) = 17;
    *((_QWORD *)v5 + 30) = v7;
    *((_QWORD *)v5 + 31) = 0LL;
    *((_DWORD *)v5 + 64) = 0;
    *((_DWORD *)v5 + 65) = 10;
    *((_QWORD *)v5 + 33) = 0LL;
    *((_QWORD *)v5 + 34) = 0LL;
    *((_DWORD *)v5 + 57) = 1061158912;
    *((_DWORD *)v5 + 58) = 1048576000;
    *((_DWORD *)v5 + 59) = 1074790400;
    ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((__int64)(v5 + 208));
    *((_QWORD *)v5 + 35) = 0LL;
    v3 = (volatile signed __int32 *)v5;
    if ( v5 )
    {
      v8 = *(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL);
      if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(v5);
      else
        v8(v5);
    }
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
  }
  if ( v3 )
  {
    v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL);
    if ( v9 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
    else
      v9(v3);
  }
  return v2;
}
