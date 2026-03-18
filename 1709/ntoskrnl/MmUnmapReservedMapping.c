/*
 * XREFs of MmUnmapReservedMapping @ 0x140150450
 * Callers:
 *     sub_1401755B0 @ 0x1401755B0 (sub_1401755B0.c)
 *     PnprCopyReservedMapping @ 0x1401FFC24 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1402004A8 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x14024FA30 (PspIumFreePhysicalPages.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     PnprMapPhysicalPages @ 0x14042C63C (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140753024 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiUnmapMdlCommon @ 0x140150654 (MiUnmapMdlCommon.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
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
  __int64 *i; // r9
  __int64 PteShadow; // rax

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl(MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_140389010);
  v8 = qword_140389018;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140389010);
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
  for ( i = (__int64 *)(v13 + 8 * BugCheckParameter4); (unsigned __int64)i < v14; ++i )
  {
    PteShadow = *i;
    if ( (unsigned __int64)i >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(i, *i);
    if ( PteShadow )
      KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
