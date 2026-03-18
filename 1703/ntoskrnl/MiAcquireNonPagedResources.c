/*
 * XREFs of MiAcquireNonPagedResources @ 0x14003CAA4
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiAllocateProcessShadow @ 0x14041D3DC (MiAllocateProcessShadow.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(__int64 a1, __int64 a2)
{
  if ( (unsigned int)MiChargeCommit(a1, a2, 0LL) )
  {
    if ( (unsigned int)MiChargeResident(a1, a2, 0LL) )
      return 1LL;
    MiReturnCommit(a1, a2);
  }
  return 0LL;
}
