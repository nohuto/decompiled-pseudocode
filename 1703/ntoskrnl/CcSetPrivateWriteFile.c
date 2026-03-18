/*
 * XREFs of CcSetPrivateWriteFile @ 0x1401DE2BC
 * Callers:
 *     HvViewMapStart @ 0x140675DBC (HvViewMapStart.c)
 * Callees:
 *     MmDisableModifiedWriteOfSection @ 0x14002BA80 (MmDisableModifiedWriteOfSection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140131770 (CcWaitForCurrentLazyWriterActivity.c)
 *     FsRtlAcquireFileExclusive @ 0x140510150 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

char __fastcall CcSetPrivateWriteFile(PFILE_OBJECT FileObject)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rdi
  __int64 SharedCacheMap; // rdi
  __int64 v4; // rbp
  char v5; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  FsRtlAcquireFileExclusive(FileObject);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( SectionObjectPointer && (SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap) != 0 )
  {
    CcUnmapVacbArray(SharedCacheMap, 0LL, 0, 0, 1, 0);
    CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, 0LL);
    v4 = *(_QWORD *)(SharedCacheMap + 528);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 64), &LockHandle);
    if ( (*(_DWORD *)(SharedCacheMap + 152) & 0x4020) != 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      FsRtlReleaseFile(FileObject);
      CcWaitForCurrentLazyWriterActivity();
      FsRtlAcquireFileExclusive(FileObject);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    v5 = MmDisableModifiedWriteOfSection((__int64)FileObject->SectionObjectPointer);
    if ( v5 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 64), &LockHandle);
      *(_DWORD *)(SharedCacheMap + 152) |= 0x2002u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    FsRtlReleaseFile(FileObject);
    return v5;
  }
  else
  {
    FsRtlReleaseFile(FileObject);
    return 0;
  }
}
