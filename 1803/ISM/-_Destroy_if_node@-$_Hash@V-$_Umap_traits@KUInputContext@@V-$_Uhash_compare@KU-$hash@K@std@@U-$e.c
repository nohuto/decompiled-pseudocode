/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@Z @ 0x180082178
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputContext_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputContext____0___::_Insert_std::pair_unsigned_long_const__InputContext__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputContext__________::_1_::catch$118 @ 0x1800E7DD0 (_std--_Hash_std--_Umap_traits_unsigned_long_InputContext_std--_Uhash_compare_unsigned_long_std--.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  v3 = a2[4];
  if ( v3 )
  {
    a2[4] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  v4 = a2[3];
  if ( v4 )
  {
    a2[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  operator delete(a2);
}
