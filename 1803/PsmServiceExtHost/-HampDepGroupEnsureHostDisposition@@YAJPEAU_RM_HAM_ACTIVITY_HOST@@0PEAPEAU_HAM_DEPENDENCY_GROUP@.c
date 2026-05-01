/*
 * XREFs of ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026FF0
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BAB8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180027124 (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18002715C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800294B8 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180029578 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180067264 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupEnsureHostDisposition(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  struct _HAM_DEPENDENCY_GROUP *v3; // rbx
  int v7; // r14d
  int DepGroupDisposition; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  struct _HAM_DEPENDENCY_GROUP *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  v7 = 1;
  HampHostAcquireTwoLocksExclusive(a1, a2);
  do
  {
    DepGroupDisposition = HampHostGetDepGroupDisposition(a1, a2);
    if ( DepGroupDisposition )
    {
      v11 = DepGroupDisposition - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            v14 = -1073741823;
            goto LABEL_10;
          }
          v13 = HampDepGroupTryMerge(v10, v9, &v16);
        }
        else
        {
          v13 = HampDepGroupTryAddToExisting(v10, v9, &v16);
        }
      }
      else
      {
        v13 = HampDepGroupCreate(
                (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 93) + 88LL)
                                                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                          - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                                             - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                                - 152),
                a1,
                a2,
                &v16);
      }
      v3 = v16;
      v14 = v13;
    }
    else
    {
      v3 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v3 + 12) <= 1 )
        __fastfail(0xEu);
      v16 = v3;
      HampHostReleaseLockExclusiveEx(a1);
      HampHostReleaseLockExclusiveEx(a2);
      v7 = 0;
      HampDepGroupWaitEnterStateChange(v3);
      v14 = 0;
    }
  }
  while ( v14 == -1073741267 );
  if ( v14 >= 0 )
  {
    *a3 = v3;
    v3 = 0LL;
  }
LABEL_10:
  if ( v7 )
  {
    HampHostReleaseLockExclusiveEx(a1);
    HampHostReleaseLockExclusiveEx(a2);
  }
  if ( v3 )
    HampDepGroupDereference(v3);
  return (unsigned int)v14;
}
