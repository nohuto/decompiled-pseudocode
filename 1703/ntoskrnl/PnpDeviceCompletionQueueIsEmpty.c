/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x14004F750
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x14048BCBC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // di

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140367E88);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140367E58 == (_QWORD)&qword_140367E58;
  KxReleaseSpinLock(&qword_140367E88);
  __writecr8(v1);
  return v0;
}
