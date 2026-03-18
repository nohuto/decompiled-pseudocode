/*
 * XREFs of IopErrorLogGetEntry @ 0x14012C0A8
 * Callers:
 *     IopErrorLogThread @ 0x140594B30 (IopErrorLogThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopErrorLogGetEntry()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v4; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v1 = IopErrorLogListHead;
  v2 = v0;
  if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
  {
    v1 = 0LL;
    IopErrorLogSessionPending = 0;
  }
  else
  {
    v4 = *(_QWORD *)IopErrorLogListHead;
    if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead || *(_QWORD *)(v4 + 8) != IopErrorLogListHead )
      __fastfail(3u);
    IopErrorLogListHead = *(_QWORD *)IopErrorLogListHead;
    *(_QWORD *)(v4 + 8) = &IopErrorLogListHead;
  }
  KxReleaseSpinLock(&IopErrorLogLock);
  __writecr8(v2);
  return v1;
}
