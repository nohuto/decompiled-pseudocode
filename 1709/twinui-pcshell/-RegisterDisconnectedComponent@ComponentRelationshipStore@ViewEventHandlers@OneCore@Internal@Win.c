/*
 * XREFs of ?RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IPEAUIInspectable@@@Z @ 0x1801C57D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ??$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1801C768C (--$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     ??$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z @ 0x1801C78CC (--$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  int *v6; // r12
  const char *v7; // r9
  __int64 result; // rax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v12[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-88h] BYREF
  int v14; // [rsp+58h] [rbp-80h]
  int v15; // [rsp+5Ch] [rbp-7Ch]
  __int64 v16; // [rsp+60h] [rbp-78h]
  int v17; // [rsp+70h] [rbp-68h]
  int v18; // [rsp+74h] [rbp-64h]
  int v19; // [rsp+78h] [rbp-60h]
  HANDLE v20[2]; // [rsp+80h] [rbp-58h]
  HANDLE hObject; // [rsp+90h] [rbp-48h]
  char v22; // [rsp+98h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v12[2] = -2LL;
  v10 = a3;
  try
  {
    v6 = (int *)(a2 + 8);
    CUITelemetry::RegisteringDisconnectedComponent<unsigned int &,unsigned int &>(a2 + 8, &v10);
    AcquireSRWLockExclusive(a1 + 10);
    v12[3] = a1 + 10;
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
      &a1[20],
      &v11,
      &v10);
    if ( v11 == a1[21].Ptr )
    {
      v12[0] = 0LL;
      AcquireSRWLockExclusive(a1 + 11);
      v11 = a1 + 11;
      v9 = *v6;
      v13 = v12[0];
      v14 = 0;
      v15 = v9;
      v16 = a4;
      if ( a4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      v17 = 0;
      v18 = 1;
      v19 = 0;
      *(_OWORD *)v20 = 0LL;
      hObject = 0LL;
      v22 = 1;
      std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::emplace<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        &a1[28],
        v12,
        &v10,
        &v13);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( (unsigned __int64)v20[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20[1]);
      if ( (unsigned __int64)v20[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20[0]);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( a1 != (RTL_SRWLOCK *)-88LL )
        ReleaseSRWLockExclusive(a1 + 11);
      if ( a1 != (RTL_SRWLOCK *)-80LL )
        ReleaseSRWLockExclusive(a1 + 10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x80680005LL);
      if ( a1 != (RTL_SRWLOCK *)-80LL )
        ReleaseSRWLockExclusive(a1 + 10);
      result = 2154299397LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10F,
                           (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                           v7);
  }
  return result;
}
