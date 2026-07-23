/*
 * XREFs of MiInsertPartitionPages @ 0x14021E090
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406BCDD0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiIncreaseCommitLimits @ 0x140159BD4 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x140159CC0 (MiComputeCommitThresholds.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReduceCommitLimits @ 0x1402180F8 (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x14021D530 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x14021DE78 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14021DF3C (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x14021E7A8 (MiMergePageNodes.c)
 *     RtlNumberOfSetBitsEx @ 0x14023D690 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiMakePartitionMemoryBlock @ 0x1406BCFEC (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiInsertPartitionPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  __int16 *v13; // rbx
  ULONG_PTR v14; // rsi
  struct _KTHREAD *v15; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // ax
  unsigned __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  unsigned __int64 v32; // rbx
  int v33; // edi
  _QWORD *v34; // rdx
  bool v35; // r8
  _QWORD *v36; // rax
  struct _KTHREAD *v37; // rbx
  ULONG_PTR v38; // r9
  unsigned __int8 v39; // si
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  _KLOCK_ENTRY *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int16 v47; // ax
  PVOID *v48; // rax
  PVOID *v49; // rbx
  PVOID *v50; // rax
  PVOID *v51; // rdi
  PVOID *v52; // rcx
  _QWORD *v53; // [rsp+30h] [rbp-69h] BYREF
  int v54; // [rsp+38h] [rbp-61h]
  unsigned __int64 v55; // [rsp+40h] [rbp-59h]
  struct _KTHREAD *v56; // [rsp+48h] [rbp-51h]
  unsigned __int64 *v57; // [rsp+50h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-41h] BYREF
  __int16 *v59[16]; // [rsp+70h] [rbp-29h] BYREF
  int v60; // [rsp+100h] [rbp+67h] BYREF
  int v61; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v62; // [rsp+110h] [rbp+77h]
  int v63; // [rsp+118h] [rbp+7Fh]

  v62 = a3;
  v4 = a3;
  memset(&v59[1], 0, 0x30uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = *(unsigned __int64 **)v4;
  v8 = 0LL;
  v53 = 0LL;
  v59[1] = (__int16 *)a1;
  v59[0] = (__int16 *)a2;
  v9 = (_QWORD *)*v7;
  v56 = CurrentThread;
  v57 = v7;
  while ( v9 )
  {
    v8 = v9;
    v9 = (_QWORD *)*v9;
  }
  while ( v8 )
  {
    v10 = (_QWORD *)v8[1];
    v11 = (__int64)v8;
    v12 = v8;
    if ( v10 )
    {
      do
      {
        v8 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v12 )
          break;
        v12 = v8;
      }
    }
    MiActOnPartitionNodePages(v11, 7, v59);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14036C900, (unsigned __int64)v59[5]);
  }
  else
  {
    MiClearPartitionPageBitMap(a1, (_QWORD **)v7);
    v13 = v59[5];
    MiReduceCommitLimits((_QWORD *)a1, (__int64)v59[5], (__int64)v59[5]);
    MiReturnCommit(a1, (unsigned __int64)v13);
    --CurrentThread->SpecialApcDisable;
    v14 = a1 + 224;
    ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
    MiMakePartitionMemoryBlock(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 224));
    v60 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 224) == 1 )
      SessionId = MmGetSessionIdEx(v15->ApcState.Process);
    else
      SessionId = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount;
    LODWORD(v18) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v18);
      v63 = v21;
      if ( v20 )
        goto LABEL_27;
      v19 = (__int64)&v15->LockEntries[v21];
      v18 = ~(1 << v21) & (unsigned int)v18;
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == SessionId )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
          break;
      }
    }
    if ( !v19 )
    {
LABEL_27:
      if ( (*((_DWORD *)&v15->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, SessionId, 0LL);
      goto LABEL_34;
    }
    *(_BYTE *)(v19 + 32) |= 2u;
    if ( *(__int64 *)(v19 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19, v18);
    v60 = 0;
    v60 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
    *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v19 + 25) &= ~1u;
    *(_QWORD *)(v19 + 32) = 0LL;
    v22 = (v19 - (__int64)v15 - 800) / 96;
    if ( v17 == 1 )
      v15->AbEntrySummary |= 1 << v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
LABEL_34:
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v15->Header.Lock, v14, (unsigned int *)&v60);
    v24 = v15->SpecialApcDisable + 1;
    v15->SpecialApcDisable = v24;
    if ( !v24 && ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery(v23);
    CurrentThread = v56;
    KiLeaveGuardedRegionUnsafe((__int64)v56);
    v4 = v62;
  }
  if ( (ULONG_PTR *)a2 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14036C900, -(__int64)v59[5]);
    MiFreePartitionTree((__int16 *)a2, v7, *(_DWORD *)(v4 + 24));
    goto LABEL_85;
  }
  --CurrentThread->SpecialApcDisable;
  v25 = a2 + 224;
  ExAcquirePushLockExclusiveEx(a2 + 224, 0LL);
  v26 = (_QWORD *)*v7;
  v27 = 0LL;
  while ( v26 )
  {
    v27 = v26;
    v26 = (_QWORD *)*v26;
  }
  if ( !v27 )
    goto LABEL_62;
  do
  {
    v28 = (unsigned __int64)v27;
    v29 = RtlNumberOfSetBitsEx(v27 + 4);
    v30 = (_QWORD *)v27[1];
    v31 = v27;
    v55 = v29;
    if ( v30 )
    {
      do
      {
        v27 = v30;
        v30 = (_QWORD *)*v30;
      }
      while ( v30 );
    }
    else
    {
      while ( 1 )
      {
        v27 = (_QWORD *)(v27[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v27 || (_QWORD *)*v27 == v31 )
          break;
        v31 = v27;
      }
    }
    v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 232));
    RtlAvlRemoveNode(v57, v28);
    v33 = MiMergePageNodes(a2, v28);
    *(_BYTE *)(a2 + 12) = 1;
    *(_QWORD *)(a2 + 5584) += v55;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 232));
    __writecr8(v32);
    MiIncreaseCommitLimits(a2, v55, v55, 1, 0LL);
    MiFreePartitionNodePages((__int16 *)a2, v28, *(_DWORD *)(v62 + 24));
    if ( v33 != 1 )
      continue;
    v34 = v53;
    v35 = 0;
    if ( !v53 )
      goto LABEL_59;
    while ( (*(_QWORD *)(v28 + 24) & 0x7FFFFFFFFFFFFFFFuLL) >= (v34[3] & 0x7FFFFFFFFFFFFFFFuLL) )
    {
      v36 = (_QWORD *)v34[1];
      if ( !v36 )
      {
        v35 = 1;
        goto LABEL_59;
      }
LABEL_57:
      v34 = v36;
    }
    v36 = (_QWORD *)*v34;
    if ( *v34 )
      goto LABEL_57;
    v35 = 0;
LABEL_59:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v53, (unsigned __int64)v34, v35, v28);
  }
  while ( v27 );
  v25 = a2 + 224;
LABEL_62:
  MiMakePartitionMemoryBlock(a2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v25);
  v61 = 0;
  v37 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
    v38 = (unsigned int)MmGetSessionIdEx(v37->ApcState.Process);
  else
    v38 = 0xFFFFFFFFLL;
  --v37->SpecialApcDisable;
  v39 = ++v37->AbAllocationRegionCount;
  LODWORD(v40) = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
  v20 = !_BitScanReverse((unsigned int *)&v41, v40);
  v54 = v41;
  if ( v20 )
    goto LABEL_74;
  while ( 1 )
  {
    v42 = 1 << v41;
    v43 = v41;
    v44 = &v37->LockEntries[v43];
    v40 = ~v42 & (unsigned int)v40;
    if ( (v44->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v44->LockState.0 & 1) == 0
      && (*(_QWORD *)&v44->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v25 & 0x7FFFFFFFFFFFFFFCLL)
      && v44->LockState.SessionId == (_DWORD)v38 )
    {
      v44->AcquiredByte &= ~1u;
      if ( v44->LockState.0 )
        break;
    }
    v20 = !_BitScanReverse((unsigned int *)&v41, v40);
    v54 = v41;
    if ( v20 )
      goto LABEL_74;
  }
  if ( !v44 )
  {
LABEL_74:
    if ( (*((_DWORD *)&v37->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v37, v25, v38, 0LL);
  }
  else
  {
    v44->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v44->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v37->LockEntries[v43].TreeNode, v40);
    v61 = 0;
    v61 = v44->BoostBitmap.AllFields & 0x1FFFF;
    v44->BoostBitmap.AllFields &= 0xFFFE0000;
    v44->ThreadLocalFlags &= ~1u;
    v44->LockState.0 = 0LL;
    v45 = ((char *)v44 - (char *)v37 - 800) / 96;
    if ( v39 == 1 )
      v37->AbEntrySummary |= 1 << v45;
    else
      _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v45);
  }
  --v37->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v37->Header.Lock, v25, (unsigned int *)&v61);
  v47 = v37->SpecialApcDisable + 1;
  v37->SpecialApcDisable = v47;
  if ( !v47 && ($69CD3F157F9F39B6F7113F2231989901 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
    KiCheckForKernelApcDelivery(v46);
  KiLeaveGuardedRegionUnsafe((__int64)v56);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 4968), &LockHandle);
  MiComputeCommitThresholds((_QWORD *)a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
LABEL_85:
  v48 = (PVOID *)v53;
  v49 = 0LL;
  while ( v48 )
  {
    v49 = v48;
    v48 = (PVOID *)*v48;
  }
  while ( v49 )
  {
    v50 = (PVOID *)v49[1];
    v51 = v49;
    v52 = v49;
    if ( v50 )
    {
      do
      {
        v49 = v50;
        v50 = (PVOID *)*v50;
      }
      while ( v50 );
    }
    else
    {
      while ( 1 )
      {
        v49 = (PVOID *)((unsigned __int64)v49[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v49 || *v49 == v52 )
          break;
        v52 = v49;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v53, (__int64)v51);
    ExFreePoolWithTag(v51[5], 0);
    ExFreePoolWithTag(v51, 0);
  }
}
