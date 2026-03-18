/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x140146628
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1405CE2B8 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // di

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_1403C72C8);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_1403C7298 == (_QWORD)&qword_1403C7298;
  KxReleaseSpinLock(&qword_1403C72C8);
  __writecr8(v1);
  return v0;
}
