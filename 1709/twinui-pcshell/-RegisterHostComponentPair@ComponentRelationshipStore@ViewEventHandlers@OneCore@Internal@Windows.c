/*
 * XREFs of ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1801C4B10
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801C4FD0 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Int_ea_1801C4FD0.c)
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801C5580 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1801C49D4 (-CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TY.c)
 *     ?count@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1801C6E9C (-count@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 *     ??$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1801C768C (--$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     ??$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAI0AEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1801C7720 (--$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x1801C9024 (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 *     ??$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1801C9308 (--$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@-$_List_buy@U.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        struct Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *a2,
        int a3)
{
  int v5; // r8d
  int v6; // r11d
  int v7; // r10d
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r9
  _QWORD *v15; // rcx
  int v16; // ecx
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rdx
  const char *v20; // r9
  __int64 result; // rax
  char *v22; // r15
  DWORD LastError; // edi
  int ComponentEventHandles; // eax
  unsigned int v25; // edi
  char *v26; // r15
  DWORD v27; // edi
  int v28; // eax
  unsigned int v29; // edi
  char *v30; // r15
  DWORD v31; // edi
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // edi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // [rsp+38h] [rbp-60h] BYREF
  int v39; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v40; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v41[80]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v43; // [rsp+A0h] [rbp+8h]
  __int64 v44; // [rsp+A8h] [rbp+10h]
  int v45; // [rsp+B0h] [rbp+18h] BYREF

  v45 = a3;
  try
  {
    v5 = *(_DWORD *)a2;
    v38 = *(_DWORD *)a2;
    v6 = *((_DWORD *)a2 + 1);
    v39 = v6;
    v7 = *((_DWORD *)a2 + 2);
    v40 = v7;
    v8 = *((_QWORD *)a2 + 2);
    v44 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v7 = v40;
      v6 = v39;
      v5 = v38;
    }
    v9 = 0xCBF29CE484222325uLL;
    v10 = 0LL;
    if ( v5 == 1 )
    {
      v43 = v7;
      do
        v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v43 + v10++) ^ (unsigned __int64)v9);
      while ( v10 < 4 );
    }
    else
    {
      v43 = v6;
      do
        v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v43 + v10++) ^ (unsigned __int64)v9);
      while ( v10 < 4 );
    }
    v11 = *((_QWORD *)this + 15);
    v12 = *(_QWORD **)(v11 + 16 * (v9 & *((_QWORD *)this + 18)));
    v13 = 2 * (v9 & *((_QWORD *)this + 18));
    v14 = *((_QWORD *)this + 13);
    while ( 1 )
    {
      if ( *(_QWORD *)(v11 + 16 * (v9 & *((_QWORD *)this + 18))) == v14 )
        v15 = (_QWORD *)*((_QWORD *)this + 13);
      else
        v15 = **(_QWORD ***)(v11 + 16 * (v9 & *((_QWORD *)this + 18)) + 8);
      if ( v12 == v15 )
        goto LABEL_33;
      v16 = *((_DWORD *)v12 + 4);
      if ( v16 == v5 && (!v16 && *((_DWORD *)v12 + 5) == v6 || v16 == 1 && *((_DWORD *)v12 + 6) == v7) )
        break;
      v12 = (_QWORD *)*v12;
    }
    v17 = v12;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v11 + 8 * v13) == v14 ? (_QWORD *)*((_QWORD *)this + 13) : **(_QWORD ***)(v11 + 8 * v13 + 8);
      if ( v12 == v18
        || v5 != *((_DWORD *)v12 + 4)
        || (v5 || v6 != *((_DWORD *)v12 + 5)) && (v5 != 1 || v7 != *((_DWORD *)v12 + 6)) )
      {
        break;
      }
      v12 = (_QWORD *)*v12;
    }
    if ( v17 == v12 )
    {
LABEL_33:
      v17 = (_QWORD *)*((_QWORD *)this + 13);
      v12 = v17;
    }
    v19 = 0LL;
    if ( v17 == v12 )
      goto LABEL_74;
    do
    {
      ++v19;
      v17 = (_QWORD *)*v17;
    }
    while ( v17 != v12 );
    if ( v19 < 0xFFFF )
    {
LABEL_74:
      if ( std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::count(
             (char *)this + 160,
             &v45) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x800704DFLL);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        result = 2147943647LL;
      }
      else
      {
        v22 = (char *)*((_QWORD *)a2 + 6);
        if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          LastError = GetLastError();
          CloseHandle(v22);
          SetLastError(LastError);
        }
        *((_QWORD *)a2 + 6) = 0LL;
        ComponentEventHandles = Windows::Internal::OneCore::ViewEventHandlers::CreateComponentEventHandles(
                                  0,
                                  *((_DWORD *)a2 + 3),
                                  v45,
                                  0,
                                  (_QWORD *)a2 + 6);
        v25 = ComponentEventHandles;
        if ( ComponentEventHandles >= 0 )
        {
          v26 = (char *)*((_QWORD *)a2 + 7);
          if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v27 = GetLastError();
            CloseHandle(v26);
            SetLastError(v27);
          }
          *((_QWORD *)a2 + 7) = 0LL;
          v28 = Windows::Internal::OneCore::ViewEventHandlers::CreateComponentEventHandles(
                  1,
                  *((_DWORD *)a2 + 3),
                  v45,
                  1,
                  (_QWORD *)a2 + 7);
          v29 = v28;
          if ( v28 >= 0 )
          {
            v30 = (char *)*((_QWORD *)a2 + 8);
            if ( (unsigned __int64)(v30 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              v31 = GetLastError();
              CloseHandle(v30);
              SetLastError(v31);
            }
            *((_QWORD *)a2 + 8) = 0LL;
            v32 = Windows::Internal::OneCore::ViewEventHandlers::CreateComponentEventHandles(
                    2,
                    *((_DWORD *)a2 + 3),
                    v45,
                    0,
                    (_QWORD *)a2 + 8);
            v34 = v32;
            if ( v32 >= 0 )
            {
              v35 = **((_QWORD **)this + 13);
              v36 = std::_List_buy<std::pair<HostIdentifierKey const,unsigned int>>::_Buynode<Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier &,unsigned int &>(
                      v33,
                      v35,
                      *(_QWORD *)(v35 + 8),
                      (_DWORD)a2,
                      (__int64)&v45);
              v37 = *((_QWORD *)this + 14);
              if ( v37 == 0x7FFFFFFFFFFFFFELL )
                std::_Xlength_error("list<T> too long");
              *((_QWORD *)this + 14) = v37 + 1;
              *(_QWORD *)(v35 + 8) = v36;
              **(_QWORD **)(v36 + 8) = v36;
              std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
                (char *)this + 96,
                v41,
                **((_QWORD **)this + 13) + 16LL);
              std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::emplace<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
                (char *)this + 160,
                v41,
                &v45,
                a2);
              CUITelemetry::RegisteredComponentInCRS<unsigned int &,unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
                (unsigned int)&v40,
                (unsigned int)&v45,
                (unsigned int)&v38,
                (unsigned int)&v39,
                (__int64)&v40);
              if ( v8 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x3D,
                (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                (const char *)(unsigned int)v32);
              if ( v8 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
              result = v34;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x3C,
              (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              (const char *)(unsigned int)v28);
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            result = v29;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3B,
            (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
            (const char *)(unsigned int)ComponentEventHandles);
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          result = v25;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x80070054LL);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      result = 2147942484LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4F,
                           (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                           v20);
  }
  return result;
}
