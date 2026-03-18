/*
 * XREFs of PiDmaGuardQueueFlush @ 0x1406D4598
 * Callers:
 *     PipDmgConsoleUnlockCallback @ 0x1406C3110 (PipDmgConsoleUnlockCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall PiDmaGuardQueueFlush(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  while ( 1 )
  {
    v3 = (_QWORD *)PipDgqListHead;
    if ( (__int64 *)PipDgqListHead == &PipDgqListHead )
      break;
    if ( *(__int64 **)(PipDgqListHead + 8) != &PipDgqListHead
      || (v4 = *(_QWORD *)PipDgqListHead, *(_QWORD *)(*(_QWORD *)PipDgqListHead + 8LL) != PipDgqListHead) )
    {
      __fastfail(3u);
    }
    PipDgqListHead = *(_QWORD *)PipDgqListHead;
    *(_QWORD *)(v4 + 8) = &PipDgqListHead;
    v5 = *(_QWORD **)(a1 + 8);
    if ( *v5 != a1 )
      __fastfail(3u);
    *v3 = a1;
    v3[1] = v5;
    *v5 = v3;
    *(_QWORD *)(a1 + 8) = v3;
  }
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
