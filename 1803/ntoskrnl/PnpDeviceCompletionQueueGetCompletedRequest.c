/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x140182530
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1405CE2B8 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx

  KeWaitForSingleObject(&byte_1403C72A8, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1403C72C8);
  v1 = qword_1403C7298;
  v2 = v0;
  v3 = *(_QWORD *)qword_1403C7298;
  if ( *(__int64 **)(qword_1403C7298 + 8) != &qword_1403C7298 || *(_QWORD *)(v3 + 8) != qword_1403C7298 )
    __fastfail(3u);
  qword_1403C7298 = *(_QWORD *)qword_1403C7298;
  *(_QWORD *)(v3 + 8) = &qword_1403C7298;
  KxReleaseSpinLock(&qword_1403C72C8);
  __writecr8(v2);
  return v1;
}
