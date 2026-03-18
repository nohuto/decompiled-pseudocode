/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400FBBE0
 * Callers:
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  KIRQL v5; // di
  _QWORD *v6; // rdx

  KeWaitForSingleObject(&byte_140383E48, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140383E68);
  v4 = *a2;
  v5 = v3;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  KxReleaseSpinLock(&qword_140383E68);
  __writecr8(v5);
  return a2;
}
