/*
 * XREFs of ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066C54
 * Callers:
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066DD0 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800172A0 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800322CC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _RTL_BALANCED_NODE **__fastcall HampDepGroupFindFirstDependencyForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RTL_BALANCED_NODE *v2; // rbp
  struct _RTL_BALANCED_NODE *NextLink; // rbx
  int v4; // eax
  struct _RTL_BALANCED_NODE *v5; // rdi
  struct _RTL_BALANCED_NODE *v6; // rsi
  int v7; // eax
  struct _RTL_BALANCED_NODE **v8; // rcx
  struct _RTL_BALANCED_NODE *ParentValue; // rdx
  struct _RTL_BALANCED_NODE *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a2 - 4);
  NextLink = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 9);
  v11 = v2;
  while ( 1 )
  {
    if ( !NextLink )
      return 0LL;
    v4 = HampDepGroupCompareDependencyLinkForHost(&v11, NextLink);
    if ( !v4 )
      break;
    if ( v4 >= 0 )
      NextLink = NextLink->Children[1];
    else
      NextLink = NextLink->Children[0];
  }
  v5 = NextLink->Children[0];
  v6 = 0LL;
  if ( !NextLink->Children[0] )
    goto LABEL_17;
  do
  {
    v7 = HampDepGroupCompareDependencyLinkForHost(&v11, v5);
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
    NextLink = v6;
LABEL_17:
  while ( 1 )
  {
    v8 = 0LL;
    if ( NextLink[1].Children[0] != v2 )
      break;
    ParentValue = (struct _RTL_BALANCED_NODE *)NextLink[2].ParentValue;
    if ( ParentValue != (struct _RTL_BALANCED_NODE *)&NextLink[2].16 )
      v8 = &ParentValue[-1].Children[1];
    if ( v8 )
      break;
    NextLink = (struct _RTL_BALANCED_NODE *)HampDepGroupGetNextLink((struct _HAM_DEPENDENCY_LINK *)NextLink);
    if ( !NextLink )
      return 0LL;
  }
  return v8;
}
