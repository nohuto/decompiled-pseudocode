/*
 * XREFs of ?PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJI@Z @ 0x1801C59C4
 * Callers:
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C5310 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ??$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1801C768C (--$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        int a2)
{
  const char *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // esi
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v11; // [rsp+50h] [rbp-68h] BYREF
  int v12; // [rsp+58h] [rbp-60h]
  int v13; // [rsp+5Ch] [rbp-5Ch]
  __int64 v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  int v16; // [rsp+70h] [rbp-48h]
  int v17; // [rsp+74h] [rbp-44h]
  int v18; // [rsp+78h] [rbp-40h]
  HANDLE v19[2]; // [rsp+80h] [rbp-38h]
  HANDLE hObject; // [rsp+90h] [rbp-28h]
  char v21; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v10[2] = -2LL;
  v8 = a2;
  try
  {
    v10[0] = 0LL;
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
      (char *)this + 160,
      &v9,
      &v8);
    if ( v9 != *((_QWORD *)this + 21) )
    {
      v4 = *(_QWORD *)(v9 + 40);
      v5 = *(_QWORD *)(v9 + 48);
      v6 = *(_DWORD *)(v9 + 60);
      v11 = v10[0];
      v12 = 0;
      v13 = 0;
      v14 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v15 = v5;
      v16 = 0;
      v17 = v6;
      v18 = 0;
      *(_OWORD *)v19 = 0LL;
      hObject = 0LL;
      v21 = 1;
      std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::emplace<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        (char *)this + 224,
        v10,
        &v8,
        &v11);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( (unsigned __int64)v19[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v19[1]);
      if ( (unsigned __int64)v19[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v19[0]);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x128,
                           (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                           v3);
  }
  return result;
}
