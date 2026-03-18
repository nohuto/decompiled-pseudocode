/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x140200D2C
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x14055DC84 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PipDgqFreeEntry @ 0x1406D46A4 (PipDgqFreeEntry.c)
 */

_QWORD *__fastcall PiDmaGuardQueueRemoveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rcx
  __int64 *v5; // rax
  __int64 **v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  for ( i = (__int64 *)PipDgqListHead; i != &PipDgqListHead; i = (__int64 *)*i )
  {
    if ( i[2] == a1 )
    {
      v5 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) != i || (v6 = (__int64 **)i[1], *v6 != i) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
      PipDgqFreeEntry(i);
      break;
    }
  }
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
