/*
 * XREFs of NdisDprAcquireReadWriteLock @ 0x1C005A810
 * Callers:
 *     <none>
 * Callees:
 *     ndisAcquireReadWriteLockX @ 0x1C005B198 (ndisAcquireReadWriteLockX.c)
 */

void __stdcall NdisDprAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock);
}
