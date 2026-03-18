/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x1400DF6E8
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140527C7C (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // di

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140383E68);
  if ( (__int64 *)PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140383E38 == (_QWORD)&qword_140383E38;
  KxReleaseSpinLock(&qword_140383E68);
  __writecr8(v1);
  return v0;
}
