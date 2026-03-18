/*
 * XREFs of MmAcquireLoadLock @ 0x1405BC900
 * Callers:
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MiSessionUnloadAllImages @ 0x1405ED214 (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x1405F646C (MmBackSystemImageWithPagefile.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1405FA21C (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x140605910 (MmUnloadSystemImage.c)
 *     MmFreeBootDriverInitializationCode @ 0x1406275F8 (MmFreeBootDriverInitializationCode.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 *     MmAddVerifierSpecialThunks @ 0x14074B4B0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14074B5B0 (MmAddVerifierThunks.c)
 *     MmEnableVerifierForDriver @ 0x140812994 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140837854 (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14089C6CC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&Mutant, WrVirtualMemory, 0, 0, 0LL);
  return CurrentThread;
}
