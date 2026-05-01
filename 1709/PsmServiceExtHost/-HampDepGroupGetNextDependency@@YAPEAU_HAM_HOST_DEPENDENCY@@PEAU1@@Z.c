/*
 * XREFs of ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180044A7C
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18004478C (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPEN.c)
 *     ?HampDepGroupProcessActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044DE4 (-HampDepGroupProcessActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_HOST_DEPENDENCY **__fastcall HampDepGroupGetNextDependency(struct _HAM_HOST_DEPENDENCY *a1)
{
  struct _HAM_HOST_DEPENDENCY **result; // rax
  struct _HAM_HOST_DEPENDENCY *v2; // rcx
  struct _HAM_HOST_DEPENDENCY *i; // rcx
  struct _HAM_HOST_DEPENDENCY *j; // rax

  result = (struct _HAM_HOST_DEPENDENCY **)*((_QWORD *)a1 + 8);
  v2 = (struct _HAM_HOST_DEPENDENCY *)((char *)a1 + 56);
  if ( result )
  {
    for ( i = *result; i; i = *(struct _HAM_HOST_DEPENDENCY **)i )
      result = (struct _HAM_HOST_DEPENDENCY **)i;
  }
  else
  {
    for ( j = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)v2 + 2); ; j = result[2] )
    {
      result = (struct _HAM_HOST_DEPENDENCY **)((unsigned __int64)j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !result || *result == v2 )
        break;
      v2 = (struct _HAM_HOST_DEPENDENCY *)result;
    }
  }
  if ( result )
    result -= 7;
  return result;
}
