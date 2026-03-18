/*
 * XREFs of MiCreatePrototypePtes @ 0x14001F8DC
 * Callers:
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageFileSectionList @ 0x14001F824 (MiUpdatePageFileSectionList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14048DF98 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCreatePrototypePtes(
        volatile LONG **BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  volatile LONG *v5; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  PVOID PoolWithTag; // rax
  void *v10; // r15
  int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // r11
  int FileExtents; // ebx
  __int64 CommittedPages; // rsi
  int v17; // eax
  __int64 v18; // rcx
  int SubsectionCharges; // eax
  unsigned int v20; // edi
  __int64 v21; // rdx
  KIRQL v22; // di
  __int64 v24; // rdi
  int v25; // ebp
  __int64 v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // rdx
  int v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  KIRQL v32; // [rsp+A8h] [rbp+20h]
  unsigned int v33; // [rsp+A8h] [rbp+20h]

  v5 = *BugCheckParameter2;
  v7 = a3;
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = a4;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v12 = v5[14] & 0x40000000;
  MiInitializePrototypePtes(PoolWithTag, v8, BugCheckParameter2, v12 == 0);
  v13 = *((_QWORD *)v5 + 8);
  v14 = 0LL;
  if ( v12 )
  {
    FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 5);
    if ( FileExtents < 0 )
      ExFreePoolWithTag(v10, 0);
    return (unsigned int)FileExtents;
  }
  if ( v13 )
    CommittedPages = v7;
  else
    CommittedPages = MiGetCommittedPages(v5);
  if ( (a2 & 4) != 0 )
  {
    v17 = 1;
  }
  else
  {
    if ( (a2 & 0x80u) == 0 )
      v21 = (a2 >> 7) & 2;
    else
      v21 = 3LL;
    v17 = MiControlAreaRequiresCharge(v5, v21);
    if ( !v17 )
    {
      CommittedPages = v14;
      v20 = -1073740277;
      goto LABEL_54;
    }
  }
  v18 = v17;
  v30 = v17;
  while ( 1 )
  {
    if ( v18 == 2 )
    {
      if ( CommittedPages )
      {
        SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
        LODWORD(v14) = 0;
        v20 = SubsectionCharges;
        if ( SubsectionCharges < 0 )
        {
          CommittedPages = 0LL;
          goto LABEL_54;
        }
      }
    }
    else
    {
      CommittedPages = v14;
    }
    if ( !v13 )
    {
      v29 = 1;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)v5 + 40LL, 0LL);
    }
    v22 = ExAcquireSpinLockExclusive(v5 + 18);
    v32 = v22;
    if ( v30 != 2 )
      break;
    if ( v13 ? CommittedPages == *((_DWORD *)BugCheckParameter2 + 11) : CommittedPages == MiGetCommittedPages(v5) )
      break;
    v33 = CommittedPages;
    if ( v13 )
      CommittedPages = *((unsigned int *)BugCheckParameter2 + 11);
    else
      CommittedPages = MiGetCommittedPages(v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5 + 18);
    __writecr8(v22);
    v14 = 0LL;
    if ( !v13 )
    {
      v24 = *(_QWORD *)v5;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v5 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v24 + 40);
      KeAbPostRelease(v24 + 40);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v14 = 0LL;
      v29 = 0;
    }
    v18 = 2LL;
    if ( v33 )
    {
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (v5[15] & 0x3FF)), v13 != 0, v33);
      v18 = 2LL;
      v14 = 0LL;
    }
  }
  v25 = MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
  if ( v25 == 1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v5 + 18);
    __writecr8(v22);
    v20 = -1073741670;
  }
  else
  {
    if ( v25 == 3 )
      CommittedPages = 0LL;
    if ( v13 )
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    if ( !BugCheckParameter2[1] )
    {
      BugCheckParameter2[1] = (volatile LONG *)v10;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5 + 18);
      __writecr8(v22);
      LODWORD(v14) = 0;
      if ( !v13 )
      {
        MiUpdatePageFileSectionList((__int64)BugCheckParameter2, 1);
        LODWORD(v14) = 0;
      }
      v10 = 0LL;
      v20 = 0;
      goto LABEL_54;
    }
    v26 = MiDecrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5 + 18);
    __writecr8(v32);
    if ( v25 == 3 )
      CommittedPages = v26;
    v20 = -1073741302;
  }
  LODWORD(v14) = 0;
LABEL_54:
  if ( !v13 && v29 == 1 )
  {
    v27 = *(_QWORD *)v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v5 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27 + 40);
    KeAbPostRelease(v27 + 40);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    LODWORD(v14) = 0;
  }
  if ( CommittedPages )
  {
    v28 = (unsigned int)v14;
    LOBYTE(v28) = v13 != 0;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (v5[15] & 0x3FF)), v28, CommittedPages);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v20;
}
