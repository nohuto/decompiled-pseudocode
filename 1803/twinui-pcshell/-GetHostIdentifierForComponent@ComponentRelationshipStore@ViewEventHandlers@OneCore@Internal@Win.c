/*
 * XREFs of ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x180030040
 * Callers:
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x18002FCE0 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 *     ?GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@ViewEventHandlers@OneCore@Internal@Windows@@PEAUtagHostIdentifier@3456@@Z @ 0x1800345E0 (-GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@Vie.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *a3,
        struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *a4)
{
  RTL_SRWLOCK *v4; // rsi
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = this + 9;
  AcquireSRWLockShared(this + 9);
  AcquireSRWLockExclusive(this + 10);
  v12 = a2;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[19],
    &v11,
    &v12);
  v9 = v11;
  if ( v11 != this[20].Ptr )
  {
    *(_QWORD *)a4 = v11[3];
    *((_DWORD *)a4 + 2) = *((_DWORD *)v9 + 8);
    goto LABEL_3;
  }
  *(_QWORD *)a4 = 0LL;
  *((_DWORD *)a4 + 2) = 0;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[27],
    &v11,
    &v12);
  v9 = v11;
  if ( v11 != this[28].Ptr )
  {
LABEL_3:
    if ( a3 )
      *(_DWORD *)a3 = *((_DWORD *)v9 + 15);
    goto LABEL_5;
  }
  if ( a3 )
    *(_DWORD *)a3 = 0;
LABEL_5:
  if ( this != (RTL_SRWLOCK *)-80LL )
    ReleaseSRWLockExclusive(this + 10);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
