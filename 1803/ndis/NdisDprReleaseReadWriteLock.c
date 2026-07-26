/*
 * XREFs of NdisDprReleaseReadWriteLock @ 0x1C005B1E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReleaseReadWriteLockX @ 0x1C0024FD8 (ndisReleaseReadWriteLockX.c)
 */

void __stdcall NdisDprReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  ndisReleaseReadWriteLockX(&Lock->SpinLock, (__int64)LockState, 1);
}
