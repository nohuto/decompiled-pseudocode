/*
 * XREFs of CcClearPrivateWriteFile @ 0x1401DDE20
 * Callers:
 *     HvViewMapCleanup @ 0x14045C15C (HvViewMapCleanup.c)
 *     HvViewMapStart @ 0x140675DBC (HvViewMapStart.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MmEnableModifiedWriteOfSection @ 0x1402115C0 (MmEnableModifiedWriteOfSection.c)
 *     FsRtlAcquireFileExclusive @ 0x140510150 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

void __fastcall CcClearPrivateWriteFile(PFILE_OBJECT FileObject)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rdi
  _QWORD *SharedCacheMap; // rdi
  int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  FsRtlAcquireFileExclusive(FileObject);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( SectionObjectPointer )
  {
    SharedCacheMap = SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(SharedCacheMap[66] + 64LL), &LockHandle);
      v4 = *((_DWORD *)SharedCacheMap + 38);
      if ( (v4 & 0x2000) != 0 )
      {
        *((_DWORD *)SharedCacheMap + 38) = v4 & 0xFFFFDFFD;
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
