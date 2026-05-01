/*
 * XREFs of ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x1801C6570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180005940 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewEventHandle(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *v8; // rbx
  int v9; // esi
  void *v10; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v12; // rax
  const char *v13; // r9
  unsigned int LastError; // eax
  HANDLE v15; // rcx
  unsigned int v16; // ebx
  HANDLE v17; // rax
  const char *v18; // r9
  void *v19; // rdi
  HANDLE v20; // rbx
  HANDLE v21; // rax
  const char *v22; // r9
  unsigned int v23; // eax
  HANDLE v24; // rcx
  HANDLE v25; // rax
  const char *v26; // r9
  void *v27; // rdi
  HANDLE v28; // rbx
  HANDLE v29; // rax
  const char *v30; // r9
  unsigned int v31; // eax
  HANDLE v32; // rcx
  HANDLE v33; // rax
  const char *v34; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HANDLE TargetHandle; // [rsp+70h] [rbp+30h] BYREF
  int v38; // [rsp+78h] [rbp+38h] BYREF

  v38 = a2;
  *a4 = 0LL;
  v4 = a1 + 8;
  AcquireSRWLockShared(a1 + 8);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &a1[18],
    &TargetHandle,
    &v38);
  v8 = TargetHandle;
  if ( TargetHandle == a1[19].Ptr )
    goto LABEL_23;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        TargetHandle = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          &TargetHandle,
          0LL);
        v10 = (void *)v8[11];
        CurrentProcess = GetCurrentProcess();
        v12 = GetCurrentProcess();
        if ( DuplicateHandle(v12, v10, CurrentProcess, &TargetHandle, 0, 0, 2u) )
        {
          v17 = TargetHandle;
          v15 = 0LL;
          TargetHandle = 0LL;
          v16 = 0;
          *a4 = v17;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x237,
                        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                        v13);
          v15 = TargetHandle;
          v16 = LastError;
        }
        if ( v15 && !CloseHandle(v15) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x878,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v18);
          __debugbreak();
        }
        goto LABEL_24;
      }
LABEL_23:
      v16 = -2140667901;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23D,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x80680003LL);
      goto LABEL_24;
    }
    TargetHandle = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &TargetHandle,
      0LL);
    v19 = (void *)v8[10];
    v20 = GetCurrentProcess();
    v21 = GetCurrentProcess();
    if ( DuplicateHandle(v21, v19, v20, &TargetHandle, 0, 0, 2u) )
    {
      v25 = TargetHandle;
      v24 = 0LL;
      TargetHandle = 0LL;
      v16 = 0;
      *a4 = v25;
    }
    else
    {
      v23 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x230,
              (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              v22);
      v24 = TargetHandle;
      v16 = v23;
    }
    if ( v24 && !CloseHandle(v24) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x878,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v26);
      __debugbreak();
    }
  }
  else
  {
    TargetHandle = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &TargetHandle,
      0LL);
    v27 = (void *)v8[9];
    v28 = GetCurrentProcess();
    v29 = GetCurrentProcess();
    if ( DuplicateHandle(v29, v27, v28, &TargetHandle, 0, 0, 2u) )
    {
      v33 = TargetHandle;
      v32 = 0LL;
      TargetHandle = 0LL;
      v16 = 0;
      *a4 = v33;
    }
    else
    {
      v31 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x229,
              (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              v30);
      v32 = TargetHandle;
      v16 = v31;
    }
    if ( v32 && !CloseHandle(v32) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x878,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v34);
      JUMPOUT(0x1801C6813LL);
    }
  }
LABEL_24:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v16;
}
