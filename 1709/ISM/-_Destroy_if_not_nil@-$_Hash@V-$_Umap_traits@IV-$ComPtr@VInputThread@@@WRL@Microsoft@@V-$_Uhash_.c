/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180081274
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ViewHierarchy::ViewHierarchyEntry_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry____0___::_Insert_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry__________::_1_::catch$134 @ 0x1800D04F4 (_std--_Hash_std--_Umap_traits_unsigned_int_ViewHierarchy--ViewHierarchyEntry_std--_Uhash_compare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  v3 = a2[3];
  if ( v3 )
  {
    a2[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  operator delete(a2);
}
