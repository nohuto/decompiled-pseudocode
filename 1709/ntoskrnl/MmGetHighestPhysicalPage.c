/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1401167C8
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140432438 (PopBuildMemoryImageHeader.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14043DC30 (PfpCopyUserPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     PopPreallocateHibernateMemory @ 0x1406FBE3C (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * a1) + 5768LL);
}
