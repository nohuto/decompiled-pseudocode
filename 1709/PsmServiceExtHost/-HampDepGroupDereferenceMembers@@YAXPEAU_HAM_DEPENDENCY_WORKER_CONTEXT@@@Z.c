/*
 * XREFs of ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800446D8
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampDepGroupDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT *a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v2 = *((_QWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = (*(_QWORD *)(v2 + 576))-- == 1LL;
    if ( v3 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v2 - 64));
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
  while ( *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a1 != a1 )
  {
    v4 = *(_QWORD *)a1 - 672LL;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4, 0);
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v4, 0);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4);
    v5 = (_QWORD *)(v4 + 672);
    v6 = *(_QWORD *)(v4 + 672);
    if ( *(_QWORD *)(v6 + 8) != v4 + 672 || (v7 = *(_QWORD **)(v4 + 680), (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    *(_QWORD *)(v4 + 680) = 0LL;
    *(_DWORD *)(v4 + 704) = 0;
    v3 = (*(_QWORD *)(v4 + 576))-- == 1LL;
    if ( v3 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
  }
}
