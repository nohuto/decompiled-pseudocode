/*
 * XREFs of MiAcquireNonPagedResources @ 0x14013A8EC
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x14013A78C (MiCreateUltraThreadContextHelper.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140756FD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG_PTR *a1, unsigned __int64 a2)
{
  __int64 v4; // r9

  if ( (unsigned int)MiChargeCommit((__int64)a1, a2, 0) )
  {
    if ( (unsigned int)MiChargeResident(a1, a2, 0LL, v4) )
      return 1LL;
    MiReturnCommit((__int64)a1, a2);
  }
  return 0LL;
}
