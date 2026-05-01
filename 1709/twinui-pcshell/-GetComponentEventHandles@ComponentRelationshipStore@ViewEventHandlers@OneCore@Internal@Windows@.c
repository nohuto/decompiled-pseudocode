/*
 * XREFs of ?GetComponentEventHandles@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIKPEAPEAX@Z @ 0x1801C6A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180005940 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentEventHandles(
        RTL_SRWLOCK *this,
        int a2,
        int a3,
        void **a4)
{
  RTL_SRWLOCK *v7; // r15
  _QWORD *v8; // rbx
  void *v9; // rsi
  HANDLE CurrentProcess; // rdi
  HANDLE v11; // rax
  const char *v12; // r9
  unsigned int v13; // ebx
  const char *v14; // r9
  void *v15; // rsi
  HANDLE v16; // rdi
  HANDLE v17; // rax
  const char *v18; // r9
  const char *v19; // r9
  void *v20; // rdi
  HANDLE v21; // rbx
  HANDLE v22; // rax
  const char *v23; // r9
  unsigned int LastError; // eax
  HANDLE v25; // rcx
  const char *v26; // r9
  HANDLE v27; // [rsp+40h] [rbp-20h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-18h] BYREF
  HANDLE TargetHandle[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v31; // [rsp+98h] [rbp+38h] BYREF

  v31 = a2;
  if ( a3 != 3 )
    return 2147942487LL;
  v7 = this + 8;
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  AcquireSRWLockShared(this + 8);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &this[18],
    TargetHandle,
    &v31);
  v8 = TargetHandle[0];
  if ( TargetHandle[0] == this[19].Ptr )
  {
    v13 = -2140667901;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)0x80680003LL);
  }
  else
  {
    TargetHandle[0] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      TargetHandle,
      0LL);
    v9 = (void *)v8[9];
    CurrentProcess = GetCurrentProcess();
    v11 = GetCurrentProcess();
    if ( DuplicateHandle(v11, v9, CurrentProcess, TargetHandle, 0, 0, 2u) )
    {
      hObject = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        &hObject,
        0LL);
      v15 = (void *)v8[10];
      v16 = GetCurrentProcess();
      v17 = GetCurrentProcess();
      if ( DuplicateHandle(v17, v15, v16, &hObject, 0, 0, 2u) )
      {
        v27 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          &v27,
          0LL);
        v20 = (void *)v8[11];
        v21 = GetCurrentProcess();
        v22 = GetCurrentProcess();
        if ( DuplicateHandle(v22, v20, v21, &v27, 0, 0, 2u) )
        {
          v25 = 0LL;
          a4[1] = hObject;
          v13 = 0;
          *a4 = TargetHandle[0];
          a4[2] = v27;
          hObject = 0LL;
          TargetHandle[0] = 0LL;
          v27 = 0LL;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x27D,
                        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                        v23);
          v25 = v27;
          v13 = LastError;
        }
        if ( v25 && !CloseHandle(v25) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x878,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v26);
          JUMPOUT(0x1801C6CB8LL);
        }
      }
      else
      {
        v13 = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x27A,
                (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                v18);
      }
      if ( hObject && !CloseHandle(hObject) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x878,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v19);
        __debugbreak();
      }
    }
    else
    {
      v13 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x277,
              (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              v12);
    }
    if ( TargetHandle[0] && !CloseHandle(TargetHandle[0]) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x878,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v14);
      __debugbreak();
    }
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  return v13;
}
