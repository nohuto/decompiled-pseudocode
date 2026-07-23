/*
 * XREFs of MiInsertPartitionPages @ 0x14026F364
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140756FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x14075757C (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncreaseCommitLimits @ 0x14017DC60 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x14017DD4C (MiComputeCommitThresholds.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReduceCommitLimits @ 0x140265970 (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x14026E3BC (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x14026F120 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14026F18C (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x14026FBA8 (MiMergePageNodes.c)
 *     RtlNumberOfSetBitsEx @ 0x1402889D0 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiMakePartitionMemoryBlock @ 0x140757804 (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiInsertPartitionPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r12
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD **v10; // rsi
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  _QWORD **v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v22; // r12
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned int v28; // r12d
  __m128i v29; // xmm2
  unsigned __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *j; // rbx
  _QWORD **v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  unsigned __int64 v37; // r14
  unsigned __int64 *v38; // rdi
  _QWORD *v39; // rsi
  _QWORD *k; // rax
  _QWORD *v41; // r13
  __int64 v42; // rax
  _QWORD **v43; // rcx
  unsigned __int64 v44; // r15
  _QWORD *v45; // rdx
  _QWORD *m; // rcx
  unsigned __int64 v47; // rbx
  int v48; // eax
  int v49; // edi
  _QWORD *v50; // rdx
  bool v51; // r8
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  struct _KTHREAD *v56; // rbx
  ULONG_PTR v57; // r9
  unsigned __int8 v58; // si
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  _KLOCK_ENTRY *v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rdx
  PVOID *v65; // rax
  PVOID *n; // rbx
  PVOID **v67; // rax
  PVOID *v68; // rdi
  PVOID *v69; // rcx
  PVOID *v70; // rcx
  int v72; // [rsp+38h] [rbp-89h] BYREF
  int v73; // [rsp+3Ch] [rbp-85h]
  struct _KTHREAD *v74; // [rsp+40h] [rbp-81h]
  _QWORD *v75; // [rsp+48h] [rbp-79h] BYREF
  int v76; // [rsp+50h] [rbp-71h]
  int v77; // [rsp+54h] [rbp-6Dh]
  _QWORD *v78; // [rsp+58h] [rbp-69h]
  _BYTE v79[56]; // [rsp+60h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-29h] BYREF
  __int16 *v81[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v82; // [rsp+C0h] [rbp-1h]
  __int128 v83; // [rsp+D0h] [rbp+Fh]
  __int64 v84; // [rsp+E0h] [rbp+1Fh]
  int v85; // [rsp+128h] [rbp+67h] BYREF
  __int64 v86; // [rsp+130h] [rbp+6Fh]
  __int64 v87; // [rsp+138h] [rbp+77h]

  v87 = a3;
  v86 = a2;
  v4 = a2;
  memset(v79, 0, sizeof(v79));
  v73 = 0;
  v75 = 0LL;
  v8 = *(_DWORD *)(a3 + 24);
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD ***)a3;
  *(_QWORD *)&v79[8] = a1;
  *(_QWORD *)v79 = v4;
  v74 = CurrentThread;
  v78 = v10;
  if ( (v8 & 2) != 0 )
  {
    v11 = *v10;
    i = 0LL;
    while ( v11 )
    {
      i = v11;
      v11 = (_QWORD *)*v11;
    }
    while ( i )
    {
      v13 = (_QWORD **)i[1];
      v14 = (__int64)i;
      v15 = i;
      if ( v13 )
      {
        v16 = *v13;
        for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
          i = v16;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v15 )
            break;
          v15 = i;
        }
      }
      MiActOnPartitionNodePages(v14, 8u, (__int16 **)v79);
    }
    CurrentThread = v74;
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_1403CBD90, a4);
  }
  else
  {
    MiClearPartitionPageBitMap(a1, v10);
    MiReduceCommitLimits((_QWORD *)a1, a4, a4);
    MiReturnCommit(a1, a4);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
    MiMakePartitionMemoryBlock(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 184), v17, v18, v19);
    v85 = 0;
    v20 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 184) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v20->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v20->SpecialApcDisable;
    v22 = ++v20->AbAllocationRegionCount;
    v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v25, v23);
      v76 = v25;
      if ( v24 )
        break;
      v26 = (__int64)&v20->LockEntries[v25];
      v23 &= ~(1 << v25);
      if ( (*(_BYTE *)(v26 + 26) & 1) != 0
        && (*(_DWORD *)(v26 + 32) & 1) == 0
        && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 184) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v26 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v26 + 26) &= ~1u;
        if ( *(_QWORD *)(v26 + 32) )
        {
          if ( v26 )
          {
            *(_BYTE *)(v26 + 32) |= 2u;
            if ( *(__int64 *)(v26 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26, SessionId);
            v85 = 0;
            v85 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
            *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v26 + 25) &= ~1u;
            *(_QWORD *)(v26 + 32) = 0LL;
            v27 = (v26 - (__int64)v20 - 800) / 96;
            if ( v22 == 1 )
              v20->AbEntrySummary |= 1 << v27;
            else
              _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v27);
            goto LABEL_35;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, a1 + 184, (unsigned int)SessionId, 0LL);
LABEL_35:
    --v20->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v20, a1 + 184, (__int64)&v85);
    v24 = v20->SpecialApcDisable++ == -1;
    if ( v24 && ($005F0E83B22994B61E86C72E0CE43C71 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
      KiCheckForKernelApcDelivery();
    CurrentThread = v74;
    KiLeaveGuardedRegionUnsafe((__int64)v74);
    v4 = v86;
    v10 = (_QWORD **)v78;
  }
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_1403CBD90, -(__int64)a4);
    v73 = MiFreePartitionTree((__int16 *)v4, (unsigned __int64 *)v10, *(_DWORD *)(a3 + 24), 1);
    v28 = v73;
    if ( v73 >= 0 )
      goto LABEL_106;
    v29 = *(__m128i *)v79;
    *(_DWORD *)(a3 + 24) &= ~4u;
    v30 = 0LL;
    v31 = *v10;
    v4 = a1;
    j = 0LL;
    v81[1] = (__int16 *)v29.m128i_i64[0];
    v82 = *(_OWORD *)&v79[16];
    v81[0] = (__int16 *)_mm_srli_si128(v29, 8).m128i_u64[0];
    v83 = *(_OWORD *)&v79[32];
    v84 = *(_QWORD *)&v79[48];
    while ( v31 )
    {
      j = v31;
      v31 = (_QWORD *)*v31;
    }
    while ( j )
    {
      v33 = (_QWORD **)j[1];
      v34 = (__int64)j;
      v35 = j;
      if ( v33 )
      {
        v36 = *v33;
        for ( j = (_QWORD *)j[1]; v36; v36 = (_QWORD *)*v36 )
          j = v36;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v35 )
            break;
          v35 = j;
        }
      }
      v30 += RtlNumberOfSetBitsEx(v34 + 32);
      if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
        MiActOnPartitionNodePages(v34, 8u, v81);
    }
    _InterlockedExchangeAdd64(&qword_1403CBD90, v30);
    CurrentThread = v74;
  }
  if ( !v4 )
    goto LABEL_105;
  --CurrentThread->SpecialApcDisable;
  v37 = v4 + 184;
  ExAcquirePushLockExclusiveEx(v4 + 184, 0LL);
  v38 = v78;
  v39 = 0LL;
  for ( k = (_QWORD *)*v78; k; k = (_QWORD *)*k )
    v39 = k;
  if ( !v39 )
    goto LABEL_82;
  do
  {
    v41 = v39;
    v42 = RtlNumberOfSetBitsEx(v39 + 4);
    v43 = (_QWORD **)v39[1];
    v44 = v42;
    v45 = v39;
    if ( v43 )
    {
      v39 = (_QWORD *)v39[1];
      for ( m = *v43; m; m = (_QWORD *)*m )
        v39 = m;
    }
    else
    {
      while ( 1 )
      {
        v39 = (_QWORD *)(v39[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v39 || (_QWORD *)*v39 == v45 )
          break;
        v45 = v39;
      }
    }
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 192));
    RtlAvlRemoveNode(v38, (__int64)v41);
    v48 = MiMergePageNodes(v4, v41);
    *(_QWORD *)(v4 + 6864) += v44;
    v49 = v48;
    *(_BYTE *)(v4 + 12) = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 192));
    __writecr8(v47);
    MiIncreaseCommitLimits(v4, v44, v44, 1, 0LL);
    MiFreePartitionNodePages((__int16 *)v4, (__int64)v41, *(_DWORD *)(v87 + 24));
    if ( v49 != 1 )
      goto LABEL_80;
    v50 = v75;
    v51 = 0;
    if ( !v75 )
      goto LABEL_79;
    while ( (v41[3] & 0x7FFFFFFFFFFFFFFFuLL) >= (v50[3] & 0x7FFFFFFFFFFFFFFFuLL) )
    {
      v52 = (_QWORD *)v50[1];
      if ( !v52 )
      {
        v51 = 1;
        goto LABEL_79;
      }
LABEL_77:
      v50 = v52;
    }
    v52 = (_QWORD *)*v50;
    if ( *v50 )
      goto LABEL_77;
    v51 = 0;
LABEL_79:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v75, (unsigned __int64)v50, v51, v41);
LABEL_80:
    v38 = v78;
  }
  while ( v39 );
  v37 = v4 + 184;
LABEL_82:
  MiMakePartitionMemoryBlock(v4);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v37, v53, v54, v55);
  v72 = 0;
  v56 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v37) == 1 )
    v57 = (unsigned int)MmGetSessionIdEx((__int64)v56->ApcState.Process);
  else
    v57 = 0xFFFFFFFFLL;
  --v56->SpecialApcDisable;
  v58 = ++v56->AbAllocationRegionCount;
  LODWORD(v59) = ((char)v56->AbEntrySummary | (char)v56->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v63, v59);
    v77 = v63;
    if ( v24 )
      goto LABEL_94;
    v60 = 1 << v63;
    v61 = v63;
    v62 = &v56->LockEntries[v61];
    v59 = ~v60 & (unsigned int)v59;
    if ( (v62->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v62->LockState.0 & 1) == 0
      && (*(_QWORD *)&v62->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v37 & 0x7FFFFFFFFFFFFFFCLL)
      && v62->LockState.SessionId == (_DWORD)v57 )
    {
      v62->AcquiredByte &= ~1u;
      if ( v62->LockState.0 )
        break;
    }
  }
  if ( !v62 )
  {
LABEL_94:
    if ( (*((_DWORD *)&v56->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v56, v37, v57, 0LL);
    goto LABEL_101;
  }
  v62->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v62->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v56->LockEntries[v61].TreeNode, v59);
  v72 = 0;
  v72 = v62->BoostBitmap.AllFields & 0x1FFFF;
  v62->BoostBitmap.AllFields &= 0xFFFE0000;
  v62->ThreadLocalFlags &= ~1u;
  v62->LockState.0 = 0LL;
  v64 = ((char *)v62 - (char *)v56 - 800) / 96;
  if ( v58 == 1 )
    v56->AbEntrySummary |= 1 << v64;
  else
    _InterlockedOr8((volatile signed __int8 *)&v56->AbOrphanedEntrySummary, 1 << v64);
LABEL_101:
  --v56->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v56, v37, (__int64)&v72);
  v24 = v56->SpecialApcDisable++ == -1;
  if ( v24 && ($005F0E83B22994B61E86C72E0CE43C71 *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)v74);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 6184), &LockHandle);
  MiComputeCommitThresholds((_QWORD *)v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
LABEL_105:
  v28 = v73;
LABEL_106:
  v65 = (PVOID *)v75;
  n = 0LL;
  while ( v65 )
  {
    n = v65;
    v65 = (PVOID *)*v65;
  }
  while ( n )
  {
    v67 = (PVOID **)n[1];
    v68 = n;
    v69 = n;
    if ( v67 )
    {
      v70 = *v67;
      for ( n = (PVOID *)n[1]; v70; v70 = (PVOID *)*v70 )
        n = v70;
    }
    else
    {
      while ( 1 )
      {
        n = (PVOID *)((unsigned __int64)n[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !n || *n == v69 )
          break;
        v69 = n;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v75, (__int64)v68);
    ExFreePoolWithTag(v68[5], 0);
    ExFreePoolWithTag(v68, 0);
  }
  return v28;
}
