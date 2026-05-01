/*
 * XREFs of ?HampDepGroupFindHostDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_HOST_DEPENDENCY_ID@@@Z @ 0x180044A0C
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z @ 0x180044EB0 (-HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z.c)
 * Callees:
 *     ?HampDepGroupCompareHostDependencyForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180044694 (-HampDepGroupCompareHostDependencyForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *__fastcall HampDepGroupFindHostDependency(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_HOST_DEPENDENCY_ID *a2)
{
  unsigned __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rax

  v3 = *((_QWORD *)a1 + 8);
  v4 = *((_BYTE *)a1 + 72) & 1;
  if ( !v3 )
    return 0LL;
  do
  {
    v5 = HampDepGroupCompareHostDependencyForRbTree((unsigned __int64 *)a2, (struct _RTL_BALANCED_NODE *)v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v3;
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  while ( v3 );
  if ( v3 )
    return (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *)(v3 - 56);
  else
    return 0LL;
}
