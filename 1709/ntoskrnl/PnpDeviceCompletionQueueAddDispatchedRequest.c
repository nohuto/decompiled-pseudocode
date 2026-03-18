/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x1400FCB48
 * Callers:
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  __int64 *v5; // rsi
  KIRQL v6; // di

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140383E68);
  v4 = (_QWORD *)qword_140383E28;
  v5 = (__int64 *)PnpDeviceCompletionQueue;
  v6 = v3;
  if ( *(__int64 **)qword_140383E28 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  a2[1] = qword_140383E28;
  *a2 = &PnpDeviceCompletionQueue;
  *v4 = a2;
  ++dword_140383E30;
  qword_140383E28 = (__int64)a2;
  KxReleaseSpinLock(&qword_140383E68);
  __writecr8(v6);
  return v5 == &PnpDeviceCompletionQueue;
}
