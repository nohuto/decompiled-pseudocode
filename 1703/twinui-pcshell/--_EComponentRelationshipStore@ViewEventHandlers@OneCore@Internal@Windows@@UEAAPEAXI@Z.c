/*
 * XREFs of ??_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z @ 0x1800ED880
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA@XZ @ 0x1800FD498 (--1-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash@UH.c)
 *     ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800FDE2C (-clear@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *__fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vector deleting destructor'(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        char a2)
{
  char *v4; // rcx
  char *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore'};
  *((_QWORD *)this + 1) = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `IViewCUIEventStore'};
  *((_QWORD *)this + 3) = &Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v4 = (char *)*((_QWORD *)this + 29);
  if ( v4 )
  {
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 31) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
  }
  std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear((char *)this + 216);
  std::_Deallocate(*((char **)this + 27), 1uLL, 0x60uLL);
  v5 = (char *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    std::_Deallocate(v5, (__int64)(*((_QWORD *)this + 23) - (_QWORD)v5) >> 3, 8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear((char *)this + 152);
  std::_Deallocate(*((char **)this + 19), 1uLL, 0x60uLL);
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::~_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>((char *)this + 80);
  v6 = *((_QWORD *)this + 7);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v6));
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
