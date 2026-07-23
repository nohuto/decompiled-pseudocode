/*
 * XREFs of MiCreatePrototypePtes @ 0x14004AB9C
 * Callers:
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404BD1E0 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCreatePrototypePtes(
        __int64 *BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // r13
  PVOID PoolWithTag; // rax
  void *v10; // r15
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 CommittedPages; // rsi
  int v15; // r11d
  int v16; // eax
  __int64 v17; // rcx
  KIRQL v18; // r15
  int v19; // eax
  int v20; // r12d
  bool v21; // cf
  void *v22; // r12
  int SubsectionCharges; // r15d
  __int64 v25; // rdx
  ULONG_PTR v26; // r14
  struct _KTHREAD *v27; // rbx
  ULONG_PTR v28; // r9
  unsigned int v29; // edx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  _KLOCK_ENTRY *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rbx
  int FileExtents; // ebx
  bool v37; // zf
  ULONG_PTR v38; // r15
  struct _KTHREAD *v39; // rbx
  unsigned int SessionId; // edx
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rdx
  int v45; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v46; // [rsp+38h] [rbp-38h]
  PVOID v47; // [rsp+40h] [rbp-30h]
  int v48; // [rsp+48h] [rbp-28h]
  unsigned int v49; // [rsp+4Ch] [rbp-24h]
  int v50; // [rsp+50h] [rbp-20h]
  __int64 v51; // [rsp+58h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-10h]
  int v53; // [rsp+B0h] [rbp+40h] BYREF
  int v54; // [rsp+C8h] [rbp+58h]

  v5 = *BugCheckParameter2;
  v54 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  v47 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v11 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes(PoolWithTag, a4, BugCheckParameter2, v11 == 0);
  v12 = *(_QWORD *)(v5 + 64);
  v46 = v12;
  if ( v11 )
  {
    FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 5);
    if ( FileExtents < 0 )
      ExFreePoolWithTag(v10, 0);
    return (unsigned int)FileExtents;
  }
  v13 = v12;
  if ( v12 )
    CommittedPages = a3;
  else
    CommittedPages = MiGetCommittedPages(v5);
  v15 = 1;
  if ( (a2 & 4) != 0 )
  {
    v16 = 1;
    goto LABEL_7;
  }
  if ( (a2 & 0x80u) != 0 )
    v25 = 3LL;
  else
    v25 = (a2 >> 7) & 2;
  v16 = MiControlAreaRequiresCharge(v5, v25);
  if ( v16 )
  {
LABEL_7:
    v17 = v16;
    v51 = v16;
    while ( 1 )
    {
      if ( v17 == 2 )
      {
        if ( CommittedPages )
        {
          SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
          v15 = 1;
          if ( SubsectionCharges < 0 )
          {
            CommittedPages = 0LL;
            goto LABEL_59;
          }
        }
      }
      else
      {
        CommittedPages = 0LL;
      }
      if ( !v13 )
      {
        v54 = v15;
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v5 + 40LL, 0LL);
      }
      v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      if ( v51 != 2 )
        break;
      v37 = v13
          ? CommittedPages == *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFF)
          : CommittedPages == MiGetCommittedPages(v5);
      if ( v37 )
        break;
      v49 = CommittedPages;
      if ( v13 )
        CommittedPages = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages(v5);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      __writecr8(v18);
      if ( !v13 )
      {
        v38 = *(_QWORD *)v5 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v38);
        v53 = 0;
        v39 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v38) == 1 )
          SessionId = MmGetSessionIdEx(v39->ApcState.Process);
        else
          SessionId = -1;
        --v39->SpecialApcDisable;
        ++v39->AbAllocationRegionCount;
        v41 = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
        LOBYTE(v54) = v39->AbAllocationRegionCount;
        v37 = !_BitScanReverse((unsigned int *)&v42, v41);
        v48 = v42;
        if ( v37 )
          goto LABEL_98;
        while ( 1 )
        {
          v43 = (__int64)&v39->LockEntries[v42];
          v41 &= ~(1 << v42);
          if ( (*(_BYTE *)(v43 + 26) & 1) != 0
            && (*(_DWORD *)(v43 + 32) & 1) == 0
            && (*(_QWORD *)(v43 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v38 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v43 + 40) == SessionId )
          {
            *(_BYTE *)(v43 + 26) &= ~1u;
            if ( *(_QWORD *)(v43 + 32) )
              break;
          }
          v37 = !_BitScanReverse((unsigned int *)&v42, v41);
          v48 = v42;
          if ( v37 )
            goto LABEL_98;
        }
        if ( !v43 )
        {
LABEL_98:
          if ( (*((_DWORD *)&v39->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v39, v38, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v43 + 32) |= 2u;
          if ( *(__int64 *)(v43 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v43);
          v53 = 0;
          v53 = *(_DWORD *)(v43 + 88) & 0x1FFFF;
          *(_DWORD *)(v43 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v43 + 25) &= ~1u;
          *(_QWORD *)(v43 + 32) = 0LL;
          v44 = (v43 - (__int64)v39 - 800) / 96;
          if ( (_BYTE)v54 == 1 )
            v39->AbEntrySummary |= 1 << v44;
          else
            _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v44);
        }
        --v39->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v39, v38, &v53);
        v37 = v39->SpecialApcDisable++ == -1;
        if ( v37 && ($005F0E83B22994B61E86C72E0CE43C71 *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        v13 = v46;
        v54 = 0;
      }
      v15 = 1;
      v17 = v51;
      if ( v49 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
          v13 != 0,
          v49);
        v17 = v51;
        v15 = 1;
      }
    }
    v19 = MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    v20 = v19;
    if ( v19 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      __writecr8(v18);
      SubsectionCharges = -1073741670;
    }
    else
    {
      if ( v19 == 3 )
        CommittedPages = 0LL;
      if ( v46 )
        *((_WORD *)BugCheckParameter2 + 16) |= 1u;
      if ( !BugCheckParameter2[1] )
      {
        v13 = v46;
        v21 = v46 != 0;
        BugCheckParameter2[1] = (__int64)v47;
        MiUpdateSystemProtoPtesTree((char *)BugCheckParameter2 + (v21 ? 112LL : 56LL), 1LL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        __writecr8(v18);
        v22 = 0LL;
        SubsectionCharges = 0;
        v15 = 1;
        goto LABEL_20;
      }
      v35 = MiDecrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      __writecr8(v18);
      SubsectionCharges = -1073741302;
      if ( v20 == 3 )
        CommittedPages = v35;
    }
    v13 = v46;
    v15 = 1;
    goto LABEL_59;
  }
  CommittedPages = 0LL;
  SubsectionCharges = -1073740277;
LABEL_59:
  v22 = v47;
LABEL_20:
  if ( !v13 && v54 == v15 )
  {
    v26 = *(_QWORD *)v5 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    v45 = 0;
    v27 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v26) == 1 )
      v28 = (unsigned int)MmGetSessionIdEx(v27->ApcState.Process);
    else
      v28 = 0xFFFFFFFFLL;
    --v27->SpecialApcDisable;
    ++v27->AbAllocationRegionCount;
    v29 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    LOBYTE(v54) = v27->AbAllocationRegionCount;
    v37 = !_BitScanReverse((unsigned int *)&v30, v29);
    v50 = v30;
    if ( v37 )
      goto LABEL_54;
    while ( 1 )
    {
      v31 = 1 << v30;
      v32 = v30;
      v33 = &v27->LockEntries[v32];
      v29 &= ~v31;
      if ( (v33->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v33->LockState.0 & 1) == 0
        && (*(_QWORD *)&v33->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v26 & 0x7FFFFFFFFFFFFFFCLL)
        && v33->LockState.SessionId == (_DWORD)v28 )
      {
        v33->AcquiredByte &= ~1u;
        if ( v33->LockState.0 )
          break;
      }
      v37 = !_BitScanReverse((unsigned int *)&v30, v29);
      v50 = v30;
      if ( v37 )
        goto LABEL_54;
    }
    if ( !v33 )
    {
LABEL_54:
      if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v27, v26, v28, 0LL);
    }
    else
    {
      v33->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v33->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v27->LockEntries[v32].TreeNode);
      v45 = 0;
      v45 = v33->BoostBitmap.AllFields & 0x1FFFF;
      v33->BoostBitmap.AllFields &= 0xFFFE0000;
      v33->ThreadLocalFlags &= ~1u;
      v33->LockState.0 = 0LL;
      v34 = ((char *)v33 - (char *)v27 - 800) / 96;
      if ( (_BYTE)v54 == 1 )
        v27->AbEntrySummary |= 1 << v34;
      else
        _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v34);
    }
    --v27->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v27, v26, &v45);
    v37 = v27->SpecialApcDisable++ == -1;
    if ( v37 && ($005F0E83B22994B61E86C72E0CE43C71 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v13 = v46;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
      v13 != 0,
      CommittedPages);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return (unsigned int)SubsectionCharges;
}
