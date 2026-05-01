/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_int_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo____0___::_Insert_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__________::_1_::catch$115 @ 0x1801F77D7
 * Callers:
 *     <none>
 * Callees:
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800EB90C (-_Make_iter@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXa.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1801C7128 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEvent_ea_1801C7128.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_int_Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo____0___::_Insert_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo______ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo__________::_1_::catch_115(
        __int64 a1,
        __int64 a2)
{
  _QWORD *iter; // rax

  iter = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Make_iter(
           a1,
           (_QWORD *)(a2 + 40),
           *(_QWORD *)(a2 + 40));
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
    *(_QWORD **)(a2 + 112),
    a2 + 32,
    (_QWORD *)*iter);
  throw;
}
