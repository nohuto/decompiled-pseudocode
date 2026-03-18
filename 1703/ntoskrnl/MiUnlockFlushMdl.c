/*
 * XREFs of MiUnlockFlushMdl @ 0x14001505C
 * Callers:
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x1400150EC (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1400CB2A0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 */

__int64 __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1],
    (char *)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3);
  result = MiDecrementModifiedWriteCount(a2, 0LL);
  if ( result )
    return MiReleaseControlAreaWaiters(result);
  return result;
}
