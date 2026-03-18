/*
 * XREFs of IopAcquireFastLock_0 @ 0x140024220
 * Callers:
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     NtUnlockFile @ 0x14056D1B0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     NtSetVolumeInformationFile @ 0x1405E06C0 (NtSetVolumeInformationFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall IopAcquireFastLock_0(volatile __int32 *a1)
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
