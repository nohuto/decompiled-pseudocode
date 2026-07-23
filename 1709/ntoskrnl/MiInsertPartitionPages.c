/*
 * XREFs of MiInsertPartitionPages @ 0x140237794
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1406EDB48 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406EE0EC (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x14014FE60 (MiComputeCommitThresholds.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReduceCommitLimits @ 0x1402223B4 (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x1402369EC (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x140237550 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x1402375C0 (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x140237FA0 (MiMergePageNodes.c)
 *     RtlNumberOfSetBitsEx @ 0x140253360 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiMakePartitionMemoryBlock @ 0x1406EE348 (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiInsertPartitionPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 *v9; // rsi
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rcx
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r12
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r12d
  __m128i v26; // xmm2
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rcx
  unsigned __int64 v33; // r14
  unsigned __int64 *v34; // rdi
  _QWORD *v35; // rsi
  _QWORD *i; // rax
  unsigned __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rcx
  unsigned __int64 v40; // r15
  _QWORD *v41; // rdx
  unsigned __int64 v42; // rbx
  int v43; // eax
  int v44; // edi
  _QWORD *v45; // rdx
  bool v46; // r8
  _QWORD *v47; // rax
  struct _KTHREAD *v48; // rbx
  ULONG_PTR v49; // r9
  unsigned __int8 v50; // si
  unsigned int v51; // edx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  PVOID *v61; // rax
  PVOID *v62; // rbx
  PVOID *v63; // rax
  PVOID *v64; // rdi
  PVOID *v65; // rcx
  int v67; // [rsp+38h] [rbp-89h] BYREF
  int v68; // [rsp+3Ch] [rbp-85h]
  struct _KTHREAD *v69; // [rsp+40h] [rbp-81h]
  _QWORD *v70; // [rsp+48h] [rbp-79h] BYREF
  int v71; // [rsp+50h] [rbp-71h]
  int v72; // [rsp+54h] [rbp-6Dh]
  unsigned __int64 *v73; // [rsp+58h] [rbp-69h]
  _BYTE v74[56]; // [rsp+60h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-29h] BYREF
  __int16 *v76[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v77; // [rsp+C0h] [rbp-1h]
  __int128 v78; // [rsp+D0h] [rbp+Fh]
  __int64 v79; // [rsp+E0h] [rbp+1Fh]
  int v80; // [rsp+128h] [rbp+67h] BYREF
  __int64 v81; // [rsp+130h] [rbp+6Fh]
  __int64 v82; // [rsp+138h] [rbp+77h]

  v82 = a3;
  v81 = a2;
  v4 = a2;
  memset(&v74[8], 0, 0x30uLL);
  CurrentThread = KeGetCurrentThread();
  v68 = 0;
  v70 = 0LL;
  v9 = *(unsigned __int64 **)a3;
  v10 = *(_DWORD *)(a3 + 24);
  v73 = *(unsigned __int64 **)a3;
  *(_QWORD *)&v74[8] = a1;
  *(_QWORD *)v74 = v4;
  v69 = CurrentThread;
  if ( (v10 & 2) != 0 )
  {
    v11 = (_QWORD *)*v9;
    v12 = 0LL;
    while ( v11 )
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
    }
    while ( v12 )
    {
      v13 = (_QWORD *)v12[1];
      v14 = (__int64)v12;
      v15 = v12;
      if ( v13 )
      {
        do
        {
          v12 = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v13 );
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v12 || (_QWORD *)*v12 == v15 )
            break;
          v15 = v12;
        }
      }
      MiActOnPartitionNodePages(v14, 8u, (__int16 **)v74);
    }
    CurrentThread = v69;
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_140388AF8, a4);
  }
  else
  {
    MiClearPartitionPageBitMap(a1, (_QWORD **)v9);
    MiReduceCommitLimits((_QWORD *)a1, a4, a4);
    MiReturnCommit(a1, a4);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
    MiMakePartitionMemoryBlock(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 184));
    v80 = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 184) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    else
      SessionId = -1;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      v71 = v21;
      if ( v20 )
        break;
      v22 = (__int64)&v16->LockEntries[v21];
      v19 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 184) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v22 + 40) == SessionId )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
            v80 = 0;
            v80 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
            *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            *(_QWORD *)(v22 + 32) = 0LL;
            v23 = (v22 - (__int64)v16 - 800) / 96;
            if ( v18 == 1 )
              v16->AbEntrySummary |= 1 << v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
            goto LABEL_34;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, a1 + 184, SessionId, 0LL);
LABEL_34:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, a1 + 184, (unsigned int *)&v80);
    v20 = v16->SpecialApcDisable++ == -1;
    if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v24);
    CurrentThread = v69;
    KiLeaveGuardedRegionUnsafe((__int64)v69);
    v4 = v81;
    v9 = v73;
  }
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_140388AF8, -(__int64)a4);
    v68 = MiFreePartitionTree((__int16 *)v4, v9, *(_DWORD *)(a3 + 24), 1);
    v25 = v68;
    if ( v68 >= 0 )
      goto LABEL_103;
    v26 = *(__m128i *)v74;
    *(_DWORD *)(a3 + 24) &= ~4u;
    v27 = 0LL;
    v28 = (_QWORD *)*v9;
    v4 = a1;
    v29 = 0LL;
    v76[1] = (__int16 *)v26.m128i_i64[0];
    v77 = *(_OWORD *)&v74[16];
    v76[0] = (__int16 *)_mm_srli_si128(v26, 8).m128i_u64[0];
    v78 = *(_OWORD *)&v74[32];
    v79 = *(_QWORD *)&v74[48];
    while ( v28 )
    {
      v29 = v28;
      v28 = (_QWORD *)*v28;
    }
    while ( v29 )
    {
      v30 = (_QWORD *)v29[1];
      v31 = (__int64)v29;
      v32 = v29;
      if ( v30 )
      {
        do
        {
          v29 = v30;
          v30 = (_QWORD *)*v30;
        }
        while ( v30 );
      }
      else
      {
        while ( 1 )
        {
          v29 = (_QWORD *)(v29[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v29 || (_QWORD *)*v29 == v32 )
            break;
          v32 = v29;
        }
      }
      v27 += RtlNumberOfSetBitsEx(v31 + 32);
      if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
        MiActOnPartitionNodePages(v31, 8u, v76);
    }
    _InterlockedExchangeAdd64(&qword_140388AF8, v27);
    CurrentThread = v69;
  }
  if ( !v4 )
    goto LABEL_102;
  --CurrentThread->SpecialApcDisable;
  v33 = v4 + 184;
  ExAcquirePushLockExclusiveEx(v4 + 184, 0LL);
  v34 = v73;
  v35 = 0LL;
  for ( i = (_QWORD *)*v73; i; i = (_QWORD *)*i )
    v35 = i;
  if ( !v35 )
    goto LABEL_79;
  do
  {
    v37 = (unsigned __int64)v35;
    v38 = RtlNumberOfSetBitsEx(v35 + 4);
    v39 = (_QWORD *)v35[1];
    v40 = v38;
    v41 = v35;
    if ( v39 )
    {
      do
      {
        v35 = v39;
        v39 = (_QWORD *)*v39;
      }
      while ( v39 );
    }
    else
    {
      while ( 1 )
      {
        v35 = (_QWORD *)(v35[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v35 || (_QWORD *)*v35 == v41 )
          break;
        v41 = v35;
      }
    }
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 192));
    RtlAvlRemoveNode(v34, v37);
    v43 = MiMergePageNodes(v4, v37);
    *(_QWORD *)(v4 + 5776) += v40;
    v44 = v43;
    *(_BYTE *)(v4 + 12) = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 192));
    __writecr8(v42);
    MiIncreaseCommitLimits(v4, v40, v40, 1, 0LL);
    MiFreePartitionNodePages((__int16 *)v4, v37, *(_DWORD *)(v82 + 24));
    if ( v44 != 1 )
      goto LABEL_77;
    v45 = v70;
    v46 = 0;
    if ( !v70 )
      goto LABEL_76;
    while ( (*(_QWORD *)(v37 + 24) & 0x7FFFFFFFFFFFFFFFuLL) >= (v45[3] & 0x7FFFFFFFFFFFFFFFuLL) )
    {
      v47 = (_QWORD *)v45[1];
      if ( !v47 )
      {
        v46 = 1;
        goto LABEL_76;
      }
LABEL_74:
      v45 = v47;
    }
    v47 = (_QWORD *)*v45;
    if ( *v45 )
      goto LABEL_74;
    v46 = 0;
LABEL_76:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v70, (unsigned __int64)v45, v46, v37);
LABEL_77:
    v34 = v73;
  }
  while ( v35 );
  v33 = v4 + 184;
LABEL_79:
  MiMakePartitionMemoryBlock(v4);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v33);
  v67 = 0;
  v48 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v33) == 1 )
    v49 = (unsigned int)MmGetSessionIdEx((__int64)v48->ApcState.Process);
  else
    v49 = 0xFFFFFFFFLL;
  --v48->SpecialApcDisable;
  v50 = ++v48->AbAllocationRegionCount;
  v51 = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v55, v51);
    v72 = v55;
    if ( v20 )
      goto LABEL_91;
    v52 = 1 << v55;
    v53 = v55;
    v54 = &v48->LockEntries[v53];
    v51 &= ~v52;
    if ( (v54->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v54->LockState.0 & 1) == 0
      && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v33 & 0x7FFFFFFFFFFFFFFCLL)
      && v54->LockState.SessionId == (_DWORD)v49 )
    {
      v54->AcquiredByte &= ~1u;
      if ( v54->LockState.0 )
        break;
    }
  }
  if ( !v54 )
  {
LABEL_91:
    if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v48, v33, v49, 0LL);
    goto LABEL_98;
  }
  v54->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v54->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v48->LockEntries[v53].TreeNode);
  v67 = 0;
  v67 = v54->BoostBitmap.AllFields & 0x1FFFF;
  v54->BoostBitmap.AllFields &= 0xFFFE0000;
  v54->ThreadLocalFlags &= ~1u;
  v54->LockState.0 = 0LL;
  v56 = ((char *)v54 - (char *)v48 - 800) / 96;
  if ( v50 == 1 )
    v48->AbEntrySummary |= 1 << v56;
  else
    _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v56);
LABEL_98:
  --v48->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v48, v33, (unsigned int *)&v67);
  v20 = v48->SpecialApcDisable++ == -1;
  if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
    KiCheckForKernelApcDelivery(v57);
  KiLeaveGuardedRegionUnsafe((__int64)v69);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 5096), &LockHandle);
  MiComputeCommitThresholds((_QWORD *)v4, v58, v59, v60);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
LABEL_102:
  v25 = v68;
LABEL_103:
  v61 = (PVOID *)v70;
  v62 = 0LL;
  while ( v61 )
  {
    v62 = v61;
    v61 = (PVOID *)*v61;
  }
  while ( v62 )
  {
    v63 = (PVOID *)v62[1];
    v64 = v62;
    v65 = v62;
    if ( v63 )
    {
      do
      {
        v62 = v63;
        v63 = (PVOID *)*v63;
      }
      while ( v63 );
    }
    else
    {
      while ( 1 )
      {
        v62 = (PVOID *)((unsigned __int64)v62[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v62 || *v62 == v65 )
          break;
        v65 = v62;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v70, (__int64)v64);
    ExFreePoolWithTag(v64[5], 0);
    ExFreePoolWithTag(v64, 0);
  }
  return v25;
}
