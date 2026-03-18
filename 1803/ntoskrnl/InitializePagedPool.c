/*
 * XREFs of InitializePagedPool @ 0x1408ACF98
 * Callers:
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1408ACB14 (InitializePool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405587B8 (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x14060AF74 (ExInitializePoolDescriptor.c)
 *     MmIsVerifierEnabled @ 0x14080F2D0 (MmIsVerifierEnabled.c)
 */

int InitializePagedPool()
{
  __int16 v0; // r8
  int v1; // eax
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebp
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rbx
  __int64 IndependentPages; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  int v18; // r14d
  int v19; // r15d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG VerifierFlags; // [rsp+80h] [rbp+8h] BYREF

  v0 = KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    ExpNumberOfPagedPools = (unsigned __int16)KeNumberNodes;
    if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
      ExpNumberOfPagedPools = 127;
  }
  else if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
  {
    ExpNumberOfPagedPools = 1;
  }
  v1 = ExpNumberOfPagedPools;
  if ( (unsigned int)ExpNumberOfPagedPools > 0x40 )
  {
    v1 = 64;
    ExpNumberOfPagedPools = 64;
  }
  if ( (unsigned __int16)v0 > 1u )
  {
    v13 = 0LL;
    if ( v1 != -1 )
    {
      do
      {
        IndependentPages = MmAllocateIndependentPages(0x1140uLL, (_DWORD)v13 != 0 ? v13 - 1 : 0);
        if ( !IndependentPages )
          KeBugCheckEx(0x41u, 0x1140uLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
        ExpPagedPoolDescriptor[v13] = IndependentPages;
        if ( !(_DWORD)v13 )
          qword_14044C5C0 = IndependentPages;
        ExInitializePoolDescriptor(IndependentPages, 1, v13);
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < ExpNumberOfPagedPools + 1 );
    }
  }
  else
  {
    v2 = 4416LL * (unsigned int)(v1 + 1);
    v3 = MmAllocateIndependentPages(v2, 0);
    v4 = v3;
    if ( !v3 )
      KeBugCheckEx(0x41u, v2, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    qword_14044C5C0 = v3;
    v5 = 0LL;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        ExpPagedPoolDescriptor[v5] = v4;
        ExInitializePoolDescriptor(v4, 1, v5);
        v4 += 4416LL;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < ExpNumberOfPagedPools + 1 );
    }
  }
  v6 = (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v15 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v15) = KeGetPcr()->Prcb.Number;
  v16 = PoolTrackTableSize;
  v17 = (__int64)*(&ExPoolTagTables + v15);
  v18 = PoolTrackTableMask;
  v9 = PoolTrackTableMask & 0x40DEDA5;
  v19 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v7 = 56LL * v9;
    v8 = *(_DWORD *)(v7 + v17);
    if ( v8 == 1819242320 )
      break;
    if ( v8 )
    {
LABEL_14:
      v9 = v18 & (v9 + 1);
      if ( v9 == v19 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v6, 0x200u);
        goto LABEL_16;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v7 + PoolTrackTable);
      if ( v12 )
      {
        *(_DWORD *)(v7 + v17) = v12;
      }
      else
      {
        if ( v9 == v16 - 1 )
          goto LABEL_14;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v7 + PoolTrackTable) )
        {
          *(_DWORD *)(v7 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v7 + v17) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v7 + v17 + 16), 1uLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + v17 + 8), v6);
LABEL_16:
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  if ( NumberOfPhysicalPages >= 0x1FC00 && MmSpecialPoolTag == v11 )
  {
    LODWORD(NumberOfPhysicalPages) = MmIsVerifierEnabled(&VerifierFlags);
    if ( (NumberOfPhysicalPages & 0x80000000) != 0LL )
      _InterlockedOr(&ExpPoolFlags, 0x100u);
  }
  return NumberOfPhysicalPages;
}
