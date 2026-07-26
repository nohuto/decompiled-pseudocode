/*
 * XREFs of NdisDprReleaseReadWriteLock @ 0x1C005AFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisDprReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  char v2; // r8

  v2 = 1;
  ndisReleaseReadWriteLockX(Lock, LockState, v2);
}
