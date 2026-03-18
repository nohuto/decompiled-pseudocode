/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140146800
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1401466F0 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
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

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403C72C8);
  v5 = *a2;
  v6 = v3;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v7 = (_QWORD *)a2[1], (_QWORD *)*v7 != a2) )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  v8 = (_QWORD *)qword_1403C72A0;
  --dword_1403C7290;
  if ( *(__int64 **)qword_1403C72A0 != &qword_1403C7298 )
    __fastfail(3u);
  a2[1] = qword_1403C72A0;
  *a2 = &qword_1403C7298;
  *v8 = a2;
  qword_1403C72A0 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_1403C72A8, 0, 1, v4, 0);
  KxReleaseSpinLock(&qword_1403C72C8);
  result = v6;
  __writecr8(v6);
  return result;
}
