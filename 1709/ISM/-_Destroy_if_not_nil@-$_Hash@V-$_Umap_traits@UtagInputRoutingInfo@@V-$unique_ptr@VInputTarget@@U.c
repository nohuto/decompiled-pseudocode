/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800812C0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagInputRoutingInfo_std::unique_ptr_InputTarget_std::default_delete_InputTarget____std::_Uhash_compare_tagInputRoutingInfo_std::hash_tagInputRoutingInfo__std::equal_to_tagInputRoutingInfo____std::allocator_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget________0___::_Insert_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget______&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget______________::_1_::catch$142 @ 0x1800D049C (_std--_Hash_std--_Umap_traits_tagInputRoutingInfo_std--unique_ptr_InputTarget_std--default_delet.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        _QWORD **a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  v3 = (void (__fastcall ***)(_QWORD, __int64))a2[8];
  if ( v3 )
    (**v3)(v3, 1LL);
  operator delete(a2);
}
