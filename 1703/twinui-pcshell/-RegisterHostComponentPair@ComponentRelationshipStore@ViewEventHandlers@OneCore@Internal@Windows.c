/*
 * XREFs of ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801789F0
 * Callers:
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801790D0 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?count@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x18017A1DC (-count@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@1@@Z @ 0x18017B8FC (--$_Insert@AEAU-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x18017C25C (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 *     ??$_Buynode@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_List_buy@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@1@PEAU21@0AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x18017C49C (--$_Buynode@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ??$_Buynode@AEAUHostIdentifierKey@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUHostIdentifierKey@@AEAI@Z @ 0x18017C53C (--$_Buynode@AEAUHostIdentifierKey@@AEAI@-$_List_buy@U-$pair@$$CBUHostIdentifierKey@@I@std@@V-$al.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
        __int64 a1,
        int *a2,
        int a3,
        int a4,
        __int64 a5)
{
  int v8; // r9d
  int v9; // r11d
  int v10; // r10d
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // r15
  __int64 *v18; // rcx
  int v19; // ecx
  __int64 *v20; // rcx
  __int64 *v21; // rdx
  unsigned __int64 v22; // rdx
  const char *v23; // r9
  __int64 result; // rax
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // rax
  _DWORD v31[2]; // [rsp+30h] [rbp-C8h]
  int v32; // [rsp+38h] [rbp-C0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-B8h] BYREF
  _DWORD v34[4]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A0h]
  _BYTE v36[16]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-88h] BYREF
  int v38; // [rsp+78h] [rbp-80h]
  int v39; // [rsp+7Ch] [rbp-7Ch]
  __int64 v40; // [rsp+80h] [rbp-78h]
  int v41; // [rsp+90h] [rbp-68h]
  int v42; // [rsp+94h] [rbp-64h]
  HANDLE v43; // [rsp+98h] [rbp-60h]
  HANDLE hObject[2]; // [rsp+A0h] [rbp-58h]
  char v45; // [rsp+B0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v35 = -2LL;
  v32 = a4;
  try
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 64), &SRWLock);
    v8 = *a2;
    v34[0] = v8;
    v9 = a2[1];
    v34[1] = v9;
    v10 = a2[2];
    v34[2] = v10;
    v11 = 0xCBF29CE484222325uLL;
    v12 = 0LL;
    if ( v8 == 1 )
    {
      v31[0] = v10;
      do
        v11 = 0x100000001B3LL * (*((unsigned __int8 *)v31 + v12++) ^ (unsigned __int64)v11);
      while ( v12 < 4 );
    }
    else
    {
      v31[0] = v9;
      do
        v11 = 0x100000001B3LL * (*((unsigned __int8 *)v31 + v12++) ^ (unsigned __int64)v11);
      while ( v12 < 4 );
    }
    v13 = v11 & *(_QWORD *)(a1 + 128);
    v14 = *(_QWORD *)(a1 + 104);
    v15 = *(__int64 **)(v14 + 16 * v13);
    v16 = 2 * v13;
    v17 = v15;
    while ( 1 )
    {
      if ( v17 == *(__int64 **)(a1 + 88) )
        v18 = *(__int64 **)(a1 + 88);
      else
        v18 = **(__int64 ***)(v14 + 8 * v16 + 8);
      if ( v15 == v18 )
        goto LABEL_31;
      v19 = *((_DWORD *)v15 + 4);
      if ( v19 == v8 && (!v19 && *((_DWORD *)v15 + 5) == v9 || v19 == 1 && *((_DWORD *)v15 + 6) == v10) )
        break;
      v15 = (__int64 *)*v15;
    }
    v20 = v15;
    while ( 1 )
    {
      v21 = v17 == *(__int64 **)(a1 + 88) ? *(__int64 **)(a1 + 88) : **(__int64 ***)(v14 + 8 * v16 + 8);
      if ( v15 == v21
        || v8 != *((_DWORD *)v15 + 4)
        || (v8 || v9 != *((_DWORD *)v15 + 5)) && (v8 != 1 || v10 != *((_DWORD *)v15 + 6)) )
      {
        break;
      }
      v15 = (__int64 *)*v15;
    }
    if ( v20 == v15 )
    {
LABEL_31:
      v15 = *(__int64 **)(a1 + 88);
      v20 = v15;
    }
    v22 = 0LL;
    if ( v20 == v15 )
      goto LABEL_67;
    do
    {
      ++v22;
      v20 = (__int64 *)*v20;
    }
    while ( v20 != v15 );
    if ( v22 < 0x400 )
    {
LABEL_67:
      if ( std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::count(
             a1 + 144,
             &v32) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x800704DFLL);
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        result = 2147943647LL;
      }
      else
      {
        v37 = *(_QWORD *)a2;
        v38 = a2[2];
        v39 = a3;
        v25 = a5;
        v40 = a5;
        if ( a5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
        v41 = 0;
        v42 = 1;
        v43 = 0LL;
        *(_OWORD *)hObject = 0LL;
        v45 = 1;
        v26 = **(_QWORD **)(a1 + 152);
        v27 = std::_List_buy<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::_Buynode<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
                v25,
                v26,
                *(_QWORD *)(v26 + 8),
                (unsigned int)&v32,
                (__int64)&v37);
        if ( *(_QWORD *)(a1 + 160) == 0x2AAAAAAAAAAAAA9LL )
          std::_Xlength_error("list<T> too long");
        ++*(_QWORD *)(a1 + 160);
        *(_QWORD *)(v26 + 8) = v27;
        **(_QWORD **)(v27 + 8) = v27;
        std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_Insert<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>(
          a1 + 144,
          v36,
          **(_QWORD **)(a1 + 152) + 16LL,
          **(_QWORD **)(a1 + 152));
        if ( (unsigned __int64)hObject[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(hObject[1]);
        if ( (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(hObject[0]);
        if ( (char *)v43 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(v43);
        v28 = v40;
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        v29 = **(_QWORD **)(a1 + 88);
        v30 = std::_List_buy<std::pair<HostIdentifierKey const,unsigned int>>::_Buynode<HostIdentifierKey &,unsigned int &>(
                v28,
                v29,
                *(_QWORD *)(v29 + 8),
                (unsigned int)v34,
                (__int64)&v32);
        if ( *(_QWORD *)(a1 + 96) == 0x7FFFFFFFFFFFFFELL )
          std::_Xlength_error("list<T> too long");
        ++*(_QWORD *)(a1 + 96);
        *(_QWORD *)(v29 + 8) = v30;
        **(_QWORD **)(v30 + 8) = v30;
        std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
          a1 + 80,
          v36,
          **(_QWORD **)(a1 + 88) + 16LL,
          **(_QWORD **)(a1 + 88));
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x80070054LL);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      result = 2147942484LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30,
                           (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                           v23);
  }
  return result;
}
