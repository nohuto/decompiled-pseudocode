/*
 * XREFs of ??0ViewHierarchy@@AEAA@XZ @ 0x180082F34
 * Callers:
 *     ??$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHierarchy@@@Z @ 0x180084608 (--$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV-.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000AB30 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@st.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
ViewHierarchy *__fastcall ViewHierarchy::ViewHierarchy(ViewHierarchy *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IMessageListListener,IViewHierarchy>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IMessageListListener,IViewHierarchy>::`vftable'{for `IMessageListListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IMessageListListener,IViewHierarchy>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IViewHierarchy>'};
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewHierarchy::`vftable';
  *((_QWORD *)this + 1) = &ViewHierarchy::`vftable'{for `IMessageListListener'};
  *((_QWORD *)this + 2) = &ViewHierarchy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IViewHierarchy>'};
  *((_QWORD *)this + 4) = &ViewHierarchy::MessageProxyListenerForwarder::`vftable';
  *((_QWORD *)this + 5) = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>::_Buynode0(
                             (__int64)v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 24) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    (_QWORD *)this + 12,
    8LL);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  return this;
}
