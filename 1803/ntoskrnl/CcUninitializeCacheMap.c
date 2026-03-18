/*
 * XREFs of CcUninitializeCacheMap @ 0x1400DCA00
 * Callers:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400DADCC (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v3; // r15
  PFILE_OBJECT v4; // r13
  bool v5; // r12
  __int64 Partition; // rsi
  unsigned __int8 CurrentIrql; // al
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PFILE_OBJECT *PrivateCacheMap; // rdi
  __int64 SharedCacheMap; // rbx
  unsigned __int8 v12; // al
  PFILE_OBJECT **v13; // rdx
  PVOID *v14; // rcx
  PCACHE_UNINITIALIZE_EVENT v15; // r11
  int v16; // eax
  bool v17; // zf
  char v18; // dl
  char v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  PFILE_OBJECT v23; // rax
  __int64 v24; // rdx
  _QWORD *p_Type; // rcx
  __int64 FsContext; // rcx
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+60h] [rbp-20h] BYREF
  LARGE_INTEGER *FileOffset; // [rsp+C8h] [rbp+48h]

  FileOffset = TruncateSize;
  v3 = 0;
  v27.LockQueue.Lock = &CcMasterLock;
  v4 = 0LL;
  v27.LockQueue.Next = 0LL;
  v5 = 0;
  Partition = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v27.OldIrql = CurrentIrql;
  LOBYTE(TruncateSize) = 1;
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), TruncateSize);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v27, &CcMasterLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v27) )
  {
    KxWaitForLockOwnerShip(&v27);
  }
  SectionObjectPointer = FileObject->SectionObjectPointer;
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SectionObjectPointer->SharedCacheMap);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 904)) <= 1 )
      __fastfail(0xEu);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = v12;
    KxAcquireQueuedSpinLock(&LockHandle, Partition + 128);
  }
  if ( PrivateCacheMap )
  {
    if ( PrivateCacheMap[1] != FileObject )
      KeBugCheckEx(0x34u, 0x8A1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !Partition )
      KeBugCheckEx(0x34u, 0x8A7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( PrivateCacheMap[14] )
    {
      v29.LockQueue.Next = 0LL;
      v29.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
      KxAcquireQueuedSpinLock(&v29, Partition + 192);
      v23 = PrivateCacheMap[14];
      if ( v23 )
      {
        v24 = *(_QWORD *)&v23->Type;
        v4 = PrivateCacheMap[14];
        ++CcDbgNumberOfNoopedReadAheads;
        p_Type = &v23->DeviceObject->Type;
        if ( *(PFILE_OBJECT *)(v24 + 8) != v23 || (PFILE_OBJECT)*p_Type != v23 )
          __fastfail(3u);
        *p_Type = v24;
        *(_QWORD *)(v24 + 8) = p_Type;
        v23->DeviceObject = 0LL;
        *(_QWORD *)&v23->Type = 0LL;
        if ( (PFILE_OBJECT)v23->Vpb != FileObject )
          KeBugCheckEx(0x34u, 0x8C8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        --*(_DWORD *)(SharedCacheMap + 4);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
    }
    --*(_DWORD *)(SharedCacheMap + 4);
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
    if ( FileOffset )
    {
      if ( FileOffset->QuadPart || !*(_QWORD *)(SharedCacheMap + 8) )
      {
        if ( *(_QWORD *)(SharedCacheMap + 224) == SharedCacheMap + 224 )
          *(LARGE_INTEGER *)(SharedCacheMap + 8) = *FileOffset;
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
      goto LABEL_30;
    }
    if ( *(_QWORD *)(SharedCacheMap + 224) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x944uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v15 = UninitializeEvent;
    if ( UninitializeEvent )
    {
      UninitializeEvent->Next = *(_CACHE_UNINITIALIZE_EVENT **)(SharedCacheMap + 272);
      *(_QWORD *)(SharedCacheMap + 272) = UninitializeEvent;
      if ( (FileObject->DeviceObject->Characteristics & 0x10) != 0 )
        v5 = 1;
    }
    v16 = *(_DWORD *)(SharedCacheMap + 152);
    if ( (v16 & 4) == 0 && !UninitializeEvent )
      goto LABEL_23;
    if ( (v16 & 0x20) != 0 )
    {
LABEL_25:
      v17 = *(_BYTE *)(Partition + 902) == 0;
      *(_BYTE *)(Partition + 593) = 1;
      if ( v17 )
      {
        v18 = v15 && (*(_DWORD *)(SharedCacheMap + 152) & 0x20) == 0;
        v19 = 0;
      }
      else
      {
        *(_DWORD *)(SharedCacheMap + 152) |= 0x10000u;
        v18 = 1;
        v19 = 1;
      }
      CcScheduleLazyWriteScan(Partition, v18, v19);
LABEL_30:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
      __writecr8(v27.OldIrql);
      goto LABEL_31;
    }
    if ( *(_DWORD *)(SharedCacheMap + 112)
      || (v16 & 0x400) != 0 && *(_QWORD *)(SharedCacheMap + 40) != 0x7FFFFFFFFFFFFFFFLL )
    {
LABEL_23:
      if ( (v16 & 0x20) == 0 )
        CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
      goto LABEL_25;
    }
    CcDeleteSharedCacheMap((char *)SharedCacheMap, &v27, &LockHandle, 0, 0LL);
    v5 = 0;
    v3 = 1;
  }
  else
  {
    if ( FileOffset && !FileOffset->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
    {
      if ( Partition )
        KeBugCheckEx(0x34u, 0x9E6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
      __writecr8(v27.OldIrql);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, FileOffset, 0, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
      __writecr8(v27.OldIrql);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
  }
LABEL_31:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
  {
    LOBYTE(v20) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, v20, v21);
  }
  if ( v4 )
  {
    ObfDereferenceObject(FileObject);
    FsContext = (__int64)v4->FsContext;
    if ( FsContext )
      IoDiskIoAttributionDereference(FsContext);
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v4);
  }
  if ( Partition )
    CcDereferencePartition(Partition);
  return v3;
}
