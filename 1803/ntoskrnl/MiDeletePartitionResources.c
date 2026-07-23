/*
 * XREFs of MiDeletePartitionResources @ 0x14026E874
 * Callers:
 *     MiDeletePartition @ 0x14025B0C0 (MiDeletePartition.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140006330 (ExFreeCacheAwareRundownProtection.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiUnlinkWorkingSet @ 0x140070894 (MiUnlinkWorkingSet.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDereferencePageRunsEx @ 0x1400C4510 (MiDereferencePageRunsEx.c)
 *     MiFreeClonePool @ 0x1400CEA18 (MiFreeClonePool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiIncreaseCommitLimits @ 0x14017DC60 (MiIncreaseCommitLimits.c)
 *     ZwWaitForSingleObject @ 0x1401A7540 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcExitPartition @ 0x140221098 (CcExitPartition.c)
 *     MiMergePageNodes @ 0x14026FBA8 (MiMergePageNodes.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     MiDeletePagingFiles @ 0x14074EA48 (MiDeletePagingFiles.c)
 *     MiDeleteLargePfnBitMap @ 0x140756B40 (MiDeleteLargePfnBitMap.c)
 *     MiFreePartitionPhysicalPages @ 0x140757554 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x140757804 (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  HANDLE *v2; // rbx
  void *v3; // rcx
  PVOID v4; // rcx
  __int64 v5; // r14
  HANDLE v6; // rsi
  ULONG_PTR v7; // rbx
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v10; // r13
  PVOID **v11; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *v16; // rax
  PVOID *i; // rbx
  PVOID **v18; // rax
  PVOID *v19; // rsi
  PVOID *v20; // rcx
  PVOID *v21; // rcx
  KIRQL v22; // al
  PVOID *v23; // rcx
  _QWORD *j; // rbx
  _QWORD **v25; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  _QWORD *v29; // rdx
  bool v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *v36; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v38; // r14
  unsigned int v39; // r8d
  int v40; // eax
  __int64 v41; // rcx
  _KLOCK_ENTRY *v42; // rsi
  bool v43; // zf
  __int64 v44; // rcx
  int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rdx
  PVOID *v48; // rax
  PVOID *k; // rbx
  PVOID **v50; // rax
  PVOID *v51; // rsi
  PVOID *v52; // rcx
  PVOID *v53; // rcx
  void *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rbx
  void *v59; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v60; // rcx
  void *v61; // rcx
  void *v62; // rcx
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *v64; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  KIRQL v66; // [rsp+B0h] [rbp+48h]
  int v67; // [rsp+B8h] [rbp+50h] BYREF
  int v68; // [rsp+C0h] [rbp+58h]
  _QWORD *v69; // [rsp+C8h] [rbp+60h] BYREF

  v69 = 0LL;
  CcExitPartition(*(_QWORD **)(a1 + 168), 1);
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  if ( *(_BYTE *)(a1 + 6876) == 1 )
  {
    MiUnlinkWorkingSet(a1 + 7168, 0LL);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(*(_QWORD *)(a1 + 7280));
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), *(_QWORD *)(a1 + 7280));
  }
  v2 = (HANDLE *)(a1 + 128);
  v3 = *(void **)(a1 + 128);
  if ( v3 )
  {
    ObReferenceObjectByHandle(v3, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), &LockHandle);
    v4 = Object;
    *(_BYTE *)(a1 + 6297) = 1;
    KeSetActualBasePriorityThread((__int64)v4, 12LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  v5 = 5LL;
  do
  {
    v6 = *v2;
    if ( *v2 )
    {
      ZwWaitForSingleObject(*v2, 0, 0LL);
      ObCloseHandle(v6, 0);
    }
    ++v2;
    --v5;
  }
  while ( v5 );
  MiFreeClonePool((_SLIST_HEADER *)a1);
  v7 = *(_QWORD *)(a1 + 6864);
  v8 = **(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL);
  *(_QWORD *)(a1 + 7528) -= MiDeletePagingFiles(a1);
  CurrentThread = KeGetCurrentThread();
  v64 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v10 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL) + 184LL, 0LL);
  if ( *(_QWORD *)(a1 + 4032) + *(_QWORD *)(a1 + 7104) != v7 )
    KeBugCheckEx(0x1Au, 0x41003uLL, v7, *(_QWORD *)(a1 + 7104), *(_QWORD *)(a1 + 4032));
  MiFreePartitionPhysicalPages(a1);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 7104));
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7104), *(_QWORD *)(a1 + 7104));
  v11 = (PVOID **)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 7528) - *(_QWORD *)(a1 + 7400);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
  {
    MiReturnCommit(v8, v12);
    _InterlockedExchangeAdd64(&qword_1403CC658, -(__int64)v12);
    v16 = *v11;
    i = 0LL;
    while ( v16 )
    {
      i = v16;
      v16 = (PVOID *)*v16;
    }
    while ( i )
    {
      v18 = (PVOID **)i[1];
      v19 = i;
      v20 = i;
      if ( v18 )
      {
        v21 = *v18;
        for ( i = (PVOID *)i[1]; v21; v21 = (PVOID *)*v21 )
          i = v21;
      }
      else
      {
        while ( 1 )
        {
          i = (PVOID *)((unsigned __int64)i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || *i == v20 )
            break;
          v20 = i;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), (__int64)v19);
      ExFreePoolWithTag(v19[5], 0);
      ExFreePoolWithTag(v19, 0);
    }
    goto LABEL_54;
  }
  MiIncreaseCommitLimits(v8, v12, v12, 0, 0LL);
  v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 192));
  v23 = *v11;
  j = 0LL;
  v66 = v22;
  while ( v23 )
  {
    j = v23;
    v23 = (PVOID *)*v23;
  }
  if ( j )
  {
LABEL_35:
    v25 = (_QWORD **)j[1];
    v26 = j;
    v27 = j;
    if ( v25 )
    {
      v28 = *v25;
      for ( j = (_QWORD *)j[1]; v28; v28 = (_QWORD *)*v28 )
        j = v28;
    }
    else
    {
      while ( 1 )
      {
        j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !j || (_QWORD *)*j == v27 )
          break;
        v27 = j;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), (__int64)v26);
    if ( (unsigned int)MiMergePageNodes(v8, v26) != 1 )
      goto LABEL_51;
    v29 = v69;
    v30 = 0;
    if ( !v69 )
      goto LABEL_50;
    while ( 1 )
    {
      if ( (v26[3] & 0x7FFFFFFFFFFFFFFFuLL) < (v29[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v31 = (_QWORD *)*v29;
        if ( !*v29 )
        {
          v30 = 0;
LABEL_50:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v69, (unsigned __int64)v29, v30, v26);
LABEL_51:
          if ( !j )
          {
            v10 = a1 + 184;
            break;
          }
          goto LABEL_35;
        }
      }
      else
      {
        v31 = (_QWORD *)v29[1];
        if ( !v31 )
        {
          v30 = 1;
          goto LABEL_50;
        }
      }
      v29 = v31;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 192));
  __writecr8(v66);
  MiMakePartitionMemoryBlock(v8);
  CurrentThread = v64;
LABEL_54:
  v32 = **(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v32 + 184), v13, v14, v15);
  KeAbPostRelease(v32 + 184);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10, v33, v34, v35);
  v36 = KeGetCurrentThread();
  v67 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v36->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v36->SpecialApcDisable;
  v38 = ++v36->AbAllocationRegionCount;
  v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v43 = !_BitScanReverse((unsigned int *)&v44, v39);
    v68 = v44;
    if ( v43 )
      goto LABEL_68;
    v40 = 1 << v44;
    v41 = v44;
    v42 = &v36->LockEntries[v41];
    v39 &= ~v40;
    if ( (v42->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v42->LockState.0 & 1) == 0
      && (*(_QWORD *)&v42->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
      && v42->LockState.SessionId == (_DWORD)SessionId )
    {
      v42->AcquiredByte &= ~1u;
      if ( v42->LockState.0 )
        break;
    }
  }
  if ( !v42 )
  {
LABEL_68:
    if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v36, v10, (unsigned int)SessionId, 0LL);
    goto LABEL_75;
  }
  v42->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v42->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v36->LockEntries[v41].TreeNode, SessionId);
  v45 = v42->BoostBitmap.AllFields & 0x1FFFF;
  v46 = v42->BoostBitmap.AllFields & 0xFFFE0000;
  v42->ThreadLocalFlags &= ~1u;
  v67 = v45;
  v42->BoostBitmap.AllFields = v46;
  v42->LockState.0 = 0LL;
  v47 = ((char *)v42 - (char *)v36 - 800) / 96;
  if ( v38 == 1 )
    v36->AbEntrySummary |= 1 << v47;
  else
    _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v47);
LABEL_75:
  --v36->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v36, v10, (__int64)&v67);
  v43 = v36->SpecialApcDisable++ == -1;
  if ( v43 && ($005F0E83B22994B61E86C72E0CE43C71 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v48 = (PVOID *)v69;
  k = 0LL;
  while ( v48 )
  {
    k = v48;
    v48 = (PVOID *)*v48;
  }
  while ( k )
  {
    v50 = (PVOID **)k[1];
    v51 = k;
    v52 = k;
    if ( v50 )
    {
      v53 = *v50;
      for ( k = (PVOID *)k[1]; v53; v53 = (PVOID *)*v53 )
        k = v53;
    }
    else
    {
      while ( 1 )
      {
        k = (PVOID *)((unsigned __int64)k[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || *k == v52 )
          break;
        v52 = k;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v69, (__int64)v51);
    ExFreePoolWithTag(v51[5], 0);
    ExFreePoolWithTag(v51, 0);
  }
  v54 = *(void **)(a1 + 6768);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(a1 + 6768) = 0LL;
  }
  v55 = *(_QWORD *)(a1 + 96);
  if ( v55 )
    MiDereferencePageRunsEx(v55, 0);
  v56 = *(_QWORD *)(a1 + 32);
  if ( v56 )
    MiDereferencePageRunsEx(v56, 0);
  MiDeleteLargePfnBitMap(a1);
  v57 = 11LL;
  v58 = a1 + 240;
  do
  {
    v59 = *(void **)(v58 + 88);
    if ( v59 )
      ObCloseHandle(v59, 0);
    if ( *(_QWORD *)v58 != a1 + 200 )
      ObfDereferenceObjectWithTag(*(PVOID *)v58, 0x746C6644u);
    v58 += 8LL;
    --v57;
  }
  while ( v57 );
  v60 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2064);
  if ( v60 )
    ExFreeCacheAwareRundownProtection(v60);
  v61 = *(void **)(a1 + 232);
  if ( v61 )
    ObCloseHandle(v61, 0);
  v62 = *(void **)(a1 + 224);
  if ( v62 )
    ObCloseHandle(v62, 0);
}
