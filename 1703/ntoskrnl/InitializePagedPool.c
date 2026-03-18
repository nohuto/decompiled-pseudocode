/*
 * XREFs of InitializePagedPool @ 0x140814FA8
 * Callers:
 *     MiBuildPagedPool @ 0x14081450C (MiBuildPagedPool.c)
 *     InitializePool @ 0x140814AC0 (InitializePool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     ExInitializePoolDescriptor @ 0x14057E934 (ExInitializePoolDescriptor.c)
 *     MmIsVerifierEnabled @ 0x1407622B0 (MmIsVerifierEnabled.c)
 */

int InitializePagedPool()
{
  unsigned __int64 v0; // r8
  unsigned int v1; // eax
  __int64 v2; // rbx
  __int64 IndependentPages; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // rbp
  int v10; // r15d
  int v11; // eax
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v13; // ecx
  SIZE_T v14; // rdi
  PVOID PoolWithTag; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  int v18; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG VerifierFlags; // [rsp+80h] [rbp+8h] BYREF

  v0 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) > 0x10000 )
    {
      v1 = ExpNumberOfPagedPools;
      goto LABEL_3;
    }
    v1 = 1;
LABEL_40:
    ExpNumberOfPagedPools = v1;
    goto LABEL_3;
  }
  v1 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfPagedPools = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    v1 = 127;
    goto LABEL_40;
  }
LABEL_3:
  if ( v1 > 0x40 )
  {
    v1 = 64;
    ExpNumberOfPagedPools = 64;
  }
  if ( (unsigned __int16)v0 <= 1u )
  {
    v14 = 4416LL * (v1 + 1);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x6C6F6F50u);
    v16 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheckEx(0x41u, v14, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    qword_1403E4260 = (__int64)PoolWithTag;
    v17 = 0LL;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        ExpPagedPoolDescriptor[v17] = v16;
        ExInitializePoolDescriptor(v16, 1, v17);
        v16 += 4416LL;
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < ExpNumberOfPagedPools + 1 );
    }
  }
  else
  {
    v2 = 0LL;
    do
    {
      IndependentPages = MmAllocateIndependentPages(0x1140uLL, (_DWORD)v2 != 0 ? v2 - 1 : 0, v0);
      if ( !IndependentPages )
        KeBugCheckEx(0x41u, 0x1140uLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
      ExpPagedPoolDescriptor[v2] = IndependentPages;
      if ( !(_DWORD)v2 )
        qword_1403E4260 = IndependentPages;
      ExInitializePoolDescriptor(IndependentPages, 1, v2);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < ExpNumberOfPagedPools + 1 );
  }
  v4 = (40 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v5 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (40 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = PoolTrackTableSize;
  v7 = (__int64)*(&ExPoolTagTables + v5);
  v8 = PoolTrackTableMask;
  v9 = PoolTrackTableMask & 0x40DEDA5;
  v10 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v7 + 40 * v9);
    if ( v11 == 1819242320 )
      break;
    if ( v11 )
    {
LABEL_18:
      v9 = v8 & (unsigned int)(v9 + 1);
      if ( (_DWORD)v9 == v10 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v4, 0x200u);
        goto LABEL_21;
      }
    }
    else
    {
      v18 = *(_DWORD *)(PoolTrackTable + 40 * v9);
      if ( v18 )
      {
        *(_DWORD *)(v7 + 40 * v9) = v18;
      }
      else
      {
        if ( (unsigned int)v9 == v6 - 1 )
          goto LABEL_18;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40 * v9) )
        {
          *(_DWORD *)(PoolTrackTable + 40 * v9) = 1819242320;
          *(_DWORD *)(v7 + 40 * v9) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v7 + 40 * v9 + 4), 1u);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 40 * v9 + 16), v4);
LABEL_21:
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  if ( NumberOfPhysicalPages >= 0x1FC00 && MmSpecialPoolTag == v13 )
  {
    LODWORD(NumberOfPhysicalPages) = MmIsVerifierEnabled(&VerifierFlags);
    if ( (NumberOfPhysicalPages & 0x80000000) != 0LL )
      _InterlockedOr(&ExpPoolFlags, 0x100u);
  }
  return NumberOfPhysicalPages;
}
