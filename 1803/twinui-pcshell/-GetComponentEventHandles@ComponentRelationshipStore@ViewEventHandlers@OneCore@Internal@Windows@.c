/*
 * XREFs of ?GetComponentEventHandles@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIKPEAPEAX@Z @ 0x180030200
 * Callers:
 *     ?GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z @ 0x180033E10 (-GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180072A20 (-lower_bound@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandler.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FC6BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentEventHandles(
        RTL_SRWLOCK *this,
        int a2,
        int a3,
        void **a4)
{
  RTL_SRWLOCK *v6; // r15
  _QWORD *v7; // rbx
  void *v8; // rsi
  HANDLE CurrentProcess; // rdi
  HANDLE v10; // rax
  const char *v11; // r9
  void *v12; // rsi
  HANDLE v13; // rdi
  HANDLE v14; // rax
  const char *v15; // r9
  void *v16; // rdi
  HANDLE v17; // rbx
  HANDLE v18; // rax
  void *v19; // rdx
  const char *v20; // r9
  wil::details *v21; // rcx
  unsigned int v22; // ebx
  unsigned int LastError; // eax
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-40h]
  HANDLE v26; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v27; // [rsp+48h] [rbp-18h] BYREF
  HANDLE TargetHandle[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v30; // [rsp+98h] [rbp+38h] BYREF

  v30 = a2;
  if ( a3 != 3 )
    return 2147942487LL;
  v6 = this + 7;
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  AcquireSRWLockShared(this + 7);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::lower_bound(
    &this[17],
    TargetHandle,
    &v30);
  v7 = TargetHandle[0];
  if ( TargetHandle[0] == this[18].Ptr )
  {
    v22 = -2140667901;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)0x80680003LL,
      dwDesiredAccess);
  }
  else
  {
    TargetHandle[0] = 0LL;
    v8 = (void *)v7[9];
    CurrentProcess = GetCurrentProcess();
    v10 = GetCurrentProcess();
    if ( DuplicateHandle(v10, v8, CurrentProcess, TargetHandle, 0, 0, 2u) )
    {
      v27 = 0LL;
      v12 = (void *)v7[10];
      v13 = GetCurrentProcess();
      v14 = GetCurrentProcess();
      if ( DuplicateHandle(v14, v12, v13, &v27, 0, 0, 2u) )
      {
        v26 = 0LL;
        v16 = (void *)v7[11];
        v17 = GetCurrentProcess();
        v18 = GetCurrentProcess();
        if ( DuplicateHandle(v18, v16, v17, &v26, 0, 0, 2u) )
        {
          v21 = 0LL;
          a4[1] = v27;
          v22 = 0;
          *a4 = TargetHandle[0];
          a4[2] = v26;
          v27 = 0LL;
          TargetHandle[0] = 0LL;
          v26 = 0LL;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x27D,
                        (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                        v20);
          v21 = (wil::details *)v26;
          v22 = LastError;
        }
        if ( v21 )
          wil::details::CloseHandle(v21, v19);
      }
      else
      {
        v22 = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x27A,
                (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                v15);
      }
      if ( v27 )
        wil::details::CloseHandle((wil::details *)v27, v19);
    }
    else
    {
      v22 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x277,
              (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              v11);
    }
    if ( TargetHandle[0] )
      wil::details::CloseHandle((wil::details *)TargetHandle[0], v19);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v22;
}
