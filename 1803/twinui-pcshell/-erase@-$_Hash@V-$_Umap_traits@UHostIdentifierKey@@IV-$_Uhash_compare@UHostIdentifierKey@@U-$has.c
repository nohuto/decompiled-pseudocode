/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1803021B8
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x18002FF80 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     _std::_Hash_std::_Umap_traits_HostIdentifierKey_unsigned_int_std::_Uhash_compare_HostIdentifierKey_std::hash_HostIdentifierKey__std::equal_to_HostIdentifierKey____std::allocator_std::pair_HostIdentifierKey_const__unsigned_int____1___::_Insert_std::pair_HostIdentifierKey_const__unsigned_int__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_HostIdentifierKey_const__unsigned_int__________::_1_::catch$112 @ 0x1800B56C0 (_std--_Hash_std--_Umap_traits_HostIdentifierKey_unsigned_int_std--_Uhash_compare_Ho_ea_1800B56C0.c)
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180301F88 (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18008DAB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x180302254 (-erase@-$list@U-$pair@$$CBUHostIdentifierKey@@I@std@@V-$allocator@U-$pair@$$CBUHostIdentifierKey.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rax
  _QWORD *v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF

  if ( a3[4] == 1 )
    v5 = a3[6];
  else
    v5 = a3[5];
  v12 = v5;
  v6 = std::_Hash_bytes((const unsigned __int8 *)&v12, 4uLL);
  v8 = a1[3];
  v9 = 2 * (v6 & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (v6 & a1[6]) + 8) == v7 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v6 & a1[6])) == v7 )
    {
      *(_QWORD *)(v8 + 16 * (v6 & a1[6])) = a1[1];
      v8 = a1[3];
      v10 = a1[1];
    }
    else
    {
      v10 = v7[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (v6 & a1[6])) == v7 )
  {
    *(_QWORD *)(v8 + 16 * (v6 & a1[6])) = *v7;
  }
  std::list<std::pair<HostIdentifierKey const,unsigned int>>::erase(a1 + 1, a2, v7);
  return a2;
}
