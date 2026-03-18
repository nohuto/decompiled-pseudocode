/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x1400683B0
 * Callers:
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  __int64 *v5; // rsi
  KIRQL v6; // di

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140367E88);
  v4 = (_QWORD *)qword_140367E48;
  v5 = (__int64 *)PnpDeviceCompletionQueue;
  v6 = v3;
  if ( *(__int64 **)qword_140367E48 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  a2[1] = qword_140367E48;
  *a2 = &PnpDeviceCompletionQueue;
  *v4 = a2;
  ++dword_140367E50;
  qword_140367E48 = (__int64)a2;
  KxReleaseSpinLock(&qword_140367E88);
  __writecr8(v6);
  return v5 == &PnpDeviceCompletionQueue;
}
