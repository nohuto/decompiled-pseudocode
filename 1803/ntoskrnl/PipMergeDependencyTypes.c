/*
 * XREFs of PipMergeDependencyTypes @ 0x14023A7FC
 * Callers:
 *     PipAddRequestToEdge @ 0x14072382C (PipAddRequestToEdge.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PipMergeDependencyTypes(__int64 a1, int a2)
{
  KIRQL v4; // al
  unsigned __int64 v5; // rbx

  v4 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  *(_DWORD *)(a1 + 48) |= a2;
  v5 = v4;
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  __writecr8(v5);
}
