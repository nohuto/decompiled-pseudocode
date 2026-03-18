/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x14012EA1C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140527C7C (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx

  KeWaitForSingleObject(&byte_140383E48, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140383E68);
  v1 = qword_140383E38;
  v2 = v0;
  v3 = *(_QWORD *)qword_140383E38;
  if ( *(__int64 **)(qword_140383E38 + 8) != &qword_140383E38 || *(_QWORD *)(v3 + 8) != qword_140383E38 )
    __fastfail(3u);
  qword_140383E38 = *(_QWORD *)qword_140383E38;
  *(_QWORD *)(v3 + 8) = &qword_140383E38;
  KxReleaseSpinLock(&qword_140383E68);
  __writecr8(v2);
  return v1;
}
