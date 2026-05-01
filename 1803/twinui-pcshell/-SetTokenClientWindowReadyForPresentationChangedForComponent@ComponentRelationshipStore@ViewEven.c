/*
 * XREFs of ?SetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x18002F9A0
 * Callers:
 *     ?SetTokenClientWindowReadyForPresentationChangedForComponent@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1800345A0 (-SetTokenClientWindowReadyForPresentationChangedForComponent@ViewEventDispatcher@@UEAAJIUEventRe.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetTokenClientWindowReadyForPresentationChangedForComponent(
        RTL_SRWLOCK *this,
        int a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v3; // rsi
  unsigned int v6; // ebx
  struct EventRegistrationToken *v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[19],
    &v8,
    &v9);
  if ( v8 == this[20].Ptr )
  {
    AcquireSRWLockShared(this + 10);
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
      &this[27],
      &v8,
      &v9);
    if ( v8 == this[28].Ptr )
    {
      v6 = -2140667901;
    }
    else
    {
      v8[6].value = a3.value;
      v6 = 0;
    }
    if ( this != (RTL_SRWLOCK *)-80LL )
      ReleaseSRWLockShared(this + 10);
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
