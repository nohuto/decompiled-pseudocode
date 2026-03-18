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
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  _KLOCK_ENTRY *v32; // rdi
  __int64 v33; // rdx
  __int16 v34; // ax
  __int16 v35; // dx
  __int64 v36; // rbx
  int FileExtents; // ebx
  __int64 v38; // rax
  __int64 v39; // r15
  struct _KTHREAD *v40; // rbx
  __int64 SessionId; // rdx
  int v42; // r8d
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int16 v47; // ax
  __int64 v48; // [rsp+30h] [rbp-40h]
  int v49; // [rsp+38h] [rbp-38h] BYREF
  __int64 v50; // [rsp+40h] [rbp-30h]
  int v51; // [rsp+48h] [rbp-28h]
  int v52; // [rsp+4Ch] [rbp-24h]
  unsigned int v53; // [rsp+50h] [rbp-20h]
  int v54; // [rsp+54h] [rbp-1Ch]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  __int64 i; // [rsp+60h] [rbp-10h]
  int v57; // [rsp+B0h] [rbp+40h] BYREF
  int v58; // [rsp+B8h] [rbp+48h]
  int v59; // [rsp+C8h] [rbp+58h]

  v58 = a2;
  v5 = *BugCheckParameter2;
  v48 = *BugCheckParameter2;
  v59 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes(PoolWithTag, a4, BugCheckParameter2, v10 == 0);
  v11 = *(_QWORD *)(v5 + 64);
  v50 = v11;
  if ( v10 )
  {
    FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 5);
    if ( FileExtents < 0 )
      ExFreePoolWithTag(v9, 0);
    return (unsigned int)FileExtents;
  }
  v12 = a3;
  v13 = v58;
  if ( (v58 & 4) != 0 )
  {
    LODWORD(v14) = 1;
    v51 = 1;
  }
  else
  {
    LODWORD(v14) = MiControlAreaRequiresCharge();
    v51 = v14;
    if ( !(_DWORD)v14 )
    {
      SubsectionCharges = -1073740277;
      v12 = 0LL;
LABEL_58:
      v19 = (_QWORD *)v48;
      goto LABEL_22;
    }
  }
  v14 = (int)v14;
  v58 = v13 & 0x180;
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
      v5 = v48;
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v11 )
    {
      v59 = 1;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)v5 + 40LL, 0LL);
    }
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
    if ( !v12 )
      break;
    v38 = *((unsigned int *)BugCheckParameter2 + 11);
    if ( v12 == v38 )
      break;
    v53 = v12;
    v12 = (unsigned int)v38;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    __writecr8(v15);
    v11 = v50;
    if ( !v50 )
    {
      v39 = *(_QWORD *)v5 + 40LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v39);
      v57 = 0;
      v40 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(v40->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v40->SpecialApcDisable;
      ++v40->AbAllocationRegionCount;
      v42 = (char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary;
      LOBYTE(v59) = v40->AbAllocationRegionCount;
      LODWORD(v43) = v42 ^ 0x3F;
      while ( 1 )
      {
        v28 = !_BitScanReverse((unsigned int *)&v44, v43);
        v52 = v44;
        if ( v28 )
          goto LABEL_74;
        v45 = (__int64)&v40->LockEntries[v44];
        v43 = ~(1 << v44) & (unsigned int)v43;
        if ( (*(_BYTE *)(v45 + 26) & 1) != 0
          && (*(_DWORD *)(v45 + 32) & 1) == 0
          && (*(_QWORD *)(v45 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v39 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v45 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v45 + 26) &= ~1u;
          if ( *(_QWORD *)(v45 + 32) )
            break;
        }
      }
      if ( !v45 )
      {
LABEL_74:
        if ( (*((_DWORD *)&v40->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v40, v39, (unsigned int)SessionId, 0LL);
        goto LABEL_86;
      }
      *(_BYTE *)(v45 + 32) |= 2u;
      if ( *(__int64 *)(v45 + 32) < 0 )
        KiAbEntryRemoveFromTree(v45, SessionId, v43);
      v57 = 0;
      v57 = *(_DWORD *)(v45 + 88) & 0x1FFFF;
      *(_DWORD *)(v45 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v45 + 25) &= ~1u;
      *(_QWORD *)(v45 + 32) = 0LL;
      v46 = (v45 - (__int64)v40 - 800) / 96;
      if ( (_BYTE)v59 == 1 )
        v40->AbEntrySummary |= 1 << v46;
      else
        _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v46);
LABEL_86:
      --v40->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v40->Header.Lock, v39, (unsigned int *)&v57);
      v47 = v40->SpecialApcDisable + 1;
      v40->SpecialApcDisable = v47;
      if ( !v47 && ($69CD3F157F9F39B6F7113F2231989901 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v5 = v48;
      v11 = v50;
      v59 = 0;
    }
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
      v11 != 0,
      v53);
  }
  v16 = 0;
  if ( v12 )
    v16 = v58 | 0x28;
  v17 = MiIncrementSubsectionViewCount(BugCheckParameter2, v16);
  v18 = v17;
  if ( v17 != 1 )
  {
    if ( v17 == 3 )
      v12 = 0LL;
    if ( v50 )
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    if ( !BugCheckParameter2[1] )
    {
      v19 = (_QWORD *)v48;
      BugCheckParameter2[1] = (__int64)v9;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v48 + 72));
      __writecr8(v15);
      if ( !v50 )
        MiUpdatePageFileSectionList((__int64)BugCheckParameter2, 1);
      v9 = 0LL;
      SubsectionCharges = 0;
      goto LABEL_22;
    }
    v35 = v16 | 0x10;
    if ( v51 != 2 )
      v35 = v16;
    v36 = MiDecrementSubsectionViewCount(BugCheckParameter2, v35);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v48 + 72));
    __writecr8(v15);
    v28 = v18 == 3;
    SubsectionCharges = -1073741302;
    if ( v28 )
      v12 = v36;
    goto LABEL_58;
  }
  v19 = (_QWORD *)v48;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v48 + 72));
  __writecr8(v15);
  SubsectionCharges = -1073741670;
LABEL_22:
  v21 = v50;
  if ( !v50 && v59 == 1 )
  {
    v23 = *v19 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v23);
    v49 = 0;
    v24 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
      v25 = (unsigned int)MmGetSessionIdEx(v24->ApcState.Process);
    else
      v25 = 0xFFFFFFFFLL;
    --v24->SpecialApcDisable;
    ++v24->AbAllocationRegionCount;
    LODWORD(v26) = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
    LOBYTE(v59) = v24->AbAllocationRegionCount;
    v27 = v23 & 0x7FFFFFFFFFFFFFFCLL;
    v28 = !_BitScanReverse((unsigned int *)&v29, v26);
    v54 = v29;
    if ( v28 )
      goto LABEL_52;
    while ( 1 )
    {
      v30 = 1 << v29;
      v31 = v29;
      v32 = &v24->LockEntries[v31];
      v26 = ~v30 & (unsigned int)v26;
      if ( (v32->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v32->LockState.0 & 1) == 0
        && (*(_QWORD *)&v32->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v27
        && v32->LockState.SessionId == (_DWORD)v25 )
      {
        v32->AcquiredByte &= ~1u;
        if ( v32->LockState.0 )
          break;
      }
      v28 = !_BitScanReverse((unsigned int *)&v29, v26);
      v54 = v29;
      if ( v28 )
        goto LABEL_52;
    }
    if ( !v32 )
    {
LABEL_52:
      if ( (*((_DWORD *)&v24->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, v25, 0LL);
    }
    else
    {
      v32->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v32->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree((__int64)&v24->LockEntries[v31], v26, v27);
      v49 = 0;
      v49 = v32->BoostBitmap.AllFields & 0x1FFFF;
      v32->BoostBitmap.AllFields &= 0xFFFE0000;
      v32->ThreadLocalFlags &= ~1u;
      v32->LockState.0 = 0LL;
      v33 = ((char *)v32 - (char *)v24 - 800) / 96;
      if ( (_BYTE)v59 == 1 )
        v24->AbEntrySummary |= 1 << v33;
      else
        _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v33);
    }
    --v24->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v24->Header.Lock, v23, (unsigned int *)&v49);
    v34 = v24->SpecialApcDisable + 1;
    v24->SpecialApcDisable = v34;
    if ( !v34 && ($69CD3F157F9F39B6F7113F2231989901 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v21 = v50;
  }
  if ( v12 )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v48 + 60) & 0x3FF)),
      v21 != 0,
      v12);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)SubsectionCharges;
}
