/*
 * XREFs of CcSetFileSizesEx @ 0x1400E0340
 * Callers:
 *     CcSetFileSizes @ 0x1400D2770 (CcSetFileSizes.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcDeleteMbcb @ 0x1400BE080 (CcDeleteMbcb.c)
 *     CcExtendVacbArray @ 0x1400C48A4 (CcExtendVacbArray.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     CcDeleteBcbs @ 0x14014C85C (CcDeleteBcbs.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER v2; // rbx
  LARGE_INTEGER AllocationSize; // r13
  LARGE_INTEGER ValidDataLength; // rdi
  __int64 v6; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  LARGE_INTEGER *SharedCacheMap; // rsi
  KSPIN_LOCK *v9; // r12
  LARGE_INTEGER v10; // rax
  NTSTATUS v11; // edi
  NTSTATUS result; // eax
  NTSTATUS v13; // eax
  LARGE_INTEGER v14; // rcx
  NTSTATUS v15; // eax
  NTSTATUS v16; // r14d
  int v17; // r9d
  NTSTATUS v18[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  char v21; // [rsp+B0h] [rbp+40h]
  LARGE_INTEGER FileOffset; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+50h] BYREF

  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  FileOffset = FileSizes->FileSize;
  v2 = FileOffset;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  v21 = 1;
  SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    v9 = (KSPIN_LOCK *)(CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap, v6) + 128);
    KeAcquireInStackQueuedSpinLock(v9, &v19);
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_4;
    ++SharedCacheMap->HighPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
    __writecr8(v19.OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v14 = SharedCacheMap[21];
    HIDWORD(v23) = (unsigned __int64)(AllocationSize.QuadPart + 0xFFFFF) >> 32;
    v21 = 0;
    LODWORD(v23) = (AllocationSize.LowPart + 0xFFFFF) & 0xFFF00000;
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v14.QuadPart, &v23, 1LL);
    v16 = v15;
    if ( v15 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v15) )
        v16 = -1073741588;
    }
    else
    {
      v16 = CcExtendVacbArray((__int64)SharedCacheMap, v23);
    }
    KeAcquireInStackQueuedSpinLock(v9, &v19);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    if ( v16 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v19);
      RtlRaiseStatus(v16);
    }
    SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_4:
      ++SharedCacheMap->HighPart;
      if ( v21 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
        __writecr8(v19.OldIrql);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeAcquireInStackQueuedSpinLock(v9, &v19);
      }
      v10 = SharedCacheMap[5];
      if ( v10.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v2.QuadPart < v10.QuadPart )
          SharedCacheMap[5] = v2;
        SharedCacheMap[6] = ValidDataLength;
      }
      v11 = 0;
      if ( v2.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
        __writecr8(v19.OldIrql);
        if ( CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !v2.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              CcDeleteMbcb((__int64)SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              CcDeleteBcbs(SharedCacheMap);
          }
          v13 = CcPurgeAndClearCacheSection((__int64)SharedCacheMap, &FileOffset);
          v2 = FileOffset;
          v11 = v13;
        }
        KeAcquireInStackQueuedSpinLock(v9, &v19);
      }
      SharedCacheMap[1] = v2;
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
      __writecr8(v19.OldIrql);
      return v11;
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
    if ( (v2.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection(FileObject->SectionObjectPointer, (unsigned int)&FileOffset, 1, v17, (__int64)v18, 0);
    result = v18[0];
    if ( v18[0] >= 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
