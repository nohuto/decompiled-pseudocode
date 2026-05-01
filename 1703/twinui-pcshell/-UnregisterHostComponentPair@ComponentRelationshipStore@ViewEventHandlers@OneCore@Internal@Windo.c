/*
 * XREFs of ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180178EEC
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x180178DF0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800FDB68 (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ?clear@?$list@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800FDE2C (-clear@-$list@U-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 *     ?PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJI@Z @ 0x18017931C (-PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18017A32C (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x18017A3C0 (-equal_range@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x18017A508 (-erase@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterHostComponentPair(
        RTL_SRWLOCK *a1,
        _DWORD *a2,
        unsigned int a3)
{
  __int64 *i; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned __int64 j; // rdx
  __int64 v11; // rax
  _QWORD *Ptr; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 *v15; // r9
  __int64 **v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // rax
  _DWORD v21[4]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v25; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+40h]

  v26 = a3;
  wil::srwlock::lock_exclusive(a1 + 8, &SRWLock);
  v21[0] = *a2;
  v21[1] = a2[1];
  v21[2] = a2[2];
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
    &a1[10],
    v22,
    v21);
  for ( i = (__int64 *)v22[0]; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v22[1] )
    {
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      return 2147943568LL;
    }
    if ( *((_DWORD *)i + 7) == a3 )
      break;
  }
  v7 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList(
         (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)a1,
         a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
      &a1[10],
      &v25,
      i);
    v9 = 0xCBF29CE484222325uLL;
    for ( j = 0LL; j < 4; ++j )
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + j) ^ (unsigned __int64)v9);
    v11 = v9 & (__int64)a1[24].Ptr;
    Ptr = a1[21].Ptr;
    v13 = Ptr[2 * v11];
    v14 = 2 * v11;
    v15 = (__int64 *)v13;
    v16 = (__int64 **)&a1[19];
    while ( 1 )
    {
      if ( v15 == *v16 )
        v17 = *v16;
      else
        v17 = *(__int64 **)Ptr[v14 + 1];
      if ( (__int64 *)v13 == v17 )
        goto LABEL_25;
      if ( *(_DWORD *)(v13 + 16) == a3 )
        break;
      v13 = *(_QWORD *)v13;
    }
    v18 = (__int64 *)v13;
    while ( 1 )
    {
      v19 = v15 == *v16 ? *v16 : *(__int64 **)Ptr[v14 + 1];
      if ( (__int64 *)v13 == v19 || a3 != *(_DWORD *)(v13 + 16) )
        break;
      v13 = *(_QWORD *)v13;
    }
    if ( v18 == (__int64 *)v13 )
    {
LABEL_25:
      v13 = (__int64)*v16;
      v18 = *v16;
    }
    v25 = v18;
    if ( v18 == (__int64 *)**v16 && (__int64 *)v13 == *v16 )
    {
      std::list<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::clear(v16);
      std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
        &a1[18].Ptr,
        8LL);
    }
    else
    {
      while ( v18 != (__int64 *)v13 )
      {
        v18 = (__int64 *)*v18;
        std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
          &a1[18],
          &v25);
      }
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v8;
}
