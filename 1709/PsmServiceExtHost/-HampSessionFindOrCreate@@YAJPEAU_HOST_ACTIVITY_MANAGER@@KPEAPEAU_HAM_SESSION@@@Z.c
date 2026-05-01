/*
 * XREFs of ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180049030
 * Callers:
 *     ?HampPkgCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800466A0 (-HampPkgCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180048F00 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     CemRcTableFind @ 0x1800493B8 (CemRcTableFind.c)
 *     CemRcTableFindOrInsertEx @ 0x18004947C (CemRcTableFindOrInsertEx.c)
 */

__int64 __fastcall HampSessionFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        struct _HAM_SESSION **a3)
{
  int v3; // r14d
  struct _HAM_SESSION *v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _HAM_SESSION *v14; // rdi
  struct _HAM_SESSION *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v3 = (_DWORD)a1 + 80;
  v8 = (struct _HAM_SESSION *)CemRcTableFind((char *)a1 + 80, a2, HampSessionCompareById);
  if ( v8 )
  {
    *a3 = v8;
    return 0;
  }
  else
  {
    v10 = HampSessionCreate(a1, a2, &v16);
    v14 = v16;
    v9 = v10;
    if ( v10 >= 0 )
    {
      CemRcTableFindOrInsertEx(v3, a2, (unsigned int)HampSessionCompareById, (_DWORD)v16);
      v9 = 0;
      if ( v16 == v14 )
      {
        *a3 = v14;
        return v9;
      }
      *a3 = v16;
    }
    if ( v14 )
      CemRcObjectDereference(v14, v11, v12, v13);
  }
  return v9;
}
