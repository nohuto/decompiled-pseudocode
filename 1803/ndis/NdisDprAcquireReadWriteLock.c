/*
 * XREFs of NdisDprAcquireReadWriteLock @ 0x1C005B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisAcquireReadWriteLockX @ 0x1C0021CD8 (ndisAcquireReadWriteLockX.c)
 */

void __stdcall NdisDprAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock, fWrite, (__int64)LockState, 1);
}
