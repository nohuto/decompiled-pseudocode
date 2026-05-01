/*
 * XREFs of ?HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180044AC0
 * Callers:
 *     ?HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180044B28 (-HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST **__fastcall HampDepGroupGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // rcx
  struct _RM_HAM_ACTIVITY_HOST **result; // rax
  struct _RM_HAM_ACTIVITY_HOST *i; // rcx
  struct _RM_HAM_ACTIVITY_HOST *j; // rax

  v1 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 648);
  result = (struct _RM_HAM_ACTIVITY_HOST **)*((_QWORD *)v1 + 1);
  if ( result )
  {
    for ( i = *result; i; i = *(struct _RM_HAM_ACTIVITY_HOST **)i )
      result = (struct _RM_HAM_ACTIVITY_HOST **)i;
  }
  else
  {
    for ( j = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v1 + 2); ; j = result[2] )
    {
      result = (struct _RM_HAM_ACTIVITY_HOST **)((unsigned __int64)j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !result || *result == v1 )
        break;
      v1 = (struct _RM_HAM_ACTIVITY_HOST *)result;
    }
  }
  if ( result )
    result -= 81;
  return result;
}
