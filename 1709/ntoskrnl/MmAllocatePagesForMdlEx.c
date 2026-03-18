/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x14011CC10
 * Callers:
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     PopGenerateMdl @ 0x140241BCC (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x140241C68 (PopGenerateScratchMdl.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140267D20 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ResFwGetContext @ 0x1407D3B2C (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocatePartitionNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL),
                 Flags,
                 0LL);
}
