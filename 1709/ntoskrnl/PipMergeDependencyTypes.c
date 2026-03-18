/*
 * XREFs of PipMergeDependencyTypes @ 0x1401FDEC4
 * Callers:
 *     PipAddRequestToEdge @ 0x1406BE7C0 (PipAddRequestToEdge.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
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
