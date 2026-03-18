/*
 * XREFs of PipCreateNewDependencyEdge @ 0x14023A5D8
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x14023A538 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PipAddRequestToEdge @ 0x14072382C (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x140723E28 (PipNotifyDependenciesChanged.c)
 *     PipReferenceDependencyNode @ 0x140723EA4 (PipReferenceDependencyNode.c)
 */

_QWORD *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  KIRQL v8; // bp
  _QWORD *v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x53706E50u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 12) = 0;
    PoolWithTag[5] = a1;
    PoolWithTag[4] = a2;
    PoolWithTag[8] = PoolWithTag + 7;
    PoolWithTag[7] = PoolWithTag + 7;
    *((_BYTE *)PoolWithTag + 72) = 0;
    if ( PipAddRequestToEdge(PoolWithTag, a3) )
    {
      PipReferenceDependencyNode(a1);
      PipReferenceDependencyNode(a2);
      v8 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
      v9 = *(_QWORD **)(a2 + 40);
      v10 = v7 + 2;
      if ( *v9 != a2 + 32 )
        __fastfail(3u);
      *v10 = a2 + 32;
      v7[3] = v9;
      *v9 = v10;
      *(_QWORD *)(a2 + 40) = v10;
      v11 = *(_QWORD **)(a1 + 24);
      if ( *v11 != a1 + 16 )
        __fastfail(3u);
      v7[1] = v11;
      *v7 = a1 + 16;
      *v11 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
      __writecr8(v8);
      PipNotifyDependenciesChanged(a1, a2);
    }
    else
    {
      ExFreePoolWithTag(v7, 0x53706E50u);
      return 0LL;
    }
  }
  return v7;
}
