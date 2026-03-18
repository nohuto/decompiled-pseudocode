/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x1406275F8
 * Callers:
 *     Phase1Initialization @ 0x140627590 (Phase1Initialization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     MiFreeDriverInitialization @ 0x1405F845C (MiFreeDriverInitialization.c)
 */

_QWORD *MmFreeBootDriverInitializationCode()
{
  struct _KTHREAD *Lock; // rdi
  PVOID *i; // rbx

  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      MiFreeDriverInitialization((__int64)i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  return MmReleaseLoadLock((__int64)Lock);
}
