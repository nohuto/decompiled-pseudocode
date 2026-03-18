/*
 * XREFs of IopAcquireFastLock @ 0x140022E54
 * Callers:
 *     NtUnlockFile @ 0x14043BA90 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 */

char __fastcall IopAcquireFastLock(volatile __int32 *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(a1 + 29, 1) )
  {
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    return 0;
  }
  else
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    return 1;
  }
}
