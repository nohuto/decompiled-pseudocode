/*
 * XREFs of DequeueAndReadyContext @ 0x1C004EB74
 * Callers:
 *     WriteCookAccess @ 0x1C004DB30 (WriteCookAccess.c)
 *     SignalASLEvent @ 0x1C004EFE0 (SignalASLEvent.c)
 *     ParseRelease @ 0x1C0056060 (ParseRelease.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0002838 (InsertReadyQueue.c)
 */

_QWORD *__fastcall DequeueAndReadyContext(_QWORD **a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v3 = *a1;
  if ( *a1 != a1 )
  {
    if ( (_QWORD **)v3[1] != a1 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *a1 = v4;
    v2 = v3 - 4;
    v4[1] = a1;
    v3[1] = v3;
    *v3 = v3;
    InsertReadyQueue((__int64)(v3 - 4), 1);
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
  return v2;
}
