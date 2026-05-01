/*
 * XREFs of ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x18002FCE0
 * Callers:
 *     ?RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z @ 0x1800342B0 (-RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z.c)
 * Callees:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x18002F190 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x180030040 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803015A0 (-IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterComponentForHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v9; // r14
  RTL_SRWLOCK *v10; // rdi
  void *v11; // rax
  _QWORD *v12; // rdx
  void *v13; // rcx
  void *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  _QWORD **v17; // rbx
  unsigned __int64 v18; // rdx
  void **v19; // r8
  char *v20; // rcx
  char *v21; // rcx
  char *v22; // rcx
  _QWORD *v23; // rcx
  int HostIdentifierForComponent; // eax
  unsigned int v26; // ebx
  unsigned int v27; // [rsp+20h] [rbp-89h] BYREF
  void *Block; // [rsp+28h] [rbp-81h] BYREF
  RTL_SRWLOCK *v29; // [rsp+30h] [rbp-79h] BYREF
  RTL_SRWLOCK *v30; // [rsp+38h] [rbp-71h] BYREF
  __int64 v31; // [rsp+40h] [rbp-69h]
  _BYTE v32[16]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v33; // [rsp+60h] [rbp-49h] BYREF
  int v34; // [rsp+68h] [rbp-41h]
  int v35; // [rsp+6Ch] [rbp-3Dh]
  _QWORD v36[2]; // [rsp+70h] [rbp-39h] BYREF
  int v37; // [rsp+80h] [rbp-29h]
  int v38; // [rsp+84h] [rbp-25h]
  int v39; // [rsp+88h] [rbp-21h]
  HANDLE v40; // [rsp+90h] [rbp-19h]
  HANDLE hObject; // [rsp+98h] [rbp-11h]
  HANDLE v42; // [rsp+A0h] [rbp-9h]
  bool v43; // [rsp+A8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = this + 9;
  v27 = a2;
  AcquireSRWLockExclusive(this + 9);
  v9 = this + 10;
  v30 = v4;
  AcquireSRWLockExclusive(this + 10);
  v10 = this + 27;
  v29 = this + 10;
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[27],
    &Block,
    &v27);
  v11 = Block;
  if ( Block == this[28].Ptr )
  {
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v29);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v30);
    HostIdentifierForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
                                   (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                   a2,
                                   0LL,
                                   (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)v32);
    v26 = HostIdentifierForComponent;
    if ( HostIdentifierForComponent >= 0 )
    {
      if ( IsHostNull((const struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)v32) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF5,
          (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x8000FFFFLL,
          v27);
        return 2147549183LL;
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)HostIdentifierForComponent,
        v27);
      return v26;
    }
  }
  else
  {
    HIDWORD(v31) = a3;
    v12 = (char *)Block + 40;
    LODWORD(v31) = 0;
    v36[0] = 0LL;
    if ( v36 != (_QWORD *)((char *)Block + 40) )
    {
      v36[0] = *v12;
      *v12 = 0LL;
    }
    v38 = *((_DWORD *)v11 + 15);
    v39 = *((_DWORD *)v11 + 16);
    v13 = (void *)*((_QWORD *)v11 + 9);
    *((_QWORD *)v11 + 9) = 0LL;
    v40 = v13;
    v14 = (void *)*((_QWORD *)v11 + 10);
    *((_QWORD *)v11 + 10) = 0LL;
    hObject = v14;
    v42 = (HANDLE)*((_QWORD *)v11 + 11);
    *((_QWORD *)v11 + 11) = 0LL;
    LOBYTE(v14) = *((_BYTE *)v11 + 96);
    v37 = 0;
    v36[1] = *((_QWORD *)v11 + 6);
    v43 = (_BYTE)v14 != 0;
    v33 = v31;
    v34 = a4;
    v35 = a4;
    v15 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
            (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
            (struct Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)&v33,
            v27);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)v15,
        v27);
    }
    else
    {
      v17 = (_QWORD **)Block;
      v18 = (0x100000001B3LL
           * (*((unsigned __int8 *)Block + 19) ^ (0x100000001B3LL
                                                * (*((unsigned __int8 *)Block + 18) ^ (0x100000001B3LL
                                                                                     * (*((unsigned __int8 *)Block + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)Block + 16) ^ 0xCBF29CE484222325uLL)))))))) & (unsigned __int64)v10[6].Ptr;
      v19 = (void **)((char *)v10[3].Ptr + 16 * v18);
      if ( v19[1] == Block )
      {
        if ( *v19 == Block )
        {
          *v19 = v10[1].Ptr;
          *((RTL_SRWLOCK *)v10[3].Ptr + 2 * v18 + 1) = v10[1];
        }
        else
        {
          v19[1] = (void *)*((_QWORD *)Block + 1);
        }
      }
      else if ( *v19 == Block )
      {
        *v19 = *(void **)Block;
      }
      *v17[1] = *v17;
      (*v17)[1] = v17[1];
      --v10[2].Ptr;
      v20 = (char *)v17[11];
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      v21 = (char *)v17[10];
      if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v21);
      v22 = (char *)v17[9];
      if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v22);
      v23 = v17[5];
      if ( v23 )
      {
        v17[5] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      }
      operator delete(v17);
      v16 = 0;
    }
    if ( (char *)v42 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v42);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( (char *)v40 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v40);
    if ( v36[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v36[0] + 16LL))(v36[0]);
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return v16;
  }
}
