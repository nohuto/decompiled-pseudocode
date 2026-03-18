/*
 * XREFs of MiUnlockFlushMdl @ 0x1400A5008
 * Callers:
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiBuildWakeList @ 0x1400A4908 (MiBuildWakeList.c)
 *     MiUnlockMdlWritePages @ 0x1400A50D0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 */

void __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  KIRQL v6; // al
  KIRQL v7; // bp
  __int64 *v8; // rbx

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
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v7 = v6;
  v8 = MiBuildWakeList(a2, 8);
  if ( v7 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
    __writecr8(v7);
  }
  if ( v8 )
    MiReleaseControlAreaWaiters(v8);
}
