/*
 * XREFs of ?GetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x1801C5F70
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetTokenClientWindowReadyForPresentationChangedForComponent(
        RTL_SRWLOCK *this,
        int a2,
        struct EventRegistrationToken *a3)
{
  RTL_SRWLOCK *v3; // rsi
  unsigned int v6; // ebx
  RTL_SRWLOCK *v7; // rdi
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = this + 10;
  a3->value = 0LL;
  AcquireSRWLockShared(this + 10);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[20],
    &v9,
    &v10);
  if ( v9 == this[21].Ptr )
  {
    v7 = this + 11;
    AcquireSRWLockShared(this + 11);
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
      &this[28],
      &v9,
      &v10);
    if ( v9 == this[29].Ptr )
    {
      v6 = -2140667901;
    }
    else
    {
      v6 = 0;
      a3->value = v9[6];
    }
    if ( v7 )
      ReleaseSRWLockShared(v7);
  }
  else
  {
    v6 = 0;
    a3->value = v9[6];
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v6;
}
