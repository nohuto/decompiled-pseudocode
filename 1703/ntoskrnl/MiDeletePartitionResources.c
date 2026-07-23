/*
 * XREFs of MiDeletePartitionResources @ 0x14021D818
 * Callers:
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 * Callees:
 *     MiUnlinkWorkingSet @ 0x1400178A8 (MiUnlinkWorkingSet.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiIncreaseCommitLimits @ 0x140159BD4 (MiIncreaseCommitLimits.c)
 *     ZwWaitForSingleObject @ 0x14017DFC0 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcDeleteSectionsForPartition @ 0x1401DE4E4 (CcDeleteSectionsForPartition.c)
 *     MiMergePageNodes @ 0x14021E7A8 (MiMergePageNodes.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     MiDeletePagingFiles @ 0x1406B79FC (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1406BCDA8 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1406BCFEC (MiMakePartitionMemoryBlock.c)
 *     MiDeleteLargePfnBitMap @ 0x1406BFB38 (MiDeleteLargePfnBitMap.c)
 */

NTSTATUS __fastcall MiDeletePartitionResources(__int64 a1)
{
  __int16 v1; // bx
  HANDLE *v3; // rbx
  __int64 v4; // r14
  HANDLE v5; // rsi
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v8; // r15
  ULONG_PTR *v9; // r10
  unsigned __int64 v10; // rbx
  PVOID *v11; // rbx
  PVOID *i; // rax
  PVOID *v13; // rax
  PVOID *v14; // rsi
  PVOID *v15; // rcx
  KIRQL v16; // al
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r14
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  bool v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rbx
  struct _KTHREAD *v26; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v28; // r14
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v31; // rcx
  _KLOCK_ENTRY *v32; // rsi
  bool v33; // zf
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int16 v39; // ax
  PVOID *v40; // rax
  PVOID *v41; // rbx
  PVOID *v42; // rax
  PVOID *v43; // rsi
  PVOID *v44; // rcx
  __int64 *v45; // rbx
  __int64 *v46; // rcx
  __int64 **v47; // rax
  void *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  NTSTATUS result; // eax
  __int64 v52; // rsi
  __int64 v53; // rbx
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  KIRQL v58; // [rsp+A0h] [rbp+48h]
  int v59; // [rsp+A8h] [rbp+50h] BYREF
  int v60; // [rsp+B0h] [rbp+58h]
  _QWORD *v61; // [rsp+B8h] [rbp+60h] BYREF

  v1 = *(_WORD *)a1;
  v61 = 0LL;
  CcDeleteSectionsForPartition((__int64 **)&qword_14036F7C0, v1);
  CcDeleteSectionsForPartition(&qword_14036F7A0, v1);
  KeSetEvent((PRKEVENT)(a1 + 136), 1, 0);
  if ( *(_BYTE *)(a1 + 5596) == 1 )
  {
    MiUnlinkWorkingSet(a1 + 5888, 0LL);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(*(_QWORD *)(a1 + 6000));
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), *(_QWORD *)(a1 + 6000));
  }
  v3 = (HANDLE *)(a1 + 160);
  v4 = 5LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      ZwWaitForSingleObject(*v3, 0, 0LL);
      ObCloseHandle(v5, 0);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 6248) -= MiDeletePagingFiles(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 224);
  ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 24) + 224LL, 0LL);
  MiFreePartitionPhysicalPages(a1);
  v9 = &MiSystemPartition;
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 5824));
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 5824), *(_QWORD *)(a1 + 5824));
  v10 = *(_QWORD *)(a1 + 6248) - *(_QWORD *)(a1 + 6128);
  if ( (ULONG_PTR *)v6 == v9 )
  {
    MiReturnCommit(v6, v10);
    _InterlockedExchangeAdd64(&qword_14036D120, -(__int64)v10);
    v11 = 0LL;
    for ( i = *(PVOID **)(a1 + 56); i; i = (PVOID *)*i )
      v11 = i;
    while ( v11 )
    {
      v13 = (PVOID *)v11[1];
      v14 = v11;
      v15 = v11;
      if ( v13 )
      {
        do
        {
          v11 = v13;
          v13 = (PVOID *)*v13;
        }
        while ( v13 );
      }
      else
      {
        while ( 1 )
        {
          v11 = (PVOID *)((unsigned __int64)v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v11 || *v11 == v15 )
            break;
          v15 = v11;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)v14);
      ExFreePoolWithTag(v14[5], 0);
      ExFreePoolWithTag(v14, 0);
    }
    goto LABEL_47;
  }
  MiIncreaseCommitLimits(v6, v10, v10, 0, 0LL);
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 232));
  v17 = *(_QWORD **)(a1 + 56);
  v18 = 0LL;
  v58 = v16;
  while ( v17 )
  {
    v18 = v17;
    v17 = (_QWORD *)*v17;
  }
LABEL_45:
  while ( 2 )
  {
    if ( v18 )
    {
      v19 = (_QWORD *)v18[1];
      v20 = (unsigned __int64)v18;
      v21 = v18;
      if ( v19 )
      {
        do
        {
          v18 = v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
      }
      else
      {
        while ( 1 )
        {
          v18 = (_QWORD *)(v18[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v18 || (_QWORD *)*v18 == v21 )
            break;
          v21 = v18;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), v20);
      if ( (unsigned int)MiMergePageNodes(v6, v20) != 1 )
        continue;
      v22 = v61;
      v23 = 0;
      if ( !v61 )
        goto LABEL_44;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v20 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (v22[3] & 0x7FFFFFFFFFFFFFFFuLL) )
        {
          v24 = (_QWORD *)*v22;
          if ( !*v22 )
          {
            v23 = 0;
LABEL_44:
            RtlAvlInsertNodeEx((unsigned __int64 *)&v61, (unsigned __int64)v22, v23, v20);
            goto LABEL_45;
          }
        }
        else
        {
          v24 = (_QWORD *)v22[1];
          if ( !v24 )
          {
            v23 = 1;
            goto LABEL_44;
          }
        }
        v22 = v24;
      }
    }
    break;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 232));
  __writecr8(v58);
  MiMakePartitionMemoryBlock(v6);
LABEL_47:
  v25 = *(_QWORD *)(a1 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 224));
  KeAbPostRelease(v25 + 224);
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 224));
  v26 = KeGetCurrentThread();
  v59 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 224) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v26->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v26->SpecialApcDisable;
  v28 = ++v26->AbAllocationRegionCount;
  v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v33 = !_BitScanReverse((unsigned int *)&v34, v29);
    v60 = v34;
    if ( v33 )
      goto LABEL_61;
    v30 = 1 << v34;
    v31 = v34;
    v32 = &v26->LockEntries[v31];
    v29 &= ~v30;
    if ( (v32->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v32->LockState.0 & 1) == 0
      && (*(_QWORD *)&v32->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v8 & 0x7FFFFFFFFFFFFFFCLL)
      && v32->LockState.SessionId == (_DWORD)SessionId )
    {
      v32->AcquiredByte &= ~1u;
      if ( v32->LockState.0 )
        break;
    }
  }
  if ( !v32 )
  {
LABEL_61:
    if ( (*((_DWORD *)&v26->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v26, a1 + 224, (unsigned int)SessionId, 0LL);
    goto LABEL_68;
  }
  v32->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v32->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v26->LockEntries[v31].TreeNode, SessionId);
  v35 = v32->BoostBitmap.AllFields & 0x1FFFF;
  v36 = v32->BoostBitmap.AllFields & 0xFFFE0000;
  v32->ThreadLocalFlags &= ~1u;
  v59 = v35;
  v32->BoostBitmap.AllFields = v36;
  v32->LockState.0 = 0LL;
  v37 = ((char *)v32 - (char *)v26 - 800) / 96;
  if ( v28 == 1 )
    v26->AbEntrySummary |= 1 << v37;
  else
    _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v37);
LABEL_68:
  --v26->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v26->Header.Lock, a1 + 224, (unsigned int *)&v59);
  v39 = v26->SpecialApcDisable + 1;
  v26->SpecialApcDisable = v39;
  if ( !v39 && ($69CD3F157F9F39B6F7113F2231989901 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
    KiCheckForKernelApcDelivery(v38);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v40 = (PVOID *)v61;
  v41 = 0LL;
  while ( v40 )
  {
    v41 = v40;
    v40 = (PVOID *)*v40;
  }
  while ( v41 )
  {
    v42 = (PVOID *)v41[1];
    v43 = v41;
    v44 = v41;
    if ( v42 )
    {
      do
      {
        v41 = v42;
        v42 = (PVOID *)*v42;
      }
      while ( v42 );
    }
    else
    {
      while ( 1 )
      {
        v41 = (PVOID *)((unsigned __int64)v41[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v41 || *v41 == v44 )
          break;
        v44 = v41;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v61, (__int64)v43);
    ExFreePoolWithTag(v43[5], 0);
    ExFreePoolWithTag(v43, 0);
  }
  v45 = (__int64 *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 32) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
    v46 = (__int64 *)*v45;
    v47 = *(__int64 ***)(a1 + 40);
    if ( *(__int64 **)(*v45 + 8) != v45 || *v47 != v45 )
      __fastfail(3u);
    *v47 = v46;
    v46[1] = (__int64)v47;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  v48 = *(void **)(a1 + 5544);
  if ( v48 )
  {
    ExFreePoolWithTag(v48, 0);
    *(_QWORD *)(a1 + 5544) = 0LL;
  }
  v49 = *(_QWORD *)(a1 + 128);
  if ( v49 )
    MiDereferencePageRuns(v49);
  v50 = *(_QWORD *)(a1 + 64);
  if ( v50 )
    MiDereferencePageRuns(v50);
  result = MiDeleteLargePfnBitMap(a1);
  v52 = 11LL;
  v53 = a1 + 280;
  do
  {
    v54 = *(void **)(v53 + 88);
    if ( v54 )
      result = ObCloseHandle(v54, 0);
    if ( *(_QWORD *)v53 != a1 + 240 )
      result = ObfDereferenceObjectWithTag(*(PVOID *)v53, 0x746C6644u);
    v53 += 8LL;
    --v52;
  }
  while ( v52 );
  v55 = *(void **)(a1 + 272);
  if ( v55 )
    result = ObCloseHandle(v55, 0);
  v56 = *(void **)(a1 + 264);
  if ( v56 )
    return ObCloseHandle(v56, 0);
  return result;
}
