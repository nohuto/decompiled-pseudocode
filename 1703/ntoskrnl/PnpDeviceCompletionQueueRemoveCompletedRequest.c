/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400680DC
 * Callers:
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  KIRQL v5; // di
  _QWORD *v6; // rdx

  KeWaitForSingleObject(&byte_140367E68, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140367E88);
  v4 = *a2;
  v5 = v3;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  KxReleaseSpinLock(&qword_140367E88);
  __writecr8(v5);
  return a2;
}
