/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x1800FA634
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x18002FF80 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180301F88 (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18008DAB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@_K@Z @ 0x1800FA60C (-_End@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventH_ea_1800FA60C.c)
 *     ??R?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@QEBA_NAEBUHostIdentifierKey@@0@Z @ 0x1800FA710 (--R-$_Uhash_compare@UHostIdentifierKey@@U-$hash@UHostIdentifierKey@@@std@@U-$equal_to@UHostIdent.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  int v6; // eax
  __int64 v7; // rbp
  __int64 i; // r10
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 *v13; // r10
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  if ( *a3 == 1 )
    v6 = a3[2];
  else
    v6 = a3[1];
  LODWORD(v20) = v6;
  v7 = std::_Hash_bytes((const unsigned __int8 *)&v20, 4uLL) & a1[6];
  for ( i = *(_QWORD *)(a1[3] + 16 * v7); ; i = *v13 )
  {
    v9 = i;
    v10 = std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
            (__int64)a1,
            &v20,
            v7);
    if ( v12 == *v10 )
      break;
    if ( !(unsigned __int8)std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>::operator()(
                             v11,
                             v12 + 16,
                             a3) )
    {
      do
        v14 = std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
                (__int64)a1,
                &v20,
                v7);
      while ( v16 != *v14
           && !(unsigned __int8)std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>::operator()(
                                  v15,
                                  a3,
                                  v16 + 16) );
      if ( v9 != v16 )
      {
        *a2 = v17;
        a2[1] = v16;
        return a2;
      }
      break;
    }
  }
  v18 = a1[1];
  *a2 = v18;
  a2[1] = v18;
  return a2;
}
