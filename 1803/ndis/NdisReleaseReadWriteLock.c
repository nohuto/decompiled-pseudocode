/*
 * XREFs of NdisReleaseReadWriteLock @ 0x1C0024FC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReleaseReadWriteLockX @ 0x1C0024FD8 (ndisReleaseReadWriteLockX.c)
 */

void __stdcall NdisReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  ndisReleaseReadWriteLockX(Lock, LockState, 0LL);
}
