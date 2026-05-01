/*
 * XREFs of ?RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IPEAUIInspectable@@@Z @ 0x180030570
 * Callers:
 *     ?RegisterDisconnectedComponent@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@IPEAUIInspectable@@@Z @ 0x180033FA0 (-RegisterDisconnectedComponent@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@On.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B5B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@U.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@1@@Z @ 0x180072810 (--$_Insert@AEAU-$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@I.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 *     ??$_Buynode@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_List_buy@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@PEAX@1@PEAU21@0AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x180072B30 (--$_Buynode@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // r10
  int v8; // ecx
  int v9; // eax
  unsigned int (__fastcall *v10)(__int64); // rax
  __int64 v11; // rsi
  __int64 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  const char *v15; // r9
  __int64 result; // rax
  int UserDataCount; // [rsp+20h] [rbp-138h]
  int v18; // [rsp+30h] [rbp-128h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-120h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-118h] BYREF
  __int64 v21; // [rsp+48h] [rbp-110h] BYREF
  __int64 v22; // [rsp+58h] [rbp-100h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-E8h]
  __int64 v25; // [rsp+78h] [rbp-E0h]
  _BYTE v26[16]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-C8h] BYREF
  int v28; // [rsp+98h] [rbp-C0h]
  int v29; // [rsp+9Ch] [rbp-BCh]
  __int64 v30; // [rsp+A0h] [rbp-B8h]
  int v31; // [rsp+B0h] [rbp-A8h]
  __int64 v32; // [rsp+B4h] [rbp-A4h]
  HANDLE v33[2]; // [rsp+C0h] [rbp-98h]
  HANDLE hObject; // [rsp+D0h] [rbp-88h]
  char v35; // [rsp+D8h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-78h] BYREF
  void *v37; // [rsp+F0h] [rbp-68h]
  int v38; // [rsp+F8h] [rbp-60h]
  int v39; // [rsp+FCh] [rbp-5Ch]
  __int64 v40; // [rsp+100h] [rbp-58h]
  __int64 v41; // [rsp+108h] [rbp-50h]
  int *v42; // [rsp+110h] [rbp-48h]
  __int64 v43; // [rsp+118h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v24 = -2LL;
  v18 = a3;
  try
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CUITelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_180438DE8;
      qword_180438DE8 = &LockScreenServiceLogging::`vftable';
      qword_180438E00 = (struct _TlgProvider_t *)&`CUITelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438DE8, qword_180438E00);
      InitOnceComplete(&`CUITelemetry::Instance'::`2'::wrapper, 0, &qword_180438DE8);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u )
    {
      v40 = a2 + 8;
      v41 = 4LL;
      v42 = &v18;
      v43 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039EBEE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v37 = &unk_18039EBF9;
      v38 = 59;
      v39 = 1;
      EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
    v22 = a1 + 72;
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
      a1 + 152,
      &v21,
      &v18);
    if ( v21 == *(_QWORD *)(a1 + 160) )
    {
      v21 = 0LL;
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
      v25 = a1 + 80;
      v9 = *(_DWORD *)(a2 + 8);
      v27 = v21;
      v28 = 0;
      v29 = v9;
      v30 = a4;
      if ( a4 )
      {
        v10 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL);
        if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::AddRef )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::AddRef(a4);
        else
          v10(a4);
      }
      v31 = 0;
      v32 = 1LL;
      *(_OWORD *)v33 = 0LL;
      hObject = 0LL;
      v35 = 1;
      v11 = **(_QWORD **)(a1 + 224);
      v12 = *(__int64 **)(v11 + 8);
      v13 = std::_List_buy<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>::_Buynode<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
              v8,
              v11,
              (_DWORD)v12,
              (unsigned int)&v18,
              (__int64)&v27);
      v14 = *(_QWORD *)(a1 + 232);
      if ( v14 == 0x276276276276275LL )
        std::_Xlength_error("list<T> too long");
      *(_QWORD *)(a1 + 232) = v14 + 1;
      *(_QWORD *)(v11 + 8) = v13;
      *v12 = v13;
      std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_Insert<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>(
        a1 + 216,
        v26,
        **(_QWORD **)(a1 + 224) + 16LL);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( (unsigned __int64)v33[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v33[1]);
      if ( (unsigned __int64)v33[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v33[0]);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      if ( a1 != -80 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
      if ( a1 != -72 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 72));
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x80680005LL,
        UserDataCount);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v22);
      result = 2154299397LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10F,
                           (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                           v15);
  }
  return result;
}
