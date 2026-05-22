/*
 * XREFs of ??0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800AAA98
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180070E20 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@2@XZ @ 0x18004CD90 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KV-$map@V-$basic_string@DU-$char_traits@D@std@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  _OWORD *v2; // rax

  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this + 32));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::`vftable'{for `Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::`vftable'{for `Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 2, 0, 0);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *(_QWORD *)((char *)this + 164) = 1065353216LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *((_DWORD *)this + 45) = 0;
  *((_QWORD *)this + 23) = 1065353216LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *(_QWORD *)((char *)this + 204) = 1065353216LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 1065353216;
  *(_QWORD *)((char *)this + 228) = 1065353216LL;
  *(_QWORD *)((char *)this + 236) = 0LL;
  *((_DWORD *)this + 61) = 0;
  *((_QWORD *)this + 31) = 1065353216LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *(_QWORD *)((char *)this + 268) = 1065353216LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 1065353216;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 344), 0, 0);
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 424), 0, 0);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 58) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::map<std::string,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::string,std::variant<unsigned long,bool,float>>>>,0>>::_Buyheadnode();
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 12, 0, 0);
  *((_BYTE *)this + 520) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  v2 = operator new(0x10uLL);
  *((_QWORD *)this + 66) = v2;
  *v2 = 0LL;
  **((_QWORD **)this + 66) = (char *)this + 528;
  *((_QWORD *)this + 71) = 0LL;
  return this;
}
