/*
 * XREFs of IopAcquireFastLock @ 0x140002094
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     NtUnlockFile @ 0x140557DC0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall IopAcquireFastLock(volatile __int32 *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(a1 + 29, 1) )
  {
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    return 0;
  }
  else
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    return 1;
  }
}
