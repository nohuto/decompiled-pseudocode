/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x140077240
 * Callers:
 *     PopGenerateMdl @ 0x14013F1A8 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x14013F344 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     PspIumAllocatePhysicalPages @ 0x14023A554 (PspIumAllocatePhysicalPages.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140249E84 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ResFwGetContext @ 0x140755458 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140077330 (MmAllocatePartitionNodePagesForMdlEx.c)
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
