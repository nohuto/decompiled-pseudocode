/*
 * XREFs of ?HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002BA94
 * Callers:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180029FD0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002A038 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampManagerRemoveDependencyGroup(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_DEPENDENCY_GROUP *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rbx

  HampManagerAcquireLockExclusive(a1);
  v5 = (_QWORD *)((char *)a2 + 40);
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = --*((_QWORD *)a1 + 31);
  HampManagerReleaseLockExclusive(a1, v4);
  if ( !v8 )
    RtlWakeAddressAll((char *)a1 + 248);
}
