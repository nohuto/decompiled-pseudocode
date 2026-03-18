/*
 * XREFs of MiUnlockBootPageSections @ 0x14089C748
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MiLockPagableSections @ 0x14089C824 (MiLockPagableSections.c)
 */

_QWORD *MiUnlockBootPageSections()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  int v2; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = *((_DWORD *)i + 26);
    if ( (v2 & 0x400000) != 0 )
    {
      *((_DWORD *)i + 26) = v2 & 0xFFBFFFFF;
      MiLockPagableSections(i, 0LL);
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
