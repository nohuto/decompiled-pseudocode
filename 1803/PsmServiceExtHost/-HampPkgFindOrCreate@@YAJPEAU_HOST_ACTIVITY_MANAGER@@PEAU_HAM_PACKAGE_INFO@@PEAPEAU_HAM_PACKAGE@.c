/*
 * XREFs of ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18000B844
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180004408 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x18000B074 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 * Callees:
 *     ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x180008764 (-HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x18000B93C (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EEE0 (-HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000F02C (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180027880 (CemRcTableFindOrInsertEx.c)
 *     ?HampPkgCreate@@YAJPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180029954 (-HampPkgCreate@@YAJPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  struct _HAM_PACKAGE *v5; // rdi
  struct _HAM_PACKAGE *v6; // rbx
  int v7; // eax
  struct _HAM_USER *v8; // rbp
  int BackgroundAccessState; // esi
  struct _HAM_PACKAGE *v10; // rax
  int v12; // eax
  struct _HAM_PACKAGE *v13; // [rsp+68h] [rbp+10h] BYREF
  struct _HAM_USER *v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v7 = HampUserFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)((char *)a2 + 132), *((_DWORD *)a2 + 50), &v14);
  v8 = v14;
  BackgroundAccessState = v7;
  if ( v7 >= 0 )
  {
    v10 = HampPkgFindInUser(v14, a2);
    v6 = v10;
    if ( v10 )
    {
      *a3 = v10;
LABEL_4:
      v6 = 0LL;
      BackgroundAccessState = 0;
      goto LABEL_5;
    }
    v12 = HampPkgCreate(v8, a2, &v13);
    v5 = v13;
    BackgroundAccessState = v12;
    if ( v12 >= 0 )
    {
      CemRcTableFindOrInsertEx((_DWORD)v8 + 40, (_DWORD)v13 + 96, (unsigned int)HampPkgCompareByIdentity, (_DWORD)v13);
      v6 = v13;
      if ( v5 != v13 )
      {
        HampPkgWaitForInitializationComplete(v13);
        *a3 = v6;
        goto LABEL_4;
      }
      BackgroundAccessState = HampPkgQueryBackgroundAccessState(v5);
      if ( BackgroundAccessState >= 0 )
      {
        *a3 = v5;
        v5 = 0LL;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v6 )
    CemRcObjectDereference(v6);
  if ( v5 )
    CemRcObjectDereference(v5);
  return (unsigned int)BackgroundAccessState;
}
