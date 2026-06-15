/*
 * XREFs of ??1CExclusiveModeListener@@UEAA@XZ @ 0x1800C5E24
 * Callers:
 *     ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x1800BF980 (--_GCExclusiveModeListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@0@Z @ 0x1800C2EE0 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800C3584 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x1800C71DC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CExclusiveModeListener::~CExclusiveModeListener(CExclusiveModeListener *this)
{
  __int64 v2; // rcx
  __int64 *v3; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)this = &CExclusiveModeListener::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMMNotificationClient,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  CExclusiveModeListener::Shutdown(this);
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 184));
  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::erase(
    (__int64 ***)this + 20,
    &v3,
    **((__int64 ***)this + 20),
    *((__int64 **)this + 20));
  std::_Deallocate(*((_QWORD **)this + 20), 1uLL, 0x48uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 7);
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 5);
}
