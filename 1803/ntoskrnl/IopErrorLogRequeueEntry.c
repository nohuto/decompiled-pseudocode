/*
 * XREFs of IopErrorLogRequeueEntry @ 0x1402390FC
 * Callers:
 *     IopErrorLogThread @ 0x1406000E0 (IopErrorLogThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopErrorLogRequeueEntry(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v3 = IopErrorLogListHead;
  v4 = v2;
  if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead )
    __fastfail(3u);
  *a1 = IopErrorLogListHead;
  a1[1] = &IopErrorLogListHead;
  *(_QWORD *)(v3 + 8) = a1;
  IopErrorLogListHead = (__int64)a1;
  ErrorLogSessionOpened = 0;
  KxReleaseSpinLock(&IopErrorLogLock);
  result = v4;
  __writecr8(v4);
  return result;
}
