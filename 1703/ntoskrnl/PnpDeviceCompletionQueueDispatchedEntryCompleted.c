/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140080F4C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140080E60 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r9
  __int64 v5; // rdx
  KIRQL v6; // di
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 result; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140367E88);
  v5 = *a2;
  v6 = v3;
  v7 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v7 != a2 )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  v8 = (_QWORD *)qword_140367E60;
  --dword_140367E50;
  if ( *(__int64 **)qword_140367E60 != &qword_140367E58 )
    __fastfail(3u);
  a2[1] = qword_140367E60;
  *a2 = &qword_140367E58;
  *v8 = a2;
  qword_140367E60 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_140367E68, 0, 1, v4, 0);
  KxReleaseSpinLock(&qword_140367E88);
  result = v6;
  __writecr8(v6);
  return result;
}
