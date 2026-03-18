/*
 * XREFs of MmUnmapReservedMapping @ 0x140001420
 * Callers:
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 *     sub_14019FD30 @ 0x14019FD30 (sub_14019FD30.c)
 *     PnprCopyReservedMapping @ 0x14023C96C (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x14023D2C0 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x1402854F4 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1404831C8 (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1407B9DC4 (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiUnmapMdlCommon @ 0x140001568 (MiUnmapMdlCommon.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  KIRQL v7; // al
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rcx
  KIRQL v10; // r15
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  ULONG_PTR i; // r9
  __int64 v16; // r9

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl(MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&SpinLock);
  v8 = qword_1403CC2C8;
  v9 = v3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v8 )
        KeBugCheckEx(0xDAu, 0x106uLL, v3, v4, 2uLL);
      v11 = *(_QWORD *)(v8 + 24);
      if ( v9 <= v11 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    if ( v9 >= v11 )
      break;
    v8 = *(_QWORD *)v8;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&SpinLock);
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v4 )
    KeBugCheckEx(0xDAu, 0x102uLL, v3, v4, BugCheckParameter4);
  v12 = *(_QWORD *)(v8 + 32);
  if ( !v12 )
    KeBugCheckEx(0xDAu, 0x10DuLL, v3, v8, v4);
  if ( BugCheckParameter4 > v12 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, v12, BugCheckParameter4);
  MiUnmapMdlCommon(v3);
  v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = v13 + 8LL * *(_QWORD *)(v8 + 32);
  for ( i = v13 + 8 * BugCheckParameter4; i < v14; i = v16 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) )
      KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
