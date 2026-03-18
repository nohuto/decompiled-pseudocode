/*
 * XREFs of CcClearPrivateWriteFile @ 0x1401E0E7C
 * Callers:
 *     HvViewMapCleanup @ 0x14059CCA8 (HvViewMapCleanup.c)
 *     HvViewMapStart @ 0x1406A02F4 (HvViewMapStart.c)
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmEnableModifiedWriteOfSection @ 0x140218E50 (MmEnableModifiedWriteOfSection.c)
 *     FsRtlAcquireFileExclusive @ 0x14049C410 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 */

void __fastcall CcClearPrivateWriteFile(PFILE_OBJECT FileObject)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rdi
  _DWORD *SharedCacheMap; // rdi
  __int64 Partition; // rax
  int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  FsRtlAcquireFileExclusive(FileObject);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( SectionObjectPointer )
  {
    SharedCacheMap = SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
      Partition = CcGetPartition(SharedCacheMap);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      v5 = SharedCacheMap[38];
      if ( (v5 & 0x2000) != 0 )
      {
        SharedCacheMap[38] = v5 & 0xFFFFDFFD;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        MmEnableModifiedWriteOfSection(FileObject->SectionObjectPointer);
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
    }
  }
  FsRtlReleaseFile(FileObject);
}
