/*
 * XREFs of ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801C5580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1801C4B10 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1801C5D20 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1801C7128 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEvent_ea_1801C7128.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterComponentForHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v8; // rsi
  RTL_SRWLOCK *v9; // r12
  _QWORD *v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r14d
  int HostIdentifierForComponent; // eax
  unsigned int v22; // edi
  char v23[8]; // [rsp+20h] [rbp-59h] BYREF
  _DWORD v24[4]; // [rsp+28h] [rbp-51h] BYREF
  __int64 v25; // [rsp+38h] [rbp-41h]
  __int64 v26; // [rsp+50h] [rbp-29h] BYREF
  int v27; // [rsp+58h] [rbp-21h]
  int v28; // [rsp+5Ch] [rbp-1Dh]
  _QWORD v29[2]; // [rsp+60h] [rbp-19h] BYREF
  int v30; // [rsp+70h] [rbp-9h]
  int v31; // [rsp+74h] [rbp-5h]
  int v32; // [rsp+78h] [rbp-1h]
  HANDLE v33; // [rsp+80h] [rbp+7h]
  HANDLE v34; // [rsp+88h] [rbp+Fh]
  HANDLE hObject; // [rsp+90h] [rbp+17h]
  bool v36; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  _QWORD *v38; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v39; // [rsp+E8h] [rbp+6Fh] BYREF
  int v40; // [rsp+F8h] [rbp+7Fh]

  v40 = a4;
  v39 = a2;
  v4 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  v8 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  v9 = this + 28;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[28],
    &v38,
    &v39);
  v10 = v38;
  if ( v38 == this[29].Ptr )
  {
    if ( this != (RTL_SRWLOCK *)-88LL )
      ReleaseSRWLockExclusive(this + 11);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    HostIdentifierForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
                                   (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                   a2,
                                   0LL,
                                   (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)v24);
    v22 = HostIdentifierForComponent;
    if ( HostIdentifierForComponent >= 0 )
    {
      if ( (v24[0] || v24[1]) && (v24[0] != 1 || v24[2]) )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF5,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF4,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)HostIdentifierForComponent);
      return v22;
    }
  }
  else
  {
    LODWORD(v25) = 0;
    v11 = v38 + 5;
    v29[0] = 0LL;
    HIDWORD(v25) = a3;
    if ( v29 != v38 + 5 )
    {
      v12 = *v11;
      *v11 = 0LL;
      v29[0] = v12;
    }
    v13 = *((_DWORD *)v10 + 15);
    v30 = 0;
    v31 = v13;
    v32 = *((_DWORD *)v10 + 16);
    v14 = (void *)v10[9];
    v10[9] = 0LL;
    v33 = v14;
    v15 = (void *)v10[10];
    v10[10] = 0LL;
    v34 = v15;
    v16 = (void *)v10[11];
    v10[11] = 0LL;
    hObject = v16;
    v17 = v10[6];
    v36 = *((_BYTE *)v10 + 96) != 0;
    v29[1] = v17;
    v26 = v25;
    v27 = v40;
    v28 = v40;
    v18 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
            (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
            (struct Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)&v26,
            v39);
    v19 = v18;
    if ( v18 >= 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
        v9,
        v23);
      v19 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xEA,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)v18);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( (char *)v34 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v34);
    if ( (char *)v33 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v33);
    if ( v29[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return v19;
  }
}
