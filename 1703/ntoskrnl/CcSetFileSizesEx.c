/*
 * XREFs of CcSetFileSizesEx @ 0x1400AA8C0
 * Callers:
 *     CcSetFileSizes @ 0x14003C680 (CcSetFileSizes.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     CcGetPartitionFromFileObject @ 0x1400AB504 (CcGetPartitionFromFileObject.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcDeleteMbcb @ 0x14011992C (CcDeleteMbcb.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeleteBcbs @ 0x140136248 (CcDeleteBcbs.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER FileSize; // rbx
  LARGE_INTEGER AllocationSize; // rdi
  LARGE_INTEGER ValidDataLength; // rsi
  char *SharedCacheMap; // r14
  __int64 PartitionFromFileObject; // rax
  __int64 v8; // rdx
  LARGE_INTEGER v9; // rax
  NTSTATUS v10; // edi
  NTSTATUS result; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  NTSTATUS v15; // edi
  NTSTATUS v16; // [rsp+30h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+38h] BYREF

  FileSize = FileSizes->FileSize;
  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  FileOffset = FileSize;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap )
    goto LABEL_26;
  if ( &CcSystemPartition != *((_UNKNOWN **)SharedCacheMap + 66) )
    KeBugCheckEx(0x34u, 0xF26uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( v8 != PartitionFromFileObject )
    KeBugCheckEx(0x34u, 0xF27uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( *((_QWORD *)SharedCacheMap + 21) )
  {
    if ( AllocationSize.QuadPart <= *((_QWORD *)SharedCacheMap + 4) )
      goto LABEL_6;
    ++*((_DWORD *)SharedCacheMap + 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v13 = *((_QWORD *)SharedCacheMap + 21);
    v19 = (AllocationSize.QuadPart + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v14 = MmExtendSection(v13, &v19, 1LL);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v14) )
        v15 = -1073741588;
    }
    else
    {
      v15 = CcExtendVacbArray(SharedCacheMap, v19);
    }
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v15 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RtlRaiseStatus(v15);
    }
    SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_6:
      ++*((_DWORD *)SharedCacheMap + 1);
      v9 = *(LARGE_INTEGER *)(SharedCacheMap + 40);
      if ( v9.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileSize.QuadPart < v9.QuadPart )
          *((LARGE_INTEGER *)SharedCacheMap + 5) = FileSize;
        *((LARGE_INTEGER *)SharedCacheMap + 6) = ValidDataLength;
      }
      v10 = 0;
      if ( FileSize.QuadPart < *((_QWORD *)SharedCacheMap + 1) && (*((_DWORD *)SharedCacheMap + 38) & 4) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( (unsigned __int8)CcUnmapVacbArray((_DWORD)SharedCacheMap, (unsigned int)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileSize.QuadPart )
          {
            if ( *((_QWORD *)SharedCacheMap + 20) )
              CcDeleteMbcb(SharedCacheMap);
            if ( *((char **)SharedCacheMap + 2) != SharedCacheMap + 16 )
              CcDeleteBcbs(SharedCacheMap);
          }
          v12 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
          FileSize = FileOffset;
          v10 = v12;
        }
        KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
      }
      *((LARGE_INTEGER *)SharedCacheMap + 1) = FileSize;
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return v10;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return 0;
    }
  }
  else
  {
LABEL_26:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (FileSize.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection((__int64)FileObject->SectionObjectPointer, (va_list)&FileOffset, 1LL);
    result = v16;
    if ( v16 >= 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
