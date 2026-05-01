/*
 * XREFs of ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004497C
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18004478C (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPEN.c)
 * Callees:
 *     ?HampDepGroupCompareHostDependencyForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180044684 (-HampDepGroupCompareHostDependencyForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *__fastcall HampDepGroupFindFirstDependencyForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RTL_BALANCED_NODE *v2; // rbx
  int v3; // eax
  struct _RTL_BALANCED_NODE *v5; // rdi
  struct _RTL_BALANCED_NODE *v6; // rsi
  int v7; // eax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 8);
  v8 = *((_QWORD *)a2 - 5);
  while ( 1 )
  {
    if ( !v2 )
      return 0LL;
    v3 = HampDepGroupCompareHostDependencyForHost(&v8, v2);
    if ( !v3 )
      break;
    if ( v3 >= 0 )
      v2 = v2->Children[1];
    else
      v2 = v2->Children[0];
  }
  v5 = v2->Children[0];
  v6 = 0LL;
  if ( !v2->Children[0] )
    return &v2[-3].16;
  do
  {
    v7 = HampDepGroupCompareHostDependencyForHost(&v8, v5);
    if ( v7 >= 0 )
    {
      if ( v7 > 0 )
      {
        v5 = v5->Children[1];
        continue;
      }
      v6 = v5;
    }
    v5 = v5->Children[0];
  }
  while ( v5 );
  if ( v6 )
    v2 = v6;
  return &v2[-3].16;
}
