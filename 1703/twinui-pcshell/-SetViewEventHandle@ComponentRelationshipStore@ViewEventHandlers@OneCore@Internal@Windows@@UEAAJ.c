/*
 * XREFs of ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x180179E10
 * Callers:
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801790D0 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18017A2A0 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetViewEventHandle(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        __int64 a4)
{
  _QWORD *v7; // rbx
  int v8; // esi
  char *v9; // rsi
  DWORD v10; // edi
  char *v11; // rsi
  DWORD v12; // edi
  char *v13; // rsi
  DWORD LastError; // edi
  unsigned int v15; // ebx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  wil::srwlock::lock_exclusive(a1 + 6, &SRWLock);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &a1[16],
    &v19,
    &v20);
  v7 = v19;
  if ( v19 != a1[17].Ptr )
  {
    if ( !a3 )
    {
      v13 = (char *)v19[8];
      if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v13);
        SetLastError(LastError);
      }
      v7[8] = a4;
      goto LABEL_14;
    }
    v8 = a3 - 1;
    if ( !v8 )
    {
      v11 = (char *)v19[9];
      if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v12 = GetLastError();
        CloseHandle(v11);
        SetLastError(v12);
      }
      v7[9] = a4;
      goto LABEL_14;
    }
    if ( v8 == 1 )
    {
      v9 = (char *)v19[10];
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v10 = GetLastError();
        CloseHandle(v9);
        SetLastError(v10);
      }
      v7[10] = a4;
LABEL_14:
      v15 = 0;
      goto LABEL_16;
    }
  }
  v15 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AF,
    (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
    (const char *)0x80070490LL);
LABEL_16:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v15;
}
