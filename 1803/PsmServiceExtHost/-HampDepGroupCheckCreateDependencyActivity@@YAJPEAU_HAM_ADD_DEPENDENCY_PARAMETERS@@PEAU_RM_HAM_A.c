/*
 * XREFs of ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800409A0
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 */

__int64 __fastcall HampDepGroupCheckCreateDependencyActivity(
        struct _HAM_ADD_DEPENDENCY_PARAMETERS *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        unsigned int a3,
        struct _HAM_HOST_DEPENDENCY *a4)
{
  struct _HAM_ACTIVITY *v4; // rdi
  bool v5; // zf
  int v7; // eax
  int v8; // esi
  struct _HAM_ACTIVITY *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = *((_BYTE *)a4 + 40) == 3;
  v10 = 0LL;
  if ( !v5 )
  {
    v7 = HampActCreate(
           *((struct _HAM_CLIENT_CONTEXT **)a1 + 49),
           (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 93)
                                                                                              + 88LL)
                                                                                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                     - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                                        - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                           - 152),
           a2,
           (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)((char *)a1 + 8),
           a3,
           &v10);
    v4 = v10;
    v8 = v7;
    if ( v7 < 0 )
      goto LABEL_7;
    *((_QWORD *)v10 + 9) = a4;
    v5 = *((_BYTE *)a4 + 40) == 0;
    *(_QWORD *)a4 = v4;
    if ( v5 )
    {
      TpSetWait(*((_QWORD *)a4 + 10), *((_QWORD *)a4 + 8), 0LL);
      TpSetWait(*((_QWORD *)a4 + 11), *((_QWORD *)a4 + 9), 0LL);
    }
    *((_DWORD *)a4 + 8) |= 0x10u;
  }
  v8 = 0;
LABEL_7:
  if ( v4 )
  {
    if ( v8 < 0 )
      HampActClose(v4);
    CemRcObjectDereference(v4);
  }
  return (unsigned int)v8;
}
