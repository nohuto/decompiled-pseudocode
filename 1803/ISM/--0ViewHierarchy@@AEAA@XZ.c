/*
 * XREFs of ??0ViewHierarchy@@AEAA@XZ @ 0x18002B654
 * Callers:
 *     ??$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHierarchy@@@Z @ 0x18002D058 (--$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV-.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000A940 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  *((_QWORD *)this + 13) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>>::_Buynode0(
                             (__int64)v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 24) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
    (_QWORD *)this + 12,
    8LL);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return this;
}
