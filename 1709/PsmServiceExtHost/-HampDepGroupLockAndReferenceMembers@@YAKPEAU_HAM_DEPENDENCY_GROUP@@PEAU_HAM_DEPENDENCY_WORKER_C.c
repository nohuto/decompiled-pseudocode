/*
 * XREFs of ?HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180044B28
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180040228 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040248 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilCompareHostIds@@YAJ_K0@Z @ 0x180042F60 (-HampUtilCompareHostIds@@YAJ_K0@Z.c)
 *     ?HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180044AC0 (-HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

__int64 __fastcall HampDepGroupLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v6; // rbp
  unsigned __int64 v7; // r12
  struct _RM_HAM_ACTIVITY_HOST *i; // rcx
  __int64 v9; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v10; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v11; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // r14
  struct _RM_HAM_ACTIVITY_HOST *v13; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v15; // r8
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx

  HampDepGroupAcquireLockExclusive(a1);
  v4 = *((_QWORD *)a1 + 16);
  v5 = 0;
  if ( !v4 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = -1LL;
    goto LABEL_4;
  }
  v6 = *(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 72);
  if ( !v6 )
    goto LABEL_3;
  v7 = *((_QWORD *)v6 - 5);
LABEL_4:
  for ( i = (struct _RM_HAM_ACTIVITY_HOST *)(((*((_QWORD *)a1 + 7) & 0xFFFFFFFFFFFFFFFEuLL) - 648) & -(__int64)((*((_QWORD *)a1 + 7) & 0xFFFFFFFFFFFFFFFEuLL) != 0));
        i;
        i = (struct _RM_HAM_ACTIVITY_HOST *)HampDepGroupGetNextHost((struct _RM_HAM_ACTIVITY_HOST *)v9) )
  {
    if ( (unsigned int)RmHamHostReferenceUnsafe(i) )
    {
      v10 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)a2 + 1);
      v11 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)(v9 + 672);
      if ( *v10 != a2 )
        __fastfail(3u);
      *(_QWORD *)v11 = a2;
      *(_QWORD *)(v9 + 680) = v10;
      *v10 = v11;
      *((_QWORD *)a2 + 1) = v11;
    }
  }
  HampDepGroupReleaseLockExclusive(a1);
  for ( j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2; j != a2; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
  {
    if ( v6 && !*((_QWORD *)a2 + 2) && (unsigned int)HampUtilCompareHostIds(v7, *((_QWORD *)j - 89) != 0LL) )
    {
      *((_QWORD *)a2 + 2) = RmHamHostReference(v6);
      HampHostAcquireLockExclusiveEx(v13, 1);
      *((_DWORD *)a2 + 8) |= 1u;
    }
    *((_DWORD *)j + 8) |= 1u;
    HampHostAcquireLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)j - 672), 1);
  }
  if ( v6 && !*((_QWORD *)a2 + 2) )
  {
    *((_QWORD *)a2 + 2) = RmHamHostReference(v6);
    HampHostAcquireLockExclusiveEx(v14, 1);
    *((_DWORD *)a2 + 8) |= 1u;
  }
  HampDepGroupAcquireLockExclusive(a1);
  v15 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2;
  NextHost = (struct _RM_HAM_ACTIVITY_HOST *)(((*((_QWORD *)a1 + 7) & 0xFFFFFFFFFFFFFFFEuLL) - 648) & -(__int64)((*((_QWORD *)a1 + 7) & 0xFFFFFFFFFFFFFFFEuLL) != 0));
  if ( NextHost )
  {
    while ( *((int *)NextHost - 11) < 0
         || v15 != a2 && (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v15 - 672) == NextHost )
    {
      NextHost = (struct _RM_HAM_ACTIVITY_HOST *)HampDepGroupGetNextHost(NextHost);
      if ( !NextHost )
        goto LABEL_27;
    }
    goto LABEL_32;
  }
LABEL_27:
  v17 = *((_QWORD *)a1 + 16);
  v18 = 0LL;
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 72);
  if ( *((_QWORD *)a2 + 2) != v18 )
  {
LABEL_32:
    HampDepGroupReleaseLockExclusive(a1);
    return v5;
  }
  *((_QWORD *)a2 + 3) = v17;
  return 1;
}
