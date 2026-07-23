/*
 * XREFs of MiCreatePrototypePtes @ 0x14011933C
 * Callers:
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiUpdatePageFileSectionList @ 0x140119284 (MiUpdatePageFileSectionList.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14054AFA8 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCreatePrototypePtes(__int64 *BugCheckParameter2, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  PVOID PoolWithTag; // rax
  void *v9; // r13
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // r12
  __int16 v13; // bx
  __int64 v14; // rax
  KIRQL v15; // di
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // r15d
  _QWORD *v19; // rbx
  int SubsectionCharges; // r15d
  __int64 v21; // rax
  __int64 v23; // r14
  struct _KTHREAD *v24; // rbx
  ULONG_PTR v25; // r9
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  _KLOCK_ENTRY *v31; // rdi
  __int64 v32; // rdx
  __int16 v33; // ax
  __int16 v34; // dx
  __int64 v35; // rbx
  int FileExtents; // ebx
  __int64 v37; // rax
  __int64 v38; // r15
  struct _KTHREAD *v39; // rbx
  __int64 SessionId; // rdx
  int v41; // r8d
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int16 v46; // ax
  __int64 v47; // [rsp+30h] [rbp-40h]
  int v48; // [rsp+38h] [rbp-38h] BYREF
  __int64 v49; // [rsp+40h] [rbp-30h]
  int v50; // [rsp+48h] [rbp-28h]
  int v51; // [rsp+4Ch] [rbp-24h]
  unsigned int v52; // [rsp+50h] [rbp-20h]
  int v53; // [rsp+54h] [rbp-1Ch]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  __int64 i; // [rsp+60h] [rbp-10h]
  int v56; // [rsp+B0h] [rbp+40h] BYREF
  int v57; // [rsp+B8h] [rbp+48h]
  int v58; // [rsp+C8h] [rbp+58h]

  v57 = a2;
  v5 = *BugCheckParameter2;
  v47 = *BugCheckParameter2;
  v58 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes(PoolWithTag, a4, BugCheckParameter2, v10 == 0);
  v11 = *(_QWORD *)(v5 + 64);
  v49 = v11;
  if ( v10 )
  {
    FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 5);
    if ( FileExtents < 0 )
      ExFreePoolWithTag(v9, 0);
    return (unsigned int)FileExtents;
  }
  v12 = a3;
  v13 = v57;
  if ( (v57 & 4) != 0 )
  {
    LODWORD(v14) = 1;
    v50 = 1;
  }
  else
  {
    LODWORD(v14) = MiControlAreaRequiresCharge();
    v50 = v14;
    if ( !(_DWORD)v14 )
    {
      SubsectionCharges = -1073740277;
      v12 = 0LL;
LABEL_58:
      v19 = (_QWORD *)v47;
      goto LABEL_22;
    }
  }
  v14 = (int)v14;
  v57 = v13 & 0x180;
  for ( i = (int)v14; ; v14 = i )
  {
    if ( v14 == 2 )
    {
      SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, v12);
      if ( SubsectionCharges < 0 )
      {
        v12 = 0LL;
        goto LABEL_58;
      }
      v5 = v47;
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v11 )
    {
      v58 = 1;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)v5 + 40LL, 0LL);
    }
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
    if ( !v12 )
      break;
    v37 = *((unsigned int *)BugCheckParameter2 + 11);
    if ( v12 == v37 )
      break;
    v52 = v12;
    v12 = (unsigned int)v37;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    __writecr8(v15);
    v11 = v49;
    if ( !v49 )
    {
      v38 = *(_QWORD *)v5 + 40LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v38);
      v56 = 0;
      v39 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v38) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(v39->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v39->SpecialApcDisable;
      ++v39->AbAllocationRegionCount;
      v41 = (char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary;
      LOBYTE(v58) = v39->AbAllocationRegionCount;
      v42 = v41 ^ 0x3F;
      while ( 1 )
      {
        v27 = !_BitScanReverse((unsigned int *)&v43, v42);
        v51 = v43;
        if ( v27 )
          goto LABEL_74;
        v44 = (__int64)&v39->LockEntries[v43];
        v42 &= ~(1 << v43);
        if ( (*(_BYTE *)(v44 + 26) & 1) != 0
          && (*(_DWORD *)(v44 + 32) & 1) == 0
          && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v38 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v44 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v44 + 26) &= ~1u;
          if ( *(_QWORD *)(v44 + 32) )
            break;
        }
      }
      if ( !v44 )
      {
LABEL_74:
        if ( (*((_DWORD *)&v39->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v39, v38, (unsigned int)SessionId, 0LL);
        goto LABEL_86;
      }
      *(_BYTE *)(v44 + 32) |= 2u;
      if ( *(__int64 *)(v44 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44, SessionId);
      v56 = 0;
      v56 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
      *(_DWORD *)(v44 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v44 + 25) &= ~1u;
      *(_QWORD *)(v44 + 32) = 0LL;
      v45 = (v44 - (__int64)v39 - 800) / 96;
      if ( (_BYTE)v58 == 1 )
        v39->AbEntrySummary |= 1 << v45;
      else
        _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v45);
LABEL_86:
      --v39->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v39->Header.Lock, v38, (unsigned int *)&v56);
      v46 = v39->SpecialApcDisable + 1;
      v39->SpecialApcDisable = v46;
      if ( !v46 && ($69CD3F157F9F39B6F7113F2231989901 *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v5 = v47;
      v11 = v49;
      v58 = 0;
    }
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
      v11 != 0,
      v52);
  }
  v16 = 0;
  if ( v12 )
    v16 = v57 | 0x28;
  v17 = MiIncrementSubsectionViewCount(BugCheckParameter2, v16);
  v18 = v17;
  if ( v17 != 1 )
  {
    if ( v17 == 3 )
      v12 = 0LL;
    if ( v49 )
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    if ( !BugCheckParameter2[1] )
    {
      v19 = (_QWORD *)v47;
      BugCheckParameter2[1] = (__int64)v9;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 72));
      __writecr8(v15);
      if ( !v49 )
        MiUpdatePageFileSectionList((__int64)BugCheckParameter2, 1);
      v9 = 0LL;
      SubsectionCharges = 0;
      goto LABEL_22;
    }
    v34 = v16 | 0x10;
    if ( v50 != 2 )
      v34 = v16;
    v35 = MiDecrementSubsectionViewCount(BugCheckParameter2, v34);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 72));
    __writecr8(v15);
    v27 = v18 == 3;
    SubsectionCharges = -1073741302;
    if ( v27 )
      v12 = v35;
    goto LABEL_58;
  }
  v19 = (_QWORD *)v47;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 72));
  __writecr8(v15);
  SubsectionCharges = -1073741670;
LABEL_22:
  v21 = v49;
  if ( !v49 && v58 == 1 )
  {
    v23 = *v19 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v23);
    v48 = 0;
    v24 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
      v25 = (unsigned int)MmGetSessionIdEx(v24->ApcState.Process);
    else
      v25 = 0xFFFFFFFFLL;
    --v24->SpecialApcDisable;
    ++v24->AbAllocationRegionCount;
    LODWORD(v26) = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
    LOBYTE(v58) = v24->AbAllocationRegionCount;
    v27 = !_BitScanReverse((unsigned int *)&v28, v26);
    v53 = v28;
    if ( v27 )
      goto LABEL_52;
    while ( 1 )
    {
      v29 = 1 << v28;
      v30 = v28;
      v31 = &v24->LockEntries[v30];
      v26 = ~v29 & (unsigned int)v26;
      if ( (v31->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v31->LockState.0 & 1) == 0
        && (*(_QWORD *)&v31->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
        && v31->LockState.SessionId == (_DWORD)v25 )
      {
        v31->AcquiredByte &= ~1u;
        if ( v31->LockState.0 )
          break;
      }
      v27 = !_BitScanReverse((unsigned int *)&v28, v26);
      v53 = v28;
      if ( v27 )
        goto LABEL_52;
    }
    if ( !v31 )
    {
LABEL_52:
      if ( (*((_DWORD *)&v24->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, v25, 0LL);
    }
    else
    {
      v31->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v31->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v24->LockEntries[v30].TreeNode, v26);
      v48 = 0;
      v48 = v31->BoostBitmap.AllFields & 0x1FFFF;
      v31->BoostBitmap.AllFields &= 0xFFFE0000;
      v31->ThreadLocalFlags &= ~1u;
      v31->LockState.0 = 0LL;
      v32 = ((char *)v31 - (char *)v24 - 800) / 96;
      if ( (_BYTE)v58 == 1 )
        v24->AbEntrySummary |= 1 << v32;
      else
        _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v32);
    }
    --v24->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v24->Header.Lock, v23, (unsigned int *)&v48);
    v33 = v24->SpecialApcDisable + 1;
    v24->SpecialApcDisable = v33;
    if ( !v33 && ($69CD3F157F9F39B6F7113F2231989901 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v21 = v49;
  }
  if ( v12 )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v47 + 60) & 0x3FF)),
      v21 != 0,
      v12);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)SubsectionCharges;
}
