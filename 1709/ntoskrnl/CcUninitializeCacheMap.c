/*
 * XREFs of CcUninitializeCacheMap @ 0x140066BF0
 * Callers:
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14001BCA4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14001E4C4 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  bool v5; // r13
  __int64 Partition; // rdi
  unsigned __int8 CurrentIrql; // al
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PFILE_OBJECT *PrivateCacheMap; // r14
  __int64 SharedCacheMap; // rbx
  unsigned __int8 v12; // al
  PFILE_OBJECT v13; // rax
  __int64 v14; // rdx
  _QWORD *p_Type; // rcx
  PFILE_OBJECT **v16; // rdx
  PVOID *v17; // rcx
  int v18; // eax
  BOOLEAN v19; // si
  __int64 v20; // rcx
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+B0h] [rbp+30h]

  ListEntry = 0LL;
  v5 = 0;
  Partition = 0LL;
  v22.LockQueue.Lock = &CcMasterLock;
  v22.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v22.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v22, &CcMasterLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v22) )
  {
    KxWaitForLockOwnerShip(&v22);
  }
  SectionObjectPointer = FileObject->SectionObjectPointer;
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 904)) <= 1 )
      __fastfail(0xEu);
    v23.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
    v23.LockQueue.Next = 0LL;
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v23.OldIrql = v12;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v23, Partition + 128);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(Partition + 128), (__int64)&v23) )
    {
      KxWaitForLockOwnerShip(&v23);
    }
  }
  if ( PrivateCacheMap )
  {
    if ( PrivateCacheMap[1] != FileObject )
      KeBugCheckEx(0x34u, 0x8AFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !Partition )
      KeBugCheckEx(0x34u, 0x8B5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( PrivateCacheMap[14] )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 192));
      v13 = PrivateCacheMap[14];
      if ( v13 )
      {
        v14 = *(_QWORD *)&v13->Type;
        ++CcDbgNumberOfNoopedReadAheads;
        ListEntry = (PSLIST_ENTRY)v13;
        if ( *(PFILE_OBJECT *)(v14 + 8) != v13 || (p_Type = &v13->DeviceObject->Type, (PFILE_OBJECT)*p_Type != v13) )
          __fastfail(3u);
        *p_Type = v14;
        *(_QWORD *)(v14 + 8) = p_Type;
        v13->DeviceObject = 0LL;
        *(_QWORD *)&v13->Type = 0LL;
        if ( (PFILE_OBJECT)v13->Vpb != FileObject )
          KeBugCheckEx(0x34u, 0x8D6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        --*(_DWORD *)(SharedCacheMap + 4);
        --*(_DWORD *)(SharedCacheMap + 536);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    --*(_DWORD *)(SharedCacheMap + 4);
    v16 = (PFILE_OBJECT **)PrivateCacheMap[12];
    if ( v16[1] != PrivateCacheMap + 12 || (v17 = (PVOID *)PrivateCacheMap[13], *v17 != PrivateCacheMap + 12) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (PFILE_OBJECT *)v17;
    if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 376) )
    {
      *(_WORD *)PrivateCacheMap = 0;
      PrivateCacheMap = 0LL;
    }
    FileObject->PrivateCacheMap = 0LL;
  }
  if ( !SharedCacheMap )
  {
    if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
    {
      if ( Partition )
        KeBugCheckEx(0x34u, 0x9E8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
      __writecr8(v22.OldIrql);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
      __writecr8(v22.OldIrql);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
    goto LABEL_66;
  }
  if ( TruncateSize )
  {
    if ( TruncateSize->QuadPart || !*(_QWORD *)(SharedCacheMap + 8) )
    {
      if ( *(_QWORD *)(SharedCacheMap + 224) == SharedCacheMap + 224 )
        *(LARGE_INTEGER *)(SharedCacheMap + 8) = *TruncateSize;
    }
    else
    {
      *(_DWORD *)(SharedCacheMap + 152) |= 0x10u;
    }
  }
  if ( *(_DWORD *)(SharedCacheMap + 4) )
  {
    if ( UninitializeEvent )
    {
      if ( *(_QWORD *)(SharedCacheMap + 224) == SharedCacheMap + 224 )
      {
        UninitializeEvent->Next = *(_CACHE_UNINITIALIZE_EVENT **)(SharedCacheMap + 272);
        *(_QWORD *)(SharedCacheMap + 272) = UninitializeEvent;
        v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
      }
      else
      {
        KeSetEvent(&UninitializeEvent->Event, 0, 0);
      }
    }
    goto LABEL_41;
  }
  if ( *(_QWORD *)(SharedCacheMap + 224) != SharedCacheMap + 224 )
    KeBugCheckEx(0x34u, 0x952uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( UninitializeEvent )
  {
    UninitializeEvent->Next = *(_CACHE_UNINITIALIZE_EVENT **)(SharedCacheMap + 272);
    *(_QWORD *)(SharedCacheMap + 272) = UninitializeEvent;
    v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
  }
  v18 = *(_DWORD *)(SharedCacheMap + 152);
  if ( (v18 & 4) == 0 && !UninitializeEvent )
    goto LABEL_52;
  if ( (v18 & 0x20) == 0 )
  {
    if ( !*(_DWORD *)(SharedCacheMap + 112)
      && ((v18 & 0x400) == 0 || *(_QWORD *)(SharedCacheMap + 40) == 0x7FFFFFFFFFFFFFFFLL) )
    {
      CcDeleteSharedCacheMap((char *)SharedCacheMap, &v22, &v23, 0, 0LL);
      v5 = 0;
      v19 = 1;
      goto LABEL_67;
    }
LABEL_52:
    if ( (v18 & 0x20) == 0 )
      CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
  }
  *(_BYTE *)(Partition + 593) = 1;
  if ( !UninitializeEvent || (*(_DWORD *)(SharedCacheMap + 152) & 0x20) != 0 )
    CcScheduleLazyWriteScan(Partition, 0, 0);
  else
    CcScheduleLazyWriteScan(Partition, 1, 0);
LABEL_41:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
  __writecr8(v23.OldIrql);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
  __writecr8(v22.OldIrql);
LABEL_66:
  v19 = 0;
LABEL_67:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, 1);
  if ( ListEntry )
  {
    ObfDereferenceObject(FileObject);
    v20 = *((_QWORD *)&ListEntry[1].Next + 1);
    if ( v20 )
      IoDiskIoAttributionDereference(v20);
    CcFreeWorkQueueEntry(ListEntry);
  }
  if ( Partition )
    CcDereferencePartition(Partition);
  return v19;
}
