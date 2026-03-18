/*
 * XREFs of PiDmaGuardQueueFlush @ 0x14073DCFC
 * Callers:
 *     PipDmgConsoleUnlockCallback @ 0x1407291F0 (PipDmgConsoleUnlockCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
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
    v3 = PipDgqListHead;
    if ( PipDgqListHead == &PipDgqListHead )
      break;
    if ( *((PVOID **)PipDgqListHead + 1) != &PipDgqListHead
      || (v4 = *(_QWORD *)PipDgqListHead, *(PVOID *)(*(_QWORD *)PipDgqListHead + 8LL) != PipDgqListHead) )
    {
      __fastfail(3u);
    }
    PipDgqListHead = *(PVOID *)PipDgqListHead;
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
