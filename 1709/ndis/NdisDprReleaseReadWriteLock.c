/*
 * XREFs of NdisDprReleaseReadWriteLock @ 0x1C005A850
 * Callers:
 *     <none>
 * Callees:
 *     ndisReleaseReadWriteLockX @ 0x1C005B4AC (ndisReleaseReadWriteLockX.c)
 */

void __stdcall NdisDprReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  char v2; // r8

  v2 = 1;
  ndisReleaseReadWriteLockX(Lock, LockState, v2);
}
