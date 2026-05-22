/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@V21@@Z @ 0x18002D428
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ViewHierarchy::ViewHierarchyEntry_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry____0___::_Insert_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__________::_1_::catch$117 @ 0x1800E489A (_std--_Hash_std--_Umap_traits_unsigned_int_ViewHierarchy--ViewHierarchyEntry_std--__ea_1800E489A.c)
 * Callees:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V21@@Z @ 0x180016744 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKV-$ComPtr@VPointerInf.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>>>,void>(
    a1,
    a2,
    a3);
  return a2;
}
