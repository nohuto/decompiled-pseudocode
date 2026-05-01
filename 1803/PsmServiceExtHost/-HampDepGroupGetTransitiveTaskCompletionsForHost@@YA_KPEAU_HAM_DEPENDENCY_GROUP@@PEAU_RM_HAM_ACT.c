/*
 * XREFs of ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066DD0
 * Callers:
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800650B8 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180005348 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066C54 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180066DA0 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x180068BFC (-HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z.c)
 */

__int64 __fastcall HampDepGroupGetTransitiveTaskCompletionsForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  _QWORD *v2; // r11
  __int64 v4; // rbx
  __int64 AppliedTaskCompletions; // rax
  _QWORD *v6; // r11
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  struct _RTL_BALANCED_NODE **FirstDependencyForHost; // rax
  struct _RTL_BALANCED_NODE **v10; // r8
  struct _RTL_BALANCED_NODE *v11; // rcx
  int v12; // eax
  struct _RTL_BALANCED_NODE *v13; // r11
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)((char *)a2 + 720);
  v16[1] = (char *)a2 + 720;
  *((_QWORD *)a2 + 90) = v16;
  *((_QWORD *)a2 + 91) = v16;
  *((_DWORD *)a2 + 184) |= 2u;
  v4 = 0LL;
  v16[0] = (char *)a2 + 720;
  while ( v2 != v16 )
  {
    AppliedTaskCompletions = HampHostGetAppliedTaskCompletions((struct _RM_HAM_ACTIVITY_HOST *)(v2 - 90));
    v7 = *v6;
    v4 |= AppliedTaskCompletions;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    v6[1] = 0LL;
    FirstDependencyForHost = HampDepGroupFindFirstDependencyForHost(a1, (struct _RM_HAM_ACTIVITY_HOST *)(v6 - 90));
    v2 = (_QWORD *)v16[0];
    while ( 1 )
    {
      v10 = FirstDependencyForHost;
      if ( !FirstDependencyForHost )
        break;
      if ( *((_BYTE *)FirstDependencyForHost + 40) == 3
        && !HampTerminateDepShouldInvalidate((struct _HAM_TERMINATE_DEPENDENCY *)FirstDependencyForHost) )
      {
        v11 = v10[7];
        v12 = (int)v11[30].16;
        if ( (v12 & 2) == 0 )
        {
          v13 = v11 + 30;
          *(_DWORD *)&v11[30].16 = v12 | 2;
          v14 = v16[0];
          if ( *(_QWORD **)(v16[0] + 8LL) != v16 )
            __fastfail(3u);
          v13->Children[0] = (struct _RTL_BALANCED_NODE *)v16[0];
          v11[30].Children[1] = (struct _RTL_BALANCED_NODE *)v16;
          *(_QWORD *)(v14 + 8) = v13;
          v16[0] = v11 + 30;
        }
      }
      FirstDependencyForHost = (struct _RTL_BALANCED_NODE **)HampDepGroupGetNextDependencyForHost((struct _HAM_HOST_DEPENDENCY *)v10);
    }
  }
  return v4;
}
