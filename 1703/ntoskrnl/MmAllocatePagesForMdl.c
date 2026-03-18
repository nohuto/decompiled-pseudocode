/*
 * XREFs of MmAllocatePagesForMdl @ 0x1401663B0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 */

PMDL __stdcall MmAllocatePagesForMdl(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  return (PMDL)MiAllocatePagesForMdl(
                 (__int64)&MiSystemPartition,
                 LowAddress.QuadPart,
                 HighAddress.QuadPart,
                 SkipBytes.QuadPart,
                 TotalBytes,
                 3,
                 *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL),
                 0);
}
