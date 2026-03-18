/*
 * XREFs of InitializePagedPool @ 0x14082DD0C
 * Callers:
 *     InitializePool @ 0x14082DEFC (InitializePool.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MmGetNumberOfPhysicalPages @ 0x14056E6E0 (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x1405B73F8 (ExInitializePoolDescriptor.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MmIsVerifierEnabled @ 0x1407A22A0 (MmIsVerifierEnabled.c)
 */

int InitializePagedPool()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebp
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 v11; // rdi
  __int64 IndependentPages; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  int v18; // r14d
  int v19; // r15d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG VerifierFlags; // [rsp+80h] [rbp+8h] BYREF

  v0 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
      ExpNumberOfPagedPools = 1;
  }
  else
  {
    ExpNumberOfPagedPools = (unsigned __int16)KeNumberNodes;
    if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
      ExpNumberOfPagedPools = 127;
  }
  v1 = ExpNumberOfPagedPools;
  if ( (unsigned int)ExpNumberOfPagedPools > 0x40 )
  {
    v1 = 64;
    ExpNumberOfPagedPools = 64;
  }
  if ( (unsigned __int16)v0 <= 1u )
  {
    v11 = 4416LL * (unsigned int)(v1 + 1);
    IndependentPages = MmAllocateIndependentPages(v11, 0, v0);
    v13 = IndependentPages;
    if ( !IndependentPages )
      KeBugCheckEx(0x41u, v11, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    qword_1404013B8 = IndependentPages;
    v14 = 0LL;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        ExpPagedPoolDescriptor[v14] = v13;
        ExInitializePoolDescriptor(v13, 1, v14);
        v13 += 4416LL;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < ExpNumberOfPagedPools + 1 );
    }
  }
  else
  {
    v2 = 0LL;
    if ( v1 != -1 )
    {
      do
      {
        v3 = MmAllocateIndependentPages(0x1140uLL, (_DWORD)v2 != 0 ? v2 - 1 : 0, v0);
        if ( !v3 )
          KeBugCheckEx(0x41u, 0x1140uLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
        ExpPagedPoolDescriptor[v2] = v3;
        if ( !(_DWORD)v2 )
          qword_1404013B8 = v3;
        ExInitializePoolDescriptor(v3, 1, v2);
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < ExpNumberOfPagedPools + 1 );
    }
  }
  v4 = (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v15 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v15) = KeGetPcr()->Prcb.Number;
  v16 = PoolTrackTableSize;
  v17 = (__int64)*(&ExPoolTagTables + v15);
  v18 = PoolTrackTableMask;
  v7 = PoolTrackTableMask & 0x40DEDA5;
  v19 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v5 = 56LL * v7;
    v6 = *(_DWORD *)(v5 + v17);
    if ( v6 == 1819242320 )
      break;
    if ( v6 )
    {
LABEL_16:
      v7 = v18 & (v7 + 1);
      if ( v7 == v19 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v4, 0x200u);
        goto LABEL_19;
      }
    }
    else
    {
      v10 = *(_DWORD *)(v5 + PoolTrackTable);
      if ( v10 )
      {
        *(_DWORD *)(v5 + v17) = v10;
      }
      else
      {
        if ( v7 == v16 - 1 )
          goto LABEL_16;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v5 + PoolTrackTable) )
        {
          *(_DWORD *)(v5 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v5 + v17) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v5 + v17 + 16), 1uLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + v17 + 8), v4);
LABEL_19:
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  if ( NumberOfPhysicalPages >= 0x1FC00 && MmSpecialPoolTag == v9 )
  {
    LODWORD(NumberOfPhysicalPages) = MmIsVerifierEnabled(&VerifierFlags);
    if ( (NumberOfPhysicalPages & 0x80000000) != 0LL )
      _InterlockedOr(&ExpPoolFlags, 0x100u);
  }
  return NumberOfPhysicalPages;
}
