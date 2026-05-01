/*
 * XREFs of ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x180300820
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1800F3068 (-GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Intern.c)
 *     ??$ComponentAlreadyDisconnectedInCRS@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1802FFA04 (--$ComponentAlreadyDisconnectedInCRS@AEAI@CUITelemetry@@SAXAEAI@Z.c)
 *     ??$DisconnectingComponentInCRS@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1802FFB08 (--$DisconnectingComponentInCRS@AEAI@CUITelemetry@@SAXAEAI@Z.c)
 *     ?IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803015A0 (-IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z.c)
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180301F88 (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::DisconnectComponent(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  unsigned int v3; // ebx
  int HostIdentifierForComponentNoLock; // edi
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 *v12; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+30h] BYREF
  RTL_SRWLOCK *v14; // [rsp+80h] [rbp+38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+40h] BYREF

  v13 = a2;
  CUITelemetry::DisconnectingComponentInCRS<unsigned int &>((__int64)&v13);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v15, this + 9);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, this + 10);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[27].Ptr,
    &v12,
    (unsigned __int8 *)&v13);
  v3 = 0;
  if ( v12 == this[28].Ptr )
  {
    HostIdentifierForComponentNoLock = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponentNoLock(
                                         (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                         v13,
                                         0LL,
                                         (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v7);
    if ( HostIdentifierForComponentNoLock >= 0 )
    {
      if ( IsHostNull((const struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v7) )
      {
        v3 = -2140667901;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA4,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x80680003LL);
        goto LABEL_10;
      }
      v9 = v7;
      v10 = v8;
      HostIdentifierForComponentNoLock = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterHostComponentPair(
                                           this,
                                           &v9,
                                           v13);
      if ( HostIdentifierForComponentNoLock >= 0 )
        goto LABEL_10;
      v5 = 168LL;
    }
    else
    {
      v5 = 161LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)(unsigned int)HostIdentifierForComponentNoLock);
    v3 = HostIdentifierForComponentNoLock;
    goto LABEL_10;
  }
  CUITelemetry::ComponentAlreadyDisconnectedInCRS<unsigned int &>((__int64)&v13);
LABEL_10:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v15);
  return v3;
}
