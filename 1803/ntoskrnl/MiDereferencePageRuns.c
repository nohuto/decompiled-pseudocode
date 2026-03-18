/*
 * XREFs of MiDereferencePageRuns @ 0x14014C808
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1405E72E8 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14064BF78 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14074BD00 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x140757E44 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x1400C4510 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}
