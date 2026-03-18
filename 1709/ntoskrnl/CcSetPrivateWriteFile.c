/*
 * XREFs of CcSetPrivateWriteFile @ 0x1401E1390
 * Callers:
 *     HvViewMapStart @ 0x1406A02F4 (HvViewMapStart.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmDisableModifiedWriteOfSection @ 0x140124310 (MmDisableModifiedWriteOfSection.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14015A53C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     FsRtlAcquireFileExclusive @ 0x14049C410 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 */

char __fastcall CcSetPrivateWriteFile(PFILE_OBJECT FileObject)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rdi
  __int64 SharedCacheMap; // rdi
  __int64 Partition; // rsi
  KSPIN_LOCK *v5; // rbp
  char v6; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  FsRtlAcquireFileExclusive(FileObject);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( SectionObjectPointer && (SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap) != 0 )
  {
    CcUnmapVacbArray(SharedCacheMap, 0LL, 0, 0, 1, 0);
    CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, 0LL);
    Partition = CcGetPartition((_QWORD *)SharedCacheMap);
    v5 = (KSPIN_LOCK *)(Partition + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    if ( (*(_DWORD *)(SharedCacheMap + 152) & 0x4020) != 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      FsRtlReleaseFile(FileObject);
      CcWaitForCurrentLazyWriterActivityInternal(Partition);
      FsRtlAcquireFileExclusive(FileObject);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    v6 = MmDisableModifiedWriteOfSection((__int64 *)FileObject->SectionObjectPointer);
    if ( v6 )
    {
      KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
      *(_DWORD *)(SharedCacheMap + 152) |= 0x2002u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    FsRtlReleaseFile(FileObject);
    return v6;
  }
  else
  {
    FsRtlReleaseFile(FileObject);
    return 0;
  }
}
