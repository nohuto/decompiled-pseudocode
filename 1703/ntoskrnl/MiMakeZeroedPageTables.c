/*
 * XREFs of MiMakeZeroedPageTables @ 0x140127F0C
 * Callers:
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiExpandPtes @ 0x14012793C (MiExpandPtes.c)
 *     MiSplitBitmapPages @ 0x140127E80 (MiSplitBitmapPages.c)
 *     MiMapWithLargePages @ 0x14014734C (MiMapWithLargePages.c)
 *     MiGetLargePageWorkMapping @ 0x140158B08 (MiGetLargePageWorkMapping.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiMapNewPfns @ 0x1406B4070 (MiMapNewPfns.c)
 *     MiExpandPartitionIds @ 0x1406BCBCC (MiExpandPartitionIds.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1406BD480 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiMapBBTMemory @ 0x14080308C (MiMapBBTMemory.c)
 *     MiInitializeKernelCfg @ 0x14082694C (MiInitializeKernelCfg.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 *     MiCleanupPageTablePages @ 0x14010AD58 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiPageTablesNeeded @ 0x1401281E0 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
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
  _QWORD v25[8]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-39h] BYREF
  char v27; // [rsp+78h] [rbp-31h] BYREF

  memset(v25, 0, 0x38uLL);
  v8 = 6;
  v9 = 2;
  if ( a4 != 6 )
    v8 = a4;
  if ( (a3 & 4) != 0 )
  {
    LODWORD(v25[5]) = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    LODWORD(v25[5]) = 2;
  }
  else
  {
    v10 = v25[5];
    if ( (a3 & 0x20) == 0 )
      v10 = 1;
    LODWORD(v25[5]) = v10;
  }
  v11 = a1 << 25 >> 16;
  v12 = a2 << 25 >> 16;
  LODWORD(v25[4]) = v8;
  AnyMultiplexedVm = 0LL;
  v14 = 8LL;
  if ( v8 == 1 )
  {
LABEL_41:
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    goto LABEL_17;
  }
  if ( v8 == 2 )
  {
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    goto LABEL_17;
  }
  if ( v8 <= 5 )
    goto LABEL_17;
  if ( v8 <= 7 )
  {
LABEL_16:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v9);
    goto LABEL_17;
  }
  if ( v8 == 8 )
  {
    v9 = 0;
    goto LABEL_16;
  }
  if ( v8 != 11 )
  {
    if ( v8 != 12 )
      goto LABEL_17;
    v9 = 1;
    goto LABEL_16;
  }
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    goto LABEL_41;
LABEL_17:
  v15 = MiPageTablesNeeded(v11, v12, LODWORD(v25[5]), 1LL);
  if ( !v15 )
    return 1LL;
  if ( AnyMultiplexedVm )
    v16 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 86));
  else
    v16 = &MiSystemPartition;
  v25[1] = v16;
  v17 = -1LL;
  HIDWORD(v25[4]) = a3;
  v25[6] = -1LL;
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
      goto LABEL_22;
    if ( v11 < 48 * qword_14036C290 - 0x57FFFFFFFD0LL )
      v17 = 0LL;
  }
  v25[6] = v17;
LABEL_22:
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
    if ( LODWORD(v25[4]) != 2 )
      BYTE4(v25[5]) = ExAcquireSpinLockExclusive(&dword_14036C59C);
    MiMakeZeroedPageTableRange(v11, v12, (__int64)v26, 3u, (__int64)v25);
    v21 = v25[4];
    if ( LODWORD(v25[4]) != 2 )
    {
      v22 = BYTE4(v25[5]);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C59C);
      __writecr8(v22);
      v21 = v25[4];
    }
    if ( v18 && v21 != 2 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      _InterlockedExchangeAdd64((volatile signed __int64 *)SharedVm + 6, v25[3]);
    }
    if ( v8 == 4 )
      qword_14036D148 += v25[3];
    MiCleanupPageTablePages((__int64)v25);
    return 1LL;
  }
  return 0LL;
}
