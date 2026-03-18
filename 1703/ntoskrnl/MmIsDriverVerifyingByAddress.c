/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x1405CF250
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rsi
  LOGICAL v3; // edi
  PVOID *v4; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1);
  if ( !v4 || ((_DWORD)v4[13] & 0x2000000) == 0 )
    v3 = 0;
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
