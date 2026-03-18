/*
 * XREFs of CcSetFileSizesEx @ 0x140089D90
 * Callers:
 *     CcSetFileSizes @ 0x140131EB0 (CcSetFileSizes.c)
 * Callees:
 *     CcDeleteMbcb @ 0x14001EBD0 (CcDeleteMbcb.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     CcDeleteBcbs @ 0x14012F610 (CcDeleteBcbs.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER FileSize; // rbx
  LARGE_INTEGER AllocationSize; // rdi
  LARGE_INTEGER ValidDataLength; // rsi
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  char v7; // r13
  LARGE_INTEGER *SharedCacheMap; // r14
  KSPIN_LOCK *v9; // r12
  LARGE_INTEGER v10; // rcx
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  NTSTATUS result; // eax
  LARGE_INTEGER v14; // rax
  NTSTATUS v15; // edi
  NTSTATUS v16; // eax
  int v17; // r9d
  NTSTATUS v18[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v22; // [rsp+B8h] [rbp+48h] BYREF

  FileSize = FileSizes->FileSize;
  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  FileOffset = FileSize;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  v7 = 1;
  SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    v9 = (KSPIN_LOCK *)(CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap) + 128);
    KeAcquireInStackQueuedSpinLock(v9, &v19);
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_11;
    ++SharedCacheMap->HighPart;
    ++SharedCacheMap[67].LowPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
    __writecr8(v19.OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v10 = SharedCacheMap[21];
    v7 = 0;
    v22 = (AllocationSize.QuadPart + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v10.QuadPart, &v22, 1LL);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v11) )
        v12 = -1073741588;
    }
    else
    {
      v12 = CcExtendVacbArray(SharedCacheMap);
    }
    KeAcquireInStackQueuedSpinLock(v9, &v19);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    if ( v12 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v19);
      RtlRaiseStatus(v12);
    }
    SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_11:
      ++SharedCacheMap->HighPart;
      ++SharedCacheMap[67].LowPart;
      if ( v7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
        __writecr8(v19.OldIrql);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeAcquireInStackQueuedSpinLock(v9, &v19);
      }
      v14 = SharedCacheMap[5];
      if ( v14.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileSize.QuadPart < v14.QuadPart )
          SharedCacheMap[5] = FileSize;
        SharedCacheMap[6] = ValidDataLength;
      }
      v15 = 0;
      if ( FileSize.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
        __writecr8(v19.OldIrql);
        if ( CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileSize.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              CcDeleteMbcb((__int64)SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              CcDeleteBcbs(SharedCacheMap);
          }
          v16 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
          FileSize = FileOffset;
          v15 = v16;
        }
        KeAcquireInStackQueuedSpinLock(v9, &v19);
      }
      SharedCacheMap[1] = FileSize;
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
      __writecr8(v19.OldIrql);
      return v15;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
      __writecr8(v19.OldIrql);
      return 0;
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (FileSize.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection(FileObject->SectionObjectPointer, (unsigned int)&FileOffset, 1, v17, (__int64)v18, 0);
    result = v18[0];
    if ( v18[0] >= 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
