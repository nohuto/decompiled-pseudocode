/*
 * XREFs of _std::_Hash_std::_Uset_traits_ISystemContextObserver_____ptr64_std::_Uhash_compare_ISystemContextObserver_____ptr64_std::hash_ISystemContextObserver_____ptr64__std::equal_to_ISystemContextObserver_____ptr64____std::allocator_ISystemContextObserver_____ptr64__0___::_Insert_ISystemContextObserver_____ptr64_const_&___ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_ISystemContextObserver_____ptr64____std::_Iterator_base0____::_1_::catch$96 @ 0x1800E4D0D
 * Callers:
 *     <none>
 * Callees:
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18000A54C (-_Make_iter@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V-$_Uhash_co.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V32@@Z @ 0x18003A1D4 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUIS_ea_18003A1D4.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Hash_std::_Uset_traits_ISystemContextObserver_____ptr64_std::_Uhash_compare_ISystemContextObserver_____ptr64_std::hash_ISystemContextObserver_____ptr64__std::equal_to_ISystemContextObserver_____ptr64____std::allocator_ISystemContextObserver_____ptr64__0___::_Insert_ISystemContextObserver_____ptr64_const_____ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_ISystemContextObserver_____ptr64____std::_Iterator_base0____::_1_::catch_96(
        __int64 a1,
        __int64 a2)
{
  _QWORD *iter; // rax

  iter = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Make_iter(
           a1,
           (_QWORD *)(a2 + 40),
           *(_QWORD *)(a2 + 104));
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
    *(_QWORD **)(a2 + 80),
    (_QWORD *)(a2 + 48),
    (_QWORD *)*iter);
  throw;
}
