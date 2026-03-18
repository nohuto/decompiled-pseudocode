/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x1405A8064
 * Callers:
 *     Phase1Initialization @ 0x1405A8000 (Phase1Initialization.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiFreeDriverInitialization @ 0x1404B1608 (MiFreeDriverInitialization.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 */

__int64 MmFreeBootDriverInitializationCode()
{
  struct _KTHREAD *Lock; // rdi
  PVOID *i; // rbx

  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      MiFreeDriverInitialization((__int64)i);
  }
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  return MmReleaseLoadLock((__int64)Lock);
}
