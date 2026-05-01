/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x18017A508
 * Callers:
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180178EEC (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 *     _std::_Hash_std::_Umap_traits_HostIdentifierKey_unsigned_int_std::_Uhash_compare_HostIdentifierKey_std::hash_HostIdentifierKey__std::equal_to_HostIdentifierKey____std::allocator_std::pair_HostIdentifierKey_const__unsigned_int____1___::_Insert_std::pair_HostIdentifierKey_const__unsigned_int__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_HostIdentifierKey_const__unsigned_int__________::_1_::catch$117 @ 0x1801A532C (_std--_Hash_std--_Umap_traits_HostIdentifierKey_unsigned_int_std--_Uhash_compare_Ho_ea_1801A532C.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  __int64 v6; // r9
  unsigned __int64 i; // r8
  __int64 v8; // rcx
  int v9; // ecx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v17; // [rsp+30h] [rbp+8h]

  v6 = 0xCBF29CE484222325uLL;
  if ( *((_DWORD *)a3 + 4) == 1 )
  {
    v17 = *((_DWORD *)a3 + 6);
    for ( i = 0LL; i < 4; ++i )
    {
      v8 = *((unsigned __int8 *)&v17 + i);
      v6 = 0x100000001B3LL * (v8 ^ v6);
    }
  }
  else
  {
    v9 = *((_DWORD *)a3 + 5);
    v10 = 0LL;
    v17 = v9;
    do
    {
      v11 = *((unsigned __int8 *)&v17 + v10++);
      v6 = 0x100000001B3LL * (v11 ^ v6);
    }
    while ( v10 < 4 );
  }
  v12 = a1[3];
  v13 = 2 * (v6 & a1[6]);
  if ( *(char **)(v12 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(char **)(v12 + 16 * (v6 & a1[6])) == a3 )
    {
      *(_QWORD *)(v12 + 16 * (v6 & a1[6])) = a1[1];
      v12 = a1[3];
      v14 = a1[1];
    }
    else
    {
      v14 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v12 + 8 * v13 + 8) = v14;
  }
  else if ( *(char **)(v12 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v12 + 16 * (v6 & a1[6])) = *(_QWORD *)a3;
  }
  v15 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  std::_Deallocate(a3, 1uLL, 0x20uLL);
  *a2 = v15;
  return a2;
}
