/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy______0___::_Insert_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy____________::_1_::catch$116 @ 0x1800E49C1
 * Callers:
 *     <none>
 * Callees:
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18000A54C (-_Make_iter@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V-$_Uhash_co.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18002F9E0 (-erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy______0___::_Insert_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy________ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_BamoControllerNavigationClientProxy____________::_1_::catch_116(
        __int64 a1,
        __int64 a2)
{
  _QWORD *iter; // rax

  iter = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Make_iter(
           a1,
           (_QWORD *)(a2 + 40),
           *(_QWORD *)(a2 + 40));
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::erase(
    *(_QWORD **)(a2 + 112),
    (_QWORD *)(a2 + 32),
    (_QWORD *)*iter);
  throw;
}
