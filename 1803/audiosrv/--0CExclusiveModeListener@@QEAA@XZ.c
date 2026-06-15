/*
 * XREFs of ??0CExclusiveModeListener@@QEAA@XZ @ 0x1800F1C2C
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x1800F1970 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18004D5C4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ @ 0x18005E758 (--0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@XZ @ 0x1800F5078 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=6
CExclusiveModeListener *__fastcall CExclusiveModeListener::CExclusiveModeListener(CExclusiveModeListener *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((CExclusiveModeListener *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMMNotificationClient,Microsoft::WRL::FtmBase>::`vftable'{for `IMMNotificationClient'};
  *v2 = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CExclusiveModeListener::`vftable'{for `IMMNotificationClient'};
  *v2 = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 72), 0, 0);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((GUID *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 36) = 3;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Buyheadnode(v3);
  *((_DWORD *)this + 42) = 0;
  CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 176));
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_WORD *)this + 180) = 0;
  return this;
}
