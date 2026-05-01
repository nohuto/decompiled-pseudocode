/*
 * XREFs of ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C50E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C48D0 (-Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801C5C60 (-GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Intern.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801C6FF4 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1801C7128 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEvent_ea_1801C7128.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x1801C71BC (-equal_range@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1801C7308 (-erase@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ??$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1801C7800 (--$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterComponent(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  const struct _TlgProvider_t *v3; // rax
  const struct _TlgProvider_t *v4; // rax
  int HostIdentifierForComponentNoLock; // eax
  unsigned int v6; // ebx
  __int64 *v7; // r8
  unsigned int v9; // [rsp+30h] [rbp-29h] BYREF
  PVOID v10; // [rsp+38h] [rbp-21h] BYREF
  int v11; // [rsp+40h] [rbp-19h]
  __int64 *v12; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v13; // [rsp+50h] [rbp-9h]
  void *v14; // [rsp+58h] [rbp-1h] BYREF
  int v15; // [rsp+60h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int *v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+94h] [rbp+3Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v9 = a2;
  v3 = CUITelemetry::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    v19 = 0;
    v17 = &v9;
    v18 = 4;
    TlgWrite(v3, &unk_1802688B5, 0LL, 0LL, 3u, &pData);
  }
  AcquireSRWLockExclusive(this + 10);
  AcquireSRWLockExclusive(this + 11);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[28],
    &v10,
    &v9);
  if ( v10 != this[29].Ptr )
  {
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
      &this[28],
      &v10);
    v4 = CUITelemetry::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      v19 = 0;
      v17 = &v9;
      v18 = 4;
      TlgWrite(v4, &unk_1802688F0, 0LL, 0LL, 3u, &pData);
    }
    goto LABEL_20;
  }
  HostIdentifierForComponentNoLock = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponentNoLock(
                                       (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                       v9,
                                       0LL,
                                       (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v14);
  v6 = HostIdentifierForComponentNoLock;
  if ( HostIdentifierForComponentNoLock < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)(unsigned int)HostIdentifierForComponentNoLock);
LABEL_21:
    if ( this != (RTL_SRWLOCK *)-88LL )
      ReleaseSRWLockExclusive(this + 11);
    if ( this != (RTL_SRWLOCK *)-80LL )
      ReleaseSRWLockExclusive(this + 10);
    return v6;
  }
  if ( !v14 || (_DWORD)v14 == 1 && !v15 )
  {
LABEL_20:
    v6 = 0;
    goto LABEL_21;
  }
  v11 = v15;
  v10 = v14;
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
    &this[12],
    &v12,
    &v10);
  v7 = v12;
  if ( v12 != v13 )
  {
    while ( *((_DWORD *)v7 + 7) != v9 )
    {
      v7 = (__int64 *)*v7;
      if ( v7 == v13 )
        goto LABEL_14;
    }
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
      &this[12],
      &v10);
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
      &this[20],
      &v9);
    CUITelemetry::UnregisteredComponentFromCRS<unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
      &v9,
      &v14,
      (char *)&v14 + 4,
      &v15);
    goto LABEL_20;
  }
LABEL_14:
  if ( this != (RTL_SRWLOCK *)-88LL )
    ReleaseSRWLockExclusive(this + 11);
  if ( this != (RTL_SRWLOCK *)-80LL )
    ReleaseSRWLockExclusive(this + 10);
  return 0LL;
}
