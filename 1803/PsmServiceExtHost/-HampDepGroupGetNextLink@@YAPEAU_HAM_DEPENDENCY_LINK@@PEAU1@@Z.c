/*
 * XREFs of ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800322CC
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@@Z @ 0x180016CE0 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B120 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CC40 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066C54 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180066D44 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_DEPENDENCY_LINK *__fastcall HampDepGroupGetNextLink(struct _HAM_DEPENDENCY_LINK *a1)
{
  unsigned __int64 v1; // rdx
  __int64 i; // rdx
  struct _HAM_DEPENDENCY_LINK *v4; // rcx

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 )
  {
    v4 = *(struct _HAM_DEPENDENCY_LINK **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v4;
        v4 = *(struct _HAM_DEPENDENCY_LINK **)v4;
      }
      while ( v4 );
    }
  }
  else
  {
    for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(struct _HAM_DEPENDENCY_LINK **)v1 == a1 )
        break;
      a1 = (struct _HAM_DEPENDENCY_LINK *)v1;
    }
  }
  return (struct _HAM_DEPENDENCY_LINK *)v1;
}
