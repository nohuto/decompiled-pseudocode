/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x14014E860
 * Callers:
 *     sub_140175620 @ 0x140175620 (sub_140175620.c)
 *     PnprCopyReservedMapping @ 0x1401FFC24 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x14024FA30 (PspIumFreePhysicalPages.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     PnprMapPhysicalPages @ 0x14042C63C (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140753024 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rdi
  unsigned __int64 v7; // rbp
  KIRQL v9; // al
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rdx
  KIRQL v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  ULONG_PTR v16; // r11
  unsigned __int64 v17; // rbx
  __int64 *v18; // r9
  ULONG_PTR BugCheckParameter4; // r10
  __int64 PteShadow; // rax

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_140389010);
  v10 = qword_140389018;
  v11 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  v12 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v10 )
        KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
      v13 = *(_QWORD *)(v10 + 24);
      if ( v11 <= v13 )
        break;
      v10 = *(_QWORD *)(v10 + 8);
    }
    if ( v11 >= v13 )
      break;
    v10 = *(_QWORD *)v10;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140389010);
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  v14 = *(_QWORD *)(v10 + 32);
  if ( v7 > v14 )
    return 0LL;
  v16 = *(_QWORD *)(v10 + 24);
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = (__int64 *)v17;
  BugCheckParameter4 = v17 + 8 * v14;
  if ( v17 < BugCheckParameter4 )
  {
    do
    {
      PteShadow = *v18;
      if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v18, *v18);
      if ( PteShadow )
        KeBugCheckEx(0xDAu, 0x107uLL, v16, (ULONG_PTR)v18, BugCheckParameter4);
      ++v18;
    }
    while ( (unsigned __int64)v18 < BugCheckParameter4 );
  }
  return (PVOID)MiMapMdlCommon(MemoryDescriptorList, v17, 4LL, (unsigned int)CacheType);
}
