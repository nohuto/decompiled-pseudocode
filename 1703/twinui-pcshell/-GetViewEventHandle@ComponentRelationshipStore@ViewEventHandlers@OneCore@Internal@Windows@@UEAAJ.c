/*
 * XREFs of ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180179BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18017A2A0 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewEventHandle(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  int v8; // edi
  void *v9; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rax
  const char *v12; // r9
  unsigned int LastError; // eax
  HANDLE v14; // rcx
  unsigned int v15; // ebx
  HANDLE v16; // rax
  __int64 v17; // r8
  const char *v18; // r9
  void *v19; // rdi
  HANDLE v20; // rbx
  HANDLE v21; // rax
  const char *v22; // r9
  unsigned int v23; // eax
  HANDLE v24; // rcx
  HANDLE v25; // rax
  __int64 v26; // r8
  const char *v27; // r9
  void *v28; // rdi
  HANDLE v29; // rbx
  HANDLE v30; // rax
  const char *v31; // r9
  unsigned int v32; // eax
  HANDLE v33; // rcx
  HANDLE v34; // rax
  __int64 v35; // r8
  const char *v36; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HANDLE TargetHandle; // [rsp+60h] [rbp+20h] BYREF
  int v40; // [rsp+68h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+38h] BYREF

  v40 = a2;
  *a4 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 6, &SRWLock);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &a1[16],
    &TargetHandle,
    &v40);
  v7 = TargetHandle;
  if ( TargetHandle == a1[17].Ptr )
    goto LABEL_23;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        TargetHandle = 0LL;
        v9 = (void *)v7[10];
        CurrentProcess = GetCurrentProcess();
        v11 = GetCurrentProcess();
        if ( DuplicateHandle(v11, v9, CurrentProcess, &TargetHandle, 0, 0, 2u) )
        {
          v16 = TargetHandle;
          v14 = 0LL;
          TargetHandle = 0LL;
          v15 = 0;
          *a4 = v16;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x18C,
                        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                        v12);
          v14 = TargetHandle;
          v15 = LastError;
        }
        if ( v14 && !CloseHandle(v14) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v17, v18);
          __debugbreak();
        }
        goto LABEL_24;
      }
LABEL_23:
      v15 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x80070490LL);
      goto LABEL_24;
    }
    TargetHandle = 0LL;
    v19 = (void *)v7[9];
    v20 = GetCurrentProcess();
    v21 = GetCurrentProcess();
    if ( DuplicateHandle(v21, v19, v20, &TargetHandle, 0, 0, 2u) )
    {
      v25 = TargetHandle;
      v24 = 0LL;
      TargetHandle = 0LL;
      v15 = 0;
      *a4 = v25;
    }
    else
    {
      v23 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x185,
              (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              v22);
      v24 = TargetHandle;
      v15 = v23;
    }
    if ( v24 && !CloseHandle(v24) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v26, v27);
      __debugbreak();
    }
  }
  else
  {
    TargetHandle = 0LL;
    v28 = (void *)v7[8];
    v29 = GetCurrentProcess();
    v30 = GetCurrentProcess();
    if ( DuplicateHandle(v30, v28, v29, &TargetHandle, 0, 0, 2u) )
    {
      v34 = TargetHandle;
      v33 = 0LL;
      TargetHandle = 0LL;
      v15 = 0;
      *a4 = v34;
    }
    else
    {
      v32 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x17E,
              (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              v31);
      v33 = TargetHandle;
      v15 = v32;
    }
    if ( v33 && !CloseHandle(v33) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v35, v36);
      JUMPOUT(0x180179E03LL);
    }
  }
LABEL_24:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v15;
}
