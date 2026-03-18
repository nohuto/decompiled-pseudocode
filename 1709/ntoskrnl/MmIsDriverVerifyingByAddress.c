/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x14059DC50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rsi
  LOGICAL v3; // edi
  PVOID *v4; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1);
  if ( !v4 || ((_DWORD)v4[13] & 0x2000000) == 0 )
    v3 = 0;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
