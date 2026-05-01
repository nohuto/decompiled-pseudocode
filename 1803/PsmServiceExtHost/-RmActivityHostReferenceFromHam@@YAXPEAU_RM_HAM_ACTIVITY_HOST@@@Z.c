/*
 * XREFs of ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003231C
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmActivityHostReferenceFromHam(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
    __fastfail(0xEu);
}
