/*
 * XREFs of MiMakeZeroedPageTables @ 0x1400C3C2C
 * Callers:
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiExpandPtes @ 0x1400F5BA0 (MiExpandPtes.c)
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 *     MiMapWithLargePages @ 0x14014F450 (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x14022042C (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiMapNewPfns @ 0x1406E0048 (MiMapNewPfns.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1406EA260 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x1406EDE84 (MiExpandPartitionIds.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408525F8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeKernelCfg @ 0x1408580E8 (MiInitializeKernelCfg.c)
 *     MiMapBBTMemory @ 0x14085826C (MiMapBBTMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiCleanupPageTablePages @ 0x1400C3F04 (MiCleanupPageTablePages.c)
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 *     MiPageTablesNeeded @ 0x1400C4984 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, int a3, int a4)
{
  int v8; // r14d
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  char *AnyMultiplexedVm; // rdi
  __int64 v14; // rbx
  unsigned __int64 v15; // r8
  ULONG_PTR *v16; // rdx
  __int64 v17; // rdx
  int v18; // r12d
  unsigned __int64 *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rbx
  LONG *SharedVm; // rax
  _QWORD v25[10]; // [rsp+30h] [rbp-89h] BYREF
  char v26; // [rsp+80h] [rbp-39h] BYREF
  char v27; // [rsp+88h] [rbp-31h] BYREF

  memset(v25, 0, 0x48uLL);
  v8 = 6;
  v9 = 2;
  if ( a4 != 6 )
    v8 = a4;
  if ( (a3 & 4) != 0 )
  {
    LODWORD(v25[7]) = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    LODWORD(v25[7]) = 2;
  }
  else
  {
    v10 = v25[7];
    if ( (a3 & 0x20) == 0 )
      v10 = 1;
    LODWORD(v25[7]) = v10;
  }
  v11 = a1 << 25 >> 16;
  v12 = a2 << 25 >> 16;
  LODWORD(v25[6]) = v8;
  AnyMultiplexedVm = 0LL;
  v14 = 8LL;
  if ( v8 == 1 )
  {
LABEL_41:
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    goto LABEL_15;
  }
  if ( v8 == 2 )
  {
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    goto LABEL_15;
  }
  if ( v8 <= 5 )
    goto LABEL_15;
  if ( v8 <= 7 )
  {
LABEL_37:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v9);
    goto LABEL_15;
  }
  if ( v8 == 8 )
  {
    v9 = 0;
    goto LABEL_37;
  }
  if ( v8 != 11 )
  {
    if ( v8 != 12 )
      goto LABEL_15;
    v9 = 1;
    goto LABEL_37;
  }
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    goto LABEL_41;
LABEL_15:
  v15 = MiPageTablesNeeded(v11, v12, LODWORD(v25[7]), 1LL);
  if ( !v15 )
    return 1LL;
  if ( AnyMultiplexedVm )
    v16 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 86));
  else
    v16 = &MiSystemPartition;
  v25[3] = v16;
  v17 = -1LL;
  HIDWORD(v25[6]) = a3;
  v25[8] = -1LL;
  v18 = a3 & 0x40;
  if ( v18 )
  {
    do
    {
      v17 = (v17 << 8) | 0xA;
      --v14;
    }
    while ( v14 );
  }
  else
  {
    if ( v11 < (MmPfnDatabase & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_23;
    if ( v11 < 48 * qword_1403885E0 - 0x57FFFFFFFD0LL )
      v17 = 0LL;
  }
  v25[8] = v17;
LABEL_23:
  if ( (unsigned int)MiGetPageTablePages((__int64)v25, v11, v15) )
  {
    v19 = (unsigned __int64 *)&v27;
    v20 = 4LL;
    do
    {
      v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(v19 - 1) = v11;
      *v19 = v12;
      v19 += 2;
      --v20;
    }
    while ( v20 );
    if ( LODWORD(v25[6]) != 2 )
      BYTE4(v25[7]) = ExAcquireSpinLockExclusive(&dword_140388924);
    MiMakeZeroedPageTableRange(v11, v12, (unsigned int)&v26, 3, (__int64)v25);
    v21 = v25[6];
    if ( LODWORD(v25[6]) != 2 )
    {
      v22 = BYTE4(v25[7]);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388924);
      __writecr8(v22);
      v21 = v25[6];
    }
    if ( v18 && v21 != 2 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      _InterlockedExchangeAdd64((volatile signed __int64 *)SharedVm + 6, v25[5]);
    }
    if ( v8 == 4 )
      qword_140389408 += v25[5];
    MiCleanupPageTablePages(v25);
    return 1LL;
  }
  return 0LL;
}
