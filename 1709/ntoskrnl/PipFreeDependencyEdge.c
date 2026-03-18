/*
 * XREFs of PipFreeDependencyEdge @ 0x1401FDDC4
 * Callers:
 *     PipDeleteAllDependencyRelations @ 0x1406BEAEC (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1406BEE64 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PipDereferenceDependencyNode @ 0x1405D2398 (PipDereferenceDependencyNode.c)
 *     PipFreeBindingRequestEntry @ 0x1406BEDC0 (PipFreeBindingRequestEntry.c)
 *     PipNotifyDependenciesChanged @ 0x1406BF034 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipFreeDependencyEdge(_DWORD *P, __int64 a2)
{
  char *v3; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  KIRQL v7; // di
  _QWORD *v8; // rdx
  PVOID *v9; // r8
  _DWORD **v10; // r8
  PVOID *v11; // rdx

  v3 = (char *)(P + 14);
  while ( *(char **)v3 != v3 )
  {
    v5 = *(__int64 **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = *v5, *(__int64 **)(*v5 + 8) != v5) )
      __fastfail(3u);
    *(_QWORD *)v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
    PipFreeBindingRequestEntry(v5);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= P[12];
  v8 = *(_QWORD **)P;
  if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v9 = (PVOID *)*((_QWORD *)P + 1), *v9 != P) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  v10 = (_DWORD **)*((_QWORD *)P + 2);
  if ( v10[1] != P + 4 || (v11 = (PVOID *)*((_QWORD *)P + 3), *v11 != P + 4) )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = v11;
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  __writecr8(v7);
  PipNotifyDependenciesChanged(*((_QWORD *)P + 5), *((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 5));
  ExFreePoolWithTag(P, 0x53706E50u);
}
