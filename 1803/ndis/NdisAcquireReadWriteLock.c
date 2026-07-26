/*
 * XREFs of NdisAcquireReadWriteLock @ 0x1C0021CC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisAcquireReadWriteLockX @ 0x1C0021CD8 (ndisAcquireReadWriteLockX.c)
 */

void __stdcall NdisAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock);
}
