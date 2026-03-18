/*
 * XREFs of MiUnlockFlushMdl @ 0x1400B5F10
 * Callers:
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 * Callees:
 *     MiUnlockMdlWritePages @ 0x14002F4C0 (MiUnlockMdlWritePages.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 */

void __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2)
{
  CSHORT MdlFlags; // ax
  KIRQL v5; // al
  KIRQL v6; // bp
  __int64 v7; // rbx

  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(MemoryDescriptorList);
    MdlFlags = MemoryDescriptorList->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1].Next,
    (unsigned __int64)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v6 = v5;
  v7 = MiBuildWakeList(a2, 8LL);
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
    __writecr8(v6);
  }
  if ( v7 )
    MiReleaseControlAreaWaiters(v7);
}
