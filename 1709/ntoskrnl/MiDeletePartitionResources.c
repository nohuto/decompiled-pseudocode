/*
 * XREFs of MiDeletePartitionResources @ 0x140236E78
 * Callers:
 *     MiDeletePartition @ 0x14021F520 (MiDeletePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiUnlinkWorkingSet @ 0x1400B8788 (MiUnlinkWorkingSet.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiDereferencePageRunsEx @ 0x14011CA98 (MiDereferencePageRunsEx.c)
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 *     ZwWaitForSingleObject @ 0x14017D940 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcExitPartition @ 0x1401E2488 (CcExitPartition.c)
 *     MiMergePageNodes @ 0x140237FA0 (MiMergePageNodes.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     MiDeletePagingFiles @ 0x1406E4640 (MiDeletePagingFiles.c)
 *     MiDeleteLargePfnBitMap @ 0x1406ED6C0 (MiDeleteLargePfnBitMap.c)
 *     MiFreePartitionPhysicalPages @ 0x1406EE0C4 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1406EE348 (MiMakePartitionMemoryBlock.c)
 */

NTSTATUS __fastcall MiDeletePartitionResources(__int64 a1)
{
  _QWORD *v2; // rcx
  HANDLE *v3; // rdi
  void *v4; // rcx
  PVOID v5; // rcx
  _SINGLE_LIST_ENTRY *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  HANDLE v9; // rsi
  ULONG_PTR v10; // rdi
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v13; // r12
  ULONG_PTR *v14; // r10
  unsigned __int64 v15; // rdi
  PVOID *v16; // rdi
  PVOID *i; // rax
  PVOID *v18; // rax
  PVOID *v19; // rsi
  PVOID *v20; // rcx
  KIRQL v21; // al
  _QWORD *v22; // rcx
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  unsigned __int64 v25; // r14
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  bool v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdi
  struct _KTHREAD *v31; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v33; // r14
  unsigned int v34; // r8d
  int v35; // eax
  __int64 v36; // rcx
  _KLOCK_ENTRY *v37; // rsi
  bool v38; // zf
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  PVOID *v44; // rax
  PVOID *v45; // rdi
  PVOID *v46; // rax
  PVOID *v47; // rsi
  PVOID *v48; // rcx
  void *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  NTSTATUS result; // eax
  __int64 v53; // rsi
  __int64 v54; // rdi
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *v59; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  KIRQL v61; // [rsp+B0h] [rbp+48h]
  int v62; // [rsp+B8h] [rbp+50h] BYREF
  int v63; // [rsp+C0h] [rbp+58h]
  _QWORD *v64; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(_QWORD **)(a1 + 168);
  v64 = 0LL;
  CcExitPartition(v2);
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  if ( *(_BYTE *)(a1 + 5788) == 1 )
  {
    MiUnlinkWorkingSet(a1 + 6080, 0LL);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(*(_QWORD *)(a1 + 6192));
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), *(_QWORD *)(a1 + 6192));
  }
  v3 = (HANDLE *)(a1 + 128);
  v4 = *(void **)(a1 + 128);
  if ( v4 )
  {
    ObReferenceObjectByHandle(v4, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4800), &LockHandle);
    v5 = Object;
    *(_BYTE *)(a1 + 5209) = 1;
    KeSetActualBasePriorityThread((__int64)v5, 12, v6, v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  v8 = 5LL;
  do
  {
    v9 = *v3;
    if ( *v3 )
    {
      ZwWaitForSingleObject(*v3, 0, 0LL);
      ObCloseHandle(v9, 0);
    }
    ++v3;
    --v8;
  }
  while ( v8 );
  v10 = *(_QWORD *)(a1 + 5776);
  v11 = **(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL);
  *(_QWORD *)(a1 + 6440) -= MiDeletePagingFiles(a1);
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v13 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL) + 184LL, 0LL);
  if ( *(_QWORD *)(a1 + 3968) + *(_QWORD *)(a1 + 6016) != v10 )
    KeBugCheckEx(0x1Au, 0x41003uLL, v10, *(_QWORD *)(a1 + 6016), *(_QWORD *)(a1 + 3968));
  MiFreePartitionPhysicalPages(a1);
  v14 = &MiSystemPartition;
  if ( (ULONG_PTR *)v11 == &MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 6016));
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 6016), *(_QWORD *)(a1 + 6016));
  v15 = *(_QWORD *)(a1 + 6440) - *(_QWORD *)(a1 + 6320);
  if ( (ULONG_PTR *)v11 == v14 )
  {
    MiReturnCommit(v11, v15);
    _InterlockedExchangeAdd64(&qword_1403893E0, -(__int64)v15);
    v16 = 0LL;
    for ( i = *(PVOID **)(a1 + 24); i; i = (PVOID *)*i )
      v16 = i;
    while ( v16 )
    {
      v18 = (PVOID *)v16[1];
      v19 = v16;
      v20 = v16;
      if ( v18 )
      {
        do
        {
          v16 = v18;
          v18 = (PVOID *)*v18;
        }
        while ( v18 );
      }
      else
      {
        while ( 1 )
        {
          v16 = (PVOID *)((unsigned __int64)v16[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v16 || *v16 == v20 )
            break;
          v20 = v16;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), (__int64)v19);
      ExFreePoolWithTag(v19[5], 0);
      ExFreePoolWithTag(v19, 0);
    }
    goto LABEL_52;
  }
  MiIncreaseCommitLimits(v11, v15, v15, 0, 0LL);
  v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 192));
  v22 = *(_QWORD **)(a1 + 24);
  v23 = 0LL;
  v61 = v21;
  while ( v22 )
  {
    v23 = v22;
    v22 = (_QWORD *)*v22;
  }
  if ( v23 )
  {
LABEL_34:
    v24 = (_QWORD *)v23[1];
    v25 = (unsigned __int64)v23;
    v26 = v23;
    if ( v24 )
    {
      do
      {
        v23 = v24;
        v24 = (_QWORD *)*v24;
      }
      while ( v24 );
    }
    else
    {
      while ( 1 )
      {
        v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v23 || (_QWORD *)*v23 == v26 )
          break;
        v26 = v23;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v25);
    if ( (unsigned int)MiMergePageNodes(v11, v25) != 1 )
      goto LABEL_49;
    v27 = v64;
    v28 = 0;
    if ( !v64 )
      goto LABEL_48;
    while ( 1 )
    {
      if ( (*(_QWORD *)(v25 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (v27[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v29 = (_QWORD *)*v27;
        if ( !*v27 )
        {
          v28 = 0;
LABEL_48:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v64, (unsigned __int64)v27, v28, v25);
LABEL_49:
          if ( !v23 )
          {
            v13 = a1 + 184;
            break;
          }
          goto LABEL_34;
        }
      }
      else
      {
        v29 = (_QWORD *)v27[1];
        if ( !v29 )
        {
          v28 = 1;
          goto LABEL_48;
        }
      }
      v27 = v29;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 192));
  __writecr8(v61);
  MiMakePartitionMemoryBlock(v11);
  CurrentThread = v59;
LABEL_52:
  v30 = **(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v30 + 184));
  KeAbPostRelease(v30 + 184);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v13);
  v31 = KeGetCurrentThread();
  v62 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
  else
    SessionId = -1;
  --v31->SpecialApcDisable;
  v33 = ++v31->AbAllocationRegionCount;
  v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v38 = !_BitScanReverse((unsigned int *)&v39, v34);
    v63 = v39;
    if ( v38 )
      goto LABEL_66;
    v35 = 1 << v39;
    v36 = v39;
    v37 = &v31->LockEntries[v36];
    v34 &= ~v35;
    if ( (v37->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v37->LockState.0 & 1) == 0
      && (*(_QWORD *)&v37->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
      && v37->LockState.SessionId == SessionId )
    {
      v37->AcquiredByte &= ~1u;
      if ( v37->LockState.0 )
        break;
    }
  }
  if ( !v37 )
  {
LABEL_66:
    if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, v13, SessionId, 0LL);
    goto LABEL_73;
  }
  v37->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v37->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v31->LockEntries[v36].TreeNode);
  v40 = v37->BoostBitmap.AllFields & 0x1FFFF;
  v41 = v37->BoostBitmap.AllFields & 0xFFFE0000;
  v37->ThreadLocalFlags &= ~1u;
  v62 = v40;
  v37->BoostBitmap.AllFields = v41;
  v37->LockState.0 = 0LL;
  v42 = ((char *)v37 - (char *)v31 - 800) / 96;
  if ( v33 == 1 )
    v31->AbEntrySummary |= 1 << v42;
  else
    _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v42);
LABEL_73:
  --v31->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v31, v13, (unsigned int *)&v62);
  v38 = v31->SpecialApcDisable++ == -1;
  if ( v38 && ($B476B70DB57F76B110DA5B9238C3E934 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
    KiCheckForKernelApcDelivery(v43);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v44 = (PVOID *)v64;
  v45 = 0LL;
  while ( v44 )
  {
    v45 = v44;
    v44 = (PVOID *)*v44;
  }
  while ( v45 )
  {
    v46 = (PVOID *)v45[1];
    v47 = v45;
    v48 = v45;
    if ( v46 )
    {
      do
      {
        v45 = v46;
        v46 = (PVOID *)*v46;
      }
      while ( v46 );
    }
    else
    {
      while ( 1 )
      {
        v45 = (PVOID *)((unsigned __int64)v45[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v45 || *v45 == v48 )
          break;
        v48 = v45;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v64, (__int64)v47);
    ExFreePoolWithTag(v47[5], 0);
    ExFreePoolWithTag(v47, 0);
  }
  v49 = *(void **)(a1 + 5680);
  if ( v49 )
  {
    ExFreePoolWithTag(v49, 0);
    *(_QWORD *)(a1 + 5680) = 0LL;
  }
  v50 = *(_QWORD *)(a1 + 96);
  if ( v50 )
    MiDereferencePageRunsEx(v50, 0);
  v51 = *(_QWORD *)(a1 + 32);
  if ( v51 )
    MiDereferencePageRunsEx(v51, 0);
  result = MiDeleteLargePfnBitMap(a1);
  v53 = 11LL;
  v54 = a1 + 240;
  do
  {
    v55 = *(void **)(v54 + 88);
    if ( v55 )
      result = ObCloseHandle(v55, 0);
    if ( *(_QWORD *)v54 != a1 + 200 )
      result = ObfDereferenceObjectWithTag(*(PVOID *)v54, 0x746C6644u);
    v54 += 8LL;
    --v53;
  }
  while ( v53 );
  v56 = *(void **)(a1 + 232);
  if ( v56 )
    result = ObCloseHandle(v56, 0);
  v57 = *(void **)(a1 + 224);
  if ( v57 )
    return ObCloseHandle(v57, 0);
  return result;
}
