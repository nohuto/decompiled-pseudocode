/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1801C922C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_HostIdentifierKey_unsigned_int_std::_Uhash_compare_HostIdentifierKey_std::hash_HostIdentifierKey__std::equal_to_HostIdentifierKey____std::allocator_std::pair_HostIdentifierKey_const__unsigned_int____1___::_Insert_std::pair_HostIdentifierKey_const__unsigned_int__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_HostIdentifierKey_const__unsigned_int__________::_1_::catch$138 @ 0x1801F780B (_std--_Hash_std--_Umap_traits_HostIdentifierKey_unsigned_int_std--_Uhash_compare_HostIdentifierK.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Destroy_if_not_nil(
        __int64 a1,
        _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  operator delete(a2);
}
