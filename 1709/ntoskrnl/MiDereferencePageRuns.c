/*
 * XREFs of MiDereferencePageRuns @ 0x14011CA7C
 * Callers:
 *     MmGetPhysicalMemoryRangesEx @ 0x140575470 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetNodeChannelRanges @ 0x1405E5E8C (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406E0DF8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 *     MiReleaseScrubPacket @ 0x1406EE968 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14011CA98 (MiDereferencePageRunsEx.c)
 */

__int64 __fastcall MiDereferencePageRuns(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiDereferencePageRunsEx(a1, 1LL, a3, a4);
}
