/*
 * XREFs of ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801790D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?CreateComponentEventHandles@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1801788B8 (-CreateComponentEventHandles@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801789F0 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801795C0 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x180179E10 (-SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18017A2A0 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18017A32C (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterComponentForHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // r12
  __int64 v9; // rax
  int ComponentEventHandles; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  RTL_SRWLOCK *v13; // r14
  int HostIdentifierForComponent; // eax
  unsigned int v16; // ebx
  __int64 *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  int v19[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF

  v23 = a2;
  wil::srwlock::lock_exclusive(this + 9, &SRWLock);
  v8 = this + 26;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[26],
    &v17,
    &v23);
  if ( v17 == this[27].Ptr )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    HostIdentifierForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
                                   (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                   a2,
                                   0LL,
                                   (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)v19);
    v16 = HostIdentifierForComponent;
    if ( HostIdentifierForComponent >= 0 )
    {
      if ( (v19[0] || v19[1]) && (v19[0] != 1 || v20) )
        return 0LL;
      v16 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA0,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x8000FFFFLL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9F,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)HostIdentifierForComponent);
    }
    return v16;
  }
  v19[0] = 0;
  v9 = v17[5];
  v19[1] = a3;
  v20 = a4;
  ComponentEventHandles = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
                            (__int64)this,
                            v19,
                            a4,
                            a2,
                            v9);
  v11 = ComponentEventHandles;
  if ( ComponentEventHandles >= 0 )
  {
    ComponentEventHandles = CreateComponentEventHandles(0, a4, a2, 0, &v17);
    v11 = ComponentEventHandles;
    if ( ComponentEventHandles >= 0 )
    {
      ComponentEventHandles = CreateComponentEventHandles(1, a4, a2, 1, &v18);
      v11 = ComponentEventHandles;
      if ( ComponentEventHandles >= 0 )
      {
        ComponentEventHandles = CreateComponentEventHandles(2, a4, a2, 0, v19);
        v11 = ComponentEventHandles;
        if ( ComponentEventHandles >= 0 )
        {
          v13 = this + 2;
          ComponentEventHandles = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetViewEventHandle(
                                    v13,
                                    a2,
                                    0LL,
                                    v17);
          v11 = ComponentEventHandles;
          if ( ComponentEventHandles >= 0 )
          {
            ComponentEventHandles = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetViewEventHandle(
                                      v13,
                                      a2,
                                      1LL,
                                      v18);
            v11 = ComponentEventHandles;
            if ( ComponentEventHandles >= 0 )
            {
              ComponentEventHandles = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetViewEventHandle(
                                        v13,
                                        a2,
                                        2LL,
                                        *(_QWORD *)v19);
              v11 = ComponentEventHandles;
              if ( ComponentEventHandles >= 0 )
              {
                std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
                  v8,
                  v19);
                v11 = 0;
                goto LABEL_18;
              }
              v12 = 150LL;
            }
            else
            {
              v12 = 149LL;
            }
          }
          else
          {
            v12 = 148LL;
          }
        }
        else
        {
          v12 = 146LL;
        }
      }
      else
      {
        v12 = 144LL;
      }
    }
    else
    {
      v12 = 142LL;
    }
  }
  else
  {
    v12 = 135LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
    (const char *)(unsigned int)ComponentEventHandles);
LABEL_18:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v11;
}
