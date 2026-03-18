/*
 * XREFs of PipFreeDependencyEdge @ 0x14023A6FC
 * Callers:
 *     PipDeleteAllDependencyRelations @ 0x14064F6FC (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x140723C40 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PipDereferenceDependencyNode @ 0x14063BAD0 (PipDereferenceDependencyNode.c)
 *     PipFreeBindingRequestEntry @ 0x140723B9C (PipFreeBindingRequestEntry.c)
 *     PipNotifyDependenciesChanged @ 0x140723E28 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipFreeDependencyEdge(_DWORD *P, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  KIRQL v7; // di
  _QWORD *v8; // rdx
  PVOID *v9; // r8
  _DWORD **v10; // r8
  PVOID *v11; // rdx

  v3 = (_QWORD **)(P + 14);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
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
