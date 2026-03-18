/*
 * XREFs of CcUninitializeCacheMap @ 0x140119B80
 * Callers:
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400AD48C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140119F6C (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v5; // r15
  PFILE_OBJECT v6; // r13
  bool v7; // r12
  unsigned __int8 CurrentIrql; // al
  _QWORD *v10; // rdx
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  PFILE_OBJECT **v13; // rdx
  PVOID *v14; // rcx
  int v15; // eax
  PFILE_OBJECT v17; // rax
  __int64 v18; // rdx
  _QWORD *p_Type; // rcx
  __int64 FsContext; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+48h] [rbp-40h] BYREF

  v5 = 0;
  LockHandle.LockQueue.Lock = &qword_14036F740;
  v6 = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_14036F740);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_14036F740, (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v10);
  }
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( PrivateCacheMap )
  {
    if ( PrivateCacheMap[1] != FileObject )
      KeBugCheckEx(0x34u, 0x922uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( PrivateCacheMap[14] )
    {
      v24.LockQueue.Next = 0LL;
      v24.LockQueue.Lock = (unsigned __int64 *volatile)qword_14036F780;
      KxAcquireQueuedSpinLock((__int64)&v24, qword_14036F780);
      v17 = PrivateCacheMap[14];
      if ( v17 )
      {
        v18 = *(_QWORD *)&v17->Type;
        v6 = PrivateCacheMap[14];
        ++CcDbgNumberOfNoopedReadAheads;
        p_Type = &v17->DeviceObject->Type;
        if ( *(PFILE_OBJECT *)(v18 + 8) != v17 || (PFILE_OBJECT)*p_Type != v17 )
          __fastfail(3u);
        *p_Type = v18;
        *(_QWORD *)(v18 + 8) = p_Type;
        v17->DeviceObject = 0LL;
        *(_QWORD *)&v17->Type = 0LL;
        if ( (PFILE_OBJECT)v17->Vpb != FileObject )
          KeBugCheckEx(0x34u, 0x942uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        --*((_DWORD *)SharedCacheMap + 1);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
    }
    --*((_DWORD *)SharedCacheMap + 1);
    v13 = (PFILE_OBJECT **)PrivateCacheMap[12];
    v14 = (PVOID *)PrivateCacheMap[13];
    if ( v13[1] != PrivateCacheMap + 12 || *v14 != PrivateCacheMap + 12 )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (PFILE_OBJECT *)v14;
    if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 376) )
    {
      *(_WORD *)PrivateCacheMap = 0;
      PrivateCacheMap = 0LL;
    }
    FileObject->PrivateCacheMap = 0LL;
  }
  if ( SharedCacheMap )
  {
    if ( TruncateSize )
    {
      if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
          *((LARGE_INTEGER *)SharedCacheMap + 1) = *TruncateSize;
      }
      else
      {
        *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
      }
    }
    if ( *((_DWORD *)SharedCacheMap + 1) )
    {
      if ( UninitializeEvent )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
        {
          UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
          *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
          v7 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
        }
        else
        {
          KeSetEvent(&UninitializeEvent->Event, 0, 0);
        }
      }
      goto LABEL_25;
    }
    if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x9B7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( UninitializeEvent )
    {
      UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
      *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
      if ( (FileObject->DeviceObject->Characteristics & 0x10) != 0 )
        v7 = 1;
    }
    v15 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v15 & 4) == 0 && !UninitializeEvent )
      goto LABEL_19;
    if ( (v15 & 0x20) != 0 )
    {
LABEL_21:
      byte_14036F999 = 1;
      if ( !UninitializeEvent || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 )
      {
        if ( !CcCoalescingState )
        {
          if ( byte_14036F998
            || (KiSetTimerEx((__int64)&unk_14036F958, CcFirstDelay, 0, 0, (__int64)&unk_14036F918), !CcCoalescingState) )
          {
            byte_14036F998 = 1;
          }
        }
      }
      else
      {
        CcScheduleLazyWriteScan((__int64)&CcSystemPartition, 1, 0);
      }
LABEL_25:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      goto LABEL_26;
    }
    if ( *((_DWORD *)SharedCacheMap + 28)
      || (v15 & 0x400) != 0 && *((_QWORD *)SharedCacheMap + 5) != 0x7FFFFFFFFFFFFFFFLL )
    {
LABEL_19:
      if ( (v15 & 0x20) == 0 )
        CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
      goto LABEL_21;
    }
    CcDeleteSharedCacheMap(SharedCacheMap, &LockHandle, 0LL, 0LL);
    v7 = 0;
    v5 = 1;
  }
  else
  {
    if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
  }
LABEL_26:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v7 )
    CcAdjustWriteBehindThreadPoolIfNeeded((__int64)&CcSystemPartition, 1);
  if ( v6 )
  {
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    FsContext = (__int64)v6->FsContext;
    if ( FsContext )
      IoDiskIoAttributionDereference(FsContext);
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[6].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v6);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PFILE_OBJECT))P->FreeEx)(v6);
    }
  }
  return v5;
}
