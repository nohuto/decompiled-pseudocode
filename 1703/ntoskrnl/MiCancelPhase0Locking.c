/*
 * XREFs of MiCancelPhase0Locking @ 0x1404B2F94
 * Callers:
 *     MmResetDriverPaging @ 0x1404B2340 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x1404B24D0 (MmPageEntireDriver.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableSections @ 0x140803B20 (MiLockPagableSections.c)
 */

__int64 __fastcall MiCancelPhase0Locking(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
    if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
    {
      MiLockPagableSections(a1, 0LL);
      *(_DWORD *)(a1 + 104) &= ~0x400000u;
    }
    ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
