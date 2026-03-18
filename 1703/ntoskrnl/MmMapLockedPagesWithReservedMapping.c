/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x14020F8C0
 * Callers:
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     sub_140175EA0 @ 0x140175EA0 (sub_140175EA0.c)
 *     PnprCopyReservedMapping @ 0x1401F9EAC (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x14023A67C (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x140417610 (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
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
  unsigned __int64 v16; // rbx
  ULONG_PTR v17; // r9
  ULONG_PTR v18; // r9
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v20; // r11

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_14036CDA0);
  v10 = qword_14036CDA8;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036CDA0);
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  v14 = *(_QWORD *)(v10 + 32);
  if ( v7 > v14 )
    return 0LL;
  v16 = ((*(_QWORD *)(v10 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = v16;
  if ( v16 < v16 + 8 * v14 )
  {
    do
    {
      if ( MI_READ_PTE_LOCK_FREE(v17) )
        KeBugCheckEx(0xDAu, 0x107uLL, v20, v18, BugCheckParameter4);
      v17 = v18 + 8;
    }
    while ( v17 < BugCheckParameter4 );
  }
  return (PVOID)MiMapMdlCommon((__int64)MemoryDescriptorList, v16, 4, CacheType);
}
