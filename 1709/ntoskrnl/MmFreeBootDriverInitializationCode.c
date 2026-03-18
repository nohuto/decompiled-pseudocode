/*
 * XREFs of MmFreeBootDriverInitializationCode @ 0x1405B7FF8
 * Callers:
 *     Phase1Initialization @ 0x1405B7F90 (Phase1Initialization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     MiFreeDriverInitialization @ 0x14058F310 (MiFreeDriverInitialization.c)
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
