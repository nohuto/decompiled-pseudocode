/*
 * XREFs of ?SetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x1801C6150
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetTokenClientWindowReadyForPresentationChangedForComponent(
        RTL_SRWLOCK *this,
        int a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v3; // rbp
  unsigned int v6; // ebx
  struct EventRegistrationToken *v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = this + 10;
  AcquireSRWLockShared(this + 10);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[20],
    &v8,
    &v9);
  if ( v8 == this[21].Ptr )
  {
    AcquireSRWLockShared(this + 11);
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
      &this[28],
      &v8,
      &v9);
    if ( v8 == this[29].Ptr )
    {
      v6 = -2140667901;
    }
    else
    {
      v8[6].value = a3.value;
      v6 = 0;
    }
    if ( this != (RTL_SRWLOCK *)-88LL )
      ReleaseSRWLockShared(this + 11);
  }
  else
  {
    v8[6].value = a3.value;
    v6 = 0;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v6;
}
