/*
 * XREFs of IopAcquireFastLock_3 @ 0x1402388DC
 * Callers:
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall IopAcquireFastLock_3(volatile __int32 *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(a1 + 29, 1) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0;
  }
  else
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    return 1;
  }
}
