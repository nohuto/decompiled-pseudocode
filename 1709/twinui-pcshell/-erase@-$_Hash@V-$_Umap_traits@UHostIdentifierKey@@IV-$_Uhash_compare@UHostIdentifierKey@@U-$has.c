/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1801C7308
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C50E0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C5310 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     _std::_Hash_std::_Umap_traits_HostIdentifierKey_unsigned_int_std::_Uhash_compare_HostIdentifierKey_std::hash_HostIdentifierKey__std::equal_to_HostIdentifierKey____std::allocator_std::pair_HostIdentifierKey_const__unsigned_int____1___::_Insert_std::pair_HostIdentifierKey_const__unsigned_int__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_HostIdentifierKey_const__unsigned_int__________::_1_::catch$137 @ 0x1801F782F (_std--_Hash_std--_Umap_traits_HostIdentifierKey_unsigned_int_std--_Uhash_compare_Ho_ea_1801F782F.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  unsigned __int64 v3; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v14; // [rsp+30h] [rbp+8h]

  v3 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  if ( a3[4] == 1 )
  {
    v14 = a3[6];
    do
    {
      v7 = *((unsigned __int8 *)&v14 + v3++);
      v6 = 0x100000001B3LL * (v7 ^ v6);
    }
    while ( v3 < 4 );
  }
  else
  {
    v14 = a3[5];
    do
    {
      v8 = *((unsigned __int8 *)&v14 + v3++);
      v6 = 0x100000001B3LL * (v8 ^ v6);
    }
    while ( v3 < 4 );
  }
  v9 = a1[3];
  v10 = 2 * (v6 & a1[6]);
  if ( *(_DWORD **)(v9 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(_DWORD **)(v9 + 16 * (v6 & a1[6])) == a3 )
    {
      *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_DWORD **)(v9 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = *(_QWORD *)a3;
  }
  v12 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  operator delete(a3);
  *a2 = v12;
  return a2;
}
