/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400FB99C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400FB8B0 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // rdx
  KIRQL v5; // di
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 result; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140383E68);
  v4 = *a2;
  v5 = v3;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = (_QWORD *)qword_140383E40;
  --dword_140383E30;
  if ( *(__int64 **)qword_140383E40 != &qword_140383E38 )
    __fastfail(3u);
  a2[1] = qword_140383E40;
  *a2 = &qword_140383E38;
  *v7 = a2;
  qword_140383E40 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_140383E48, 0, 1);
  KxReleaseSpinLock(&qword_140383E68);
  result = v5;
  __writecr8(v5);
  return result;
}
