/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x14023DE00
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1405C89E0 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PipDgqFreeEntry @ 0x14073DE08 (PipDgqFreeEntry.c)
 */

_QWORD *__fastcall PiDmaGuardQueueRemoveEntry(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rcx
  PVOID *v4; // rax
  PVOID **v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (PVOID *)PipDgqListHead;
  if ( PipDgqListHead != &PipDgqListHead )
  {
    while ( 1 )
    {
      v4 = (PVOID *)*v3;
      if ( v3[2] == a1 )
        break;
      v3 = (PVOID *)*v3;
      if ( v4 == &PipDgqListHead )
        goto LABEL_4;
    }
    if ( v4[1] != v3 || (v6 = (PVOID **)v3[1], *v6 != v3) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    PipDgqFreeEntry(v3);
  }
LABEL_4:
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
