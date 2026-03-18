/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x140163A7C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x14048BCBC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx

  KeWaitForSingleObject(&byte_140367E68, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140367E88);
  v1 = qword_140367E58;
  v2 = v0;
  v3 = *(_QWORD *)qword_140367E58;
  if ( *(__int64 **)(qword_140367E58 + 8) != &qword_140367E58 || *(_QWORD *)(v3 + 8) != qword_140367E58 )
    __fastfail(3u);
  qword_140367E58 = *(_QWORD *)qword_140367E58;
  *(_QWORD *)(v3 + 8) = &qword_140367E58;
  KxReleaseSpinLock(&qword_140367E88);
  __writecr8(v2);
  return v1;
}
