/*
 * XREFs of ??0ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x180118238
 * Callers:
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x18011C054 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800E5D9C (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@2@PEAU32@0@Z @ 0x18012B524 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUComponentInfo@ComponentRelationshipSt.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x18012B57C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
RTL_SRWLOCK *__fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentRelationshipStore(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = this + 3;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[3]);
  this[9].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore'};
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IViewCUIEventStore,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::`vftable'{for `IViewCUIEventStore'};
  v2->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore'};
  this[1].Ptr = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IViewCUIEventStore,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `IViewCUIEventStore'};
  v2->Ptr = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  InitializeSRWLock(this + 10);
  InitializeSRWLock(this + 11);
  LODWORD(this[12].Ptr) = 0;
  this[13].Ptr = 0LL;
  this[14].Ptr = 0LL;
  this[13].Ptr = (PVOID)std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>::_Buynode0(
                          v3,
                          0LL,
                          0LL);
  this[15].Ptr = 0LL;
  this[16].Ptr = 0LL;
  this[17].Ptr = 0LL;
  LODWORD(this[12].Ptr) = 1065353216;
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
    &this[12].Ptr,
    8LL);
  LODWORD(this[20].Ptr) = 0;
  this[21].Ptr = 0LL;
  this[22].Ptr = 0LL;
  this[21].Ptr = (PVOID)std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>::_Buynode0(
                          v4,
                          0LL,
                          0LL);
  this[23].Ptr = 0LL;
  this[24].Ptr = 0LL;
  this[25].Ptr = 0LL;
  LODWORD(this[20].Ptr) = 1065353216;
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
    &this[20].Ptr,
    8LL);
  LODWORD(this[28].Ptr) = 0;
  this[29].Ptr = 0LL;
  this[30].Ptr = 0LL;
  this[29].Ptr = (PVOID)std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>::_Buynode0(
                          v5,
                          0LL,
                          0LL);
  this[31].Ptr = 0LL;
  this[32].Ptr = 0LL;
  this[33].Ptr = 0LL;
  LODWORD(this[28].Ptr) = 1065353216;
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
    &this[28].Ptr,
    8LL);
  return this;
}
