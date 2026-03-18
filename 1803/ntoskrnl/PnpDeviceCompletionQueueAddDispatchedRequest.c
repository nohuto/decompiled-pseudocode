/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140146D3C
 * Callers:
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1405D5A08 (PnpStartDeviceNode.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  KIRQL v5; // si
  BOOL v6; // edi

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403C72C8);
  v4 = (_QWORD *)qword_1403C7288;
  v5 = v3;
  v6 = PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(__int64 **)qword_1403C7288 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  a2[1] = qword_1403C7288;
  *a2 = &PnpDeviceCompletionQueue;
  *v4 = a2;
  ++dword_1403C7290;
  qword_1403C7288 = (__int64)a2;
  KxReleaseSpinLock(&qword_1403C72C8);
  __writecr8(v5);
  return v6;
}
