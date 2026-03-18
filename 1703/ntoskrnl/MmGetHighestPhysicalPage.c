/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1400DD8FC
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14040D080 (PopBuildMemoryImageHeader.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140520D70 (PfpCopyUserPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1405D9F4C (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * a1) + 5576LL);
}
