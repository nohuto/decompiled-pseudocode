/*
 * XREFs of MmUnmapReservedMapping @ 0x14020FA40
 * Callers:
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     sub_140175E30 @ 0x140175E30 (sub_140175E30.c)
 *     PnprCopyReservedMapping @ 0x1401F9EAC (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1401FA790 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x14023A67C (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x140417610 (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x14020F570 (MiUnmapMdlCommon.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
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
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_14036CDA0);
  v8 = qword_14036CDA8;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036CDA0);
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v4 )
    KeBugCheckEx(0xDAu, 0x102uLL, v3, v4, BugCheckParameter4);
  v12 = *(_QWORD *)(v8 + 32);
  if ( !v12 )
    KeBugCheckEx(0xDAu, 0x10DuLL, v3, v8, v4);
  if ( BugCheckParameter4 > v12 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, v12, BugCheckParameter4);
  MiUnmapMdlCommon(v3, v4, (__int64)MemoryDescriptorList, BugCheckParameter4);
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
