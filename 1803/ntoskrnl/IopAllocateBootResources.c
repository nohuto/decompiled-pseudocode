/*
 * XREFs of IopAllocateBootResources @ 0x140615F90
 * Callers:
 *     IopReportBootResources @ 0x1408982F0 (IopReportBootResources.c)
 *     IopAllocateLegacyBootResources @ 0x1408BF88C (IopAllocateLegacyBootResources.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     IopAllocateBootResourcesInternal @ 0x140616020 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  LODWORD(a3) = IopAllocateBootResourcesInternal(a1, a2, a3);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)a3;
}
