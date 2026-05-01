/*
 * XREFs of ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x1801C6820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1801C6F74 (-find@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetViewEventHandle(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v4; // r14
  _QWORD *v8; // rbx
  int v9; // esi
  char *v10; // rsi
  DWORD v11; // edi
  char *v12; // rsi
  DWORD v13; // edi
  char *v14; // rsi
  DWORD LastError; // edi
  unsigned int v16; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v4 = a1 + 8;
  AcquireSRWLockExclusive(a1 + 8);
  std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::find(
    &a1[18],
    &v19,
    &v20);
  v8 = v19;
  if ( v19 != a1[19].Ptr )
  {
    if ( !a3 )
    {
      v14 = (char *)v19[9];
      if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v14);
        SetLastError(LastError);
      }
      v8[9] = a4;
      goto LABEL_14;
    }
    v9 = a3 - 1;
    if ( !v9 )
    {
      v12 = (char *)v19[10];
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v13 = GetLastError();
        CloseHandle(v12);
        SetLastError(v13);
      }
      v8[10] = a4;
      goto LABEL_14;
    }
    if ( v9 == 1 )
    {
      v10 = (char *)v19[11];
      if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v11 = GetLastError();
        CloseHandle(v10);
        SetLastError(v11);
      }
      v8[11] = a4;
LABEL_14:
      v16 = 0;
      goto LABEL_16;
    }
  }
  v16 = -2140667901;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25A,
    (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
    (const char *)0x80680003LL);
LABEL_16:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v16;
}
