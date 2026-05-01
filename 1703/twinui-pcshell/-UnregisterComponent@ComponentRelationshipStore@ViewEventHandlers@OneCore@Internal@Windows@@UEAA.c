/*
 * XREFs of ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x180178DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180178EEC (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801795C0 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18017A2A0 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18017A32C (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterComponent(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  int HostIdentifierForComponent; // ebx
  __int64 v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+28h] BYREF
  PVOID v12; // [rsp+60h] [rbp+30h] BYREF

  v11 = a2;
  wil::srwlock::lock_exclusive(this + 9, &SRWLock);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[26],
    &v12,
    &v11);
  if ( v12 != this[27].Ptr )
  {
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
      &this[26],
      &v12);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  HostIdentifierForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
                                 (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                 a2,
                                 0LL,
                                 (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v7);
  if ( HostIdentifierForComponent >= 0 )
  {
    if ( v7 == __PAIR64__(v7, 0) || (_DWORD)v7 == 1 && !v8 )
      return 0LL;
    HostIdentifierForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterHostComponentPair(
                                   this,
                                   &v7,
                                   a2);
    if ( HostIdentifierForComponent >= 0 )
      return 0LL;
    v6 = 72LL;
  }
  else
  {
    v6 = 65LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
    (const char *)(unsigned int)HostIdentifierForComponent);
  return (unsigned int)HostIdentifierForComponent;
}
