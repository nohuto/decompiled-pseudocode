/*
 * XREFs of MiAcquireNonPagedResources @ 0x1400CF9DC
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1400CF880 (MiCreateUltraThreadContextHelper.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiAllocateProcessShadow @ 0x14043CF0C (MiAllocateProcessShadow.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406EDB48 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)MiChargeCommit((__int64)a1, a2, 0LL, a4) )
  {
    if ( (unsigned int)MiChargeResident(a1, a2) )
      return 1LL;
    MiReturnCommit((__int64)a1, a2);
  }
  return 0LL;
}
