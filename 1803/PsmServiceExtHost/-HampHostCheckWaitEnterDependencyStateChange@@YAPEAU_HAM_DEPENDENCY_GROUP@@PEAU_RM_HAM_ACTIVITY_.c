/*
 * XREFs of ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180004EB0
 * Callers:
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800114F0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800650B8 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BAB8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

struct _HAM_DEPENDENCY_GROUP *__fastcall HampHostCheckWaitEnterDependencyStateChange(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned int a2)
{
  __int64 i; // rbx
  unsigned int v4; // edx

  for ( i = *((_QWORD *)a1 + 83); i; i = *((_QWORD *)a1 + 83) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 96)) <= 1 )
      __fastfail(0xEu);
    HampHostReleaseLockExclusiveEx(a1, a2);
    HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)i);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)i);
    HampHostAcquireLockExclusiveEx(a1, 0);
    if ( *((_QWORD *)a1 + 83) == i )
      break;
    HampHostReleaseLockExclusiveEx(a1, v4);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)i);
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  return (struct _HAM_DEPENDENCY_GROUP *)i;
}
