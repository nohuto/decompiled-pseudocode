/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1401063D0
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140477074 (PopBuildMemoryImageHeader.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1405B10A0 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1406251EC (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * a1) + 6856LL);
}
