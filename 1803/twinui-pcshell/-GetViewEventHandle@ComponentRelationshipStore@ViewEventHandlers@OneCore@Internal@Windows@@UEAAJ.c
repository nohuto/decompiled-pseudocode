/*
 * XREFs of ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180030A40
 * Callers:
 *     ?GetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180034050 (-GetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F6134 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FC6BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewEventHandle(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *v8; // rbx
  void *v9; // rdi
  HANDLE v10; // rbx
  HANDLE v11; // rax
  void *v12; // rdx
  const char *v13; // r9
  HANDLE v14; // rax
  wil::details *v15; // rcx
  unsigned int v16; // ebx
  int v18; // esi
  void *v19; // rdi
  HANDLE v20; // rbx
  HANDLE v21; // rax
  __int64 v22; // rdx
  unsigned int LastError; // eax
  void *v24; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v26; // rax
  int v27; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HANDLE TargetHandle; // [rsp+70h] [rbp+30h] BYREF
  int v30; // [rsp+78h] [rbp+38h] BYREF

  v30 = a2;
  *a4 = 0LL;
  v4 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &a1[17],
    &TargetHandle,
    &v30);
  v8 = TargetHandle;
  if ( TargetHandle == a1[18].Ptr )
    goto LABEL_18;
  if ( a3 )
  {
    v18 = a3 - 1;
    if ( !v18 )
    {
      TargetHandle = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        &TargetHandle,
        0LL);
      v24 = (void *)v8[10];
      CurrentProcess = GetCurrentProcess();
      v26 = GetCurrentProcess();
      if ( DuplicateHandle(v26, v24, CurrentProcess, &TargetHandle, 0, 0, 2u) )
        goto LABEL_4;
      v22 = 560LL;
      goto LABEL_15;
    }
    if ( v18 == 1 )
    {
      TargetHandle = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        &TargetHandle,
        0LL);
      v19 = (void *)v8[11];
      v20 = GetCurrentProcess();
      v21 = GetCurrentProcess();
      if ( DuplicateHandle(v21, v19, v20, &TargetHandle, 0, 0, 2u) )
        goto LABEL_4;
      v22 = 567LL;
      goto LABEL_15;
    }
LABEL_18:
    v16 = -2140667901;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23D,
      (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)0x80680003LL,
      v27);
    goto LABEL_7;
  }
  TargetHandle = 0LL;
  v9 = (void *)v8[9];
  v10 = GetCurrentProcess();
  v11 = GetCurrentProcess();
  if ( DuplicateHandle(v11, v9, v10, &TargetHandle, 0, 0, 2u) )
  {
LABEL_4:
    v14 = TargetHandle;
    v15 = 0LL;
    TargetHandle = 0LL;
    v16 = 0;
    *a4 = v14;
    goto LABEL_5;
  }
  v22 = 553LL;
LABEL_15:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v22,
                (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                v13);
  v15 = (wil::details *)TargetHandle;
  v16 = LastError;
LABEL_5:
  if ( v15 )
    wil::details::CloseHandle(v15, v12);
LABEL_7:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v16;
}
