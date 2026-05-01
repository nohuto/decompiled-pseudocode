/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801C6FF4
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C50E0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C5310 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800E5D9C (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x180128D2C (-clear@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1801C7128 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEvent_ea_1801C7128.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // r9
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // r11
  __int64 *v10; // rcx
  __int64 *v11; // rdi
  __int64 *v12; // rcx
  __int64 *j; // rcx
  char v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v4);
  v6 = a1[3];
  v7 = *(__int64 **)(v6 + 16 * (v4 & a1[6]));
  v8 = (__int64 *)a1[1];
  v9 = v7;
  while ( 1 )
  {
    if ( v9 == v8 )
      v10 = (__int64 *)a1[1];
    else
      v10 = **(__int64 ***)(v6 + 16 * (v4 & a1[6]) + 8);
    if ( v7 == v10 )
      goto LABEL_18;
    if ( *((_DWORD *)v7 + 4) == *a2 )
      break;
    v7 = (__int64 *)*v7;
  }
  v11 = v7;
  while ( 1 )
  {
    v12 = v9 == v8 ? (__int64 *)a1[1] : **(__int64 ***)(v6 + 16 * (v4 & a1[6]) + 8);
    if ( v7 == v12 || *a2 != *((_DWORD *)v7 + 4) )
      break;
    v7 = (__int64 *)*v7;
  }
  if ( v11 == v7 )
  {
LABEL_18:
    v7 = (__int64 *)a1[1];
    v11 = v7;
  }
  for ( j = v11; j != v7; j = (__int64 *)*j )
    ++v3;
  if ( v11 == (__int64 *)*v8 && v7 == v8 )
  {
    std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear((__int64)(a1 + 1));
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v11 != v7 )
    {
      v11 = (__int64 *)*v11;
      std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
        a1,
        &v15);
    }
  }
  return v3;
}
