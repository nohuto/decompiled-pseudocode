/*
 * XREFs of PipFreeDependencyEdge @ 0x1401F7C98
 * Callers:
 *     PipDeleteAllDependencyRelations @ 0x140692E3C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1406931B0 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDereferenceDependencyNode @ 0x1405BF2A8 (PipDereferenceDependencyNode.c)
 *     PipFreeBindingRequestEntry @ 0x140693110 (PipFreeBindingRequestEntry.c)
 *     PipNotifyDependenciesChanged @ 0x140693390 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipFreeDependencyEdge(char *a1, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 v5; // rax
  KIRQL v6; // di
  _QWORD *v7; // r8
  void **v8; // rdx
  char **v9; // r8
  void **v10; // rdx

  v3 = (__int64 **)(a1 + 56);
  while ( *v3 != (__int64 *)v3 )
  {
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != *v3 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    PipFreeBindingRequestEntry();
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= *((_DWORD *)a1 + 12);
  v7 = *(_QWORD **)a1;
  v8 = (void **)*((_QWORD *)a1 + 1);
  if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v8 != a1 )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  v9 = (char **)*((_QWORD *)a1 + 2);
  v10 = (void **)*((_QWORD *)a1 + 3);
  if ( v9[1] != a1 + 16 || *v10 != a1 + 16 )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = (char *)v10;
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  __writecr8(v6);
  PipNotifyDependenciesChanged(*((_QWORD *)a1 + 5), *((_QWORD *)a1 + 4));
  PipDereferenceDependencyNode(*((_QWORD *)a1 + 4));
  PipDereferenceDependencyNode(*((_QWORD *)a1 + 5));
  ExFreePoolWithTag(a1, 0x53706E50u);
}
