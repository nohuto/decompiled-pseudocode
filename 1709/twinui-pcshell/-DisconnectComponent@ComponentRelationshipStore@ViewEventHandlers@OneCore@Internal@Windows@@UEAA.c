/*
 * XREFs of ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C5310
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C48D0 (-Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJI@Z @ 0x1801C59C4 (-PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801C5C60 (-GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Intern.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801C6FF4 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x1801C71BC (-equal_range@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1801C7308 (-erase@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ??$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1801C7800 (--$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::DisconnectComponent(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  const struct _TlgProvider_t *v3; // rax
  const struct _TlgProvider_t *v4; // rax
  int v5; // edi
  int HostIdentifierForComponentNoLock; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 *i; // rbx
  int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-49h] BYREF
  __int64 v14; // [rsp+38h] [rbp-41h] BYREF
  int v15; // [rsp+40h] [rbp-39h]
  PVOID v16; // [rsp+48h] [rbp-31h] BYREF
  __int64 v17; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  unsigned int *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v13 = a2;
  v3 = CUITelemetry::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    v23 = 0;
    v21 = &v13;
    v22 = 4;
    TlgWrite(v3, &unk_18026898A, 0LL, 0LL, 3u, &pData);
  }
  AcquireSRWLockExclusive(this + 10);
  AcquireSRWLockExclusive(this + 11);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[28],
    &v16,
    &v13);
  if ( v16 == this[29].Ptr )
  {
    HostIdentifierForComponentNoLock = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponentNoLock(
                                         (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                         v13,
                                         0LL,
                                         (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v14);
    v5 = HostIdentifierForComponentNoLock;
    if ( HostIdentifierForComponentNoLock >= 0 )
    {
      if ( !v14 || (_DWORD)v14 == 1 && !v15 )
      {
        v5 = -2140667901;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA4,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x80680003LL);
        goto LABEL_7;
      }
      v10 = v13;
      v18 = v15;
      v17 = v14;
      LODWORD(v16) = v13;
      std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
        &this[12],
        v19,
        &v14);
      for ( i = (__int64 *)v19[0]; ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)v19[1] )
        {
          v5 = -2140667900;
          goto LABEL_23;
        }
        if ( *((_DWORD *)i + 7) == v10 )
          break;
      }
      v12 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList(
              (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
              v10);
      v5 = v12;
      if ( v12 >= 0 )
      {
        std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
          &this[12],
          &v14);
        std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
          &this[20],
          &v16);
        CUITelemetry::UnregisteredComponentFromCRS<unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
          &v16,
          &v17,
          (char *)&v17 + 4,
          &v18);
        goto LABEL_6;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC4,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)v12);
LABEL_23:
      if ( v5 >= 0 )
        goto LABEL_6;
      v8 = (unsigned int)v5;
      v9 = 168LL;
    }
    else
    {
      v8 = (unsigned int)HostIdentifierForComponentNoLock;
      v9 = 161LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)v8);
  }
  else
  {
    v4 = CUITelemetry::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      v23 = 0;
      v21 = &v13;
      v22 = 4;
      TlgWrite(v4, &unk_1802689C3, 0LL, 0LL, 3u, &pData);
    }
LABEL_6:
    v5 = 0;
  }
LABEL_7:
  if ( this != (RTL_SRWLOCK *)-88LL )
    ReleaseSRWLockExclusive(this + 11);
  if ( this != (RTL_SRWLOCK *)-80LL )
    ReleaseSRWLockExclusive(this + 10);
  return (unsigned int)v5;
}
