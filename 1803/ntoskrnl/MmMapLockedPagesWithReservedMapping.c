/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1400C5360
 * Callers:
 *     SmFpAllocate @ 0x140096D84 (SmFpAllocate.c)
 *     sub_14019FDA0 @ 0x14019FDA0 (sub_14019FDA0.c)
 *     PnprCopyReservedMapping @ 0x14023C96C (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x1402854F4 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1404831C8 (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1407B9DC4 (EtwpSavePersistedLogger.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiLegitimatePageForDriversToMap @ 0x140137038 (MiLegitimatePageForDriversToMap.c)
 *     MiMapMdlCommon @ 0x14013B6DC (MiMapMdlCommon.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 v7; // r14
  KIRQL v9; // al
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rdx
  KIRQL v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  ULONG_PTR v17; // r9
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v19; // r11
  PMDL v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r10

  v5 = PoolTag;
  v7 = (((MemoryDescriptorList->ByteOffset + LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&SpinLock);
  v10 = qword_1403CC2C8;
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
  ExReleaseSpinLockSharedFromDpcLevel(&SpinLock);
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  v14 = *(_QWORD *)(v10 + 32);
  if ( v7 <= v14 )
  {
    v15 = ((*(_QWORD *)(v10 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = v15;
    if ( v15 < v15 + 8 * v14 )
    {
      do
      {
        if ( MI_READ_PTE_LOCK_FREE(v16) )
          KeBugCheckEx(0xDAu, 0x107uLL, v19, v17, BugCheckParameter4);
        v16 = v17 + 8;
      }
      while ( v16 < BugCheckParameter4 );
    }
    v20 = MemoryDescriptorList + 1;
    while ( !(unsigned int)MiIsPfnInline(v20->Next)
         || (int)MiLegitimatePageForDriversToMap(48 * v21 - 0x58000000000LL) >= 0 )
    {
      v20 = (PMDL)(v23 + 8);
      if ( v22 == 1 )
        return (PVOID)MiMapMdlCommon(MemoryDescriptorList, v15, 4LL, (unsigned int)CacheType);
    }
  }
  return 0LL;
}
