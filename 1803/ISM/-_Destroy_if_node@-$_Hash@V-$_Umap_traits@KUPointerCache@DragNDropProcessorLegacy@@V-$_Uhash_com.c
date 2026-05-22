/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@@Z @ 0x18000AB84
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned___int64_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned___int64____0___::_Insert_std::pair_unsigned_long_const__unsigned___int64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned___int64__________::_1_::catch$115 @ 0x1800E3986 (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned___int64_std--_Uhash_compare_unsigned_long_s.c)
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std::_Uhash_compare_tagMsgRoutingInfo_std::hash_tagMsgRoutingInfo__std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo____0___::_Insert_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__________::_1_::catch$111 @ 0x1800E44A0 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std--_Uhash_compare_tagMsgRo.c)
 *     _std::_Hash_std::_Uset_traits_ISystemContextObserver_____ptr64_std::_Uhash_compare_ISystemContextObserver_____ptr64_std::hash_ISystemContextObserver_____ptr64__std::equal_to_ISystemContextObserver_____ptr64____std::allocator_ISystemContextObserver_____ptr64__0___::_Insert_ISystemContextObserver_____ptr64_const_&___ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_ISystemContextObserver_____ptr64____std::_Iterator_base0____::_1_::catch$97 @ 0x1800E4CE9 (_std--_Hash_std--_Uset_traits_ISystemContextObserver_____ptr64_std--_Uhash_compare__ea_1800E4CE9.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  operator delete(a2);
}
