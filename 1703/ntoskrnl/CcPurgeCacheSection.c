/*
 * XREFs of CcPurgeCacheSection @ 0x14010BF00
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x140014340 (CcCoherencyFlushAndPurgeCache.c)
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     MmTrimSection @ 0x140014470 (MmTrimSection.c)
 *     MmCanFileBeTruncated @ 0x14002EE20 (MmCanFileBeTruncated.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  __int64 v5; // r14
  char v7; // r12
  char v8; // bp
  char *SharedCacheMap; // rdi
  BOOLEAN v10; // bl
  char v11; // r15
  char v12; // al
  int v13; // ebx
  BOOLEAN v14; // bp
  __int64 v15; // rdx
  __int64 v16; // r8
  LONGLONG QuadPart; // rax
  _QWORD *i; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  LONGLONG v23; // [rsp+80h] [rbp+8h] BYREF

  v5 = Length;
  v7 = Flags;
  v8 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v10 = 1;
  if ( SharedCacheMap )
  {
    if ( (*((_DWORD *)SharedCacheMap + 38) & 0x2000) != 0 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
        goto LABEL_33;
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    ++*((_DWORD *)SharedCacheMap + 1);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( SharedCacheMap )
  {
    if ( &CcSystemPartition != *((_UNKNOWN **)SharedCacheMap + 66) )
      KeBugCheckEx(0x34u, 0x1191uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
    {
      for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
        ;
    }
    if ( (v7 & 8) == 0 )
    {
      CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)FileOffset, v5, 0, 1, 0);
      goto LABEL_9;
    }
    if ( (int)MmTrimSection((__int64)SectionObjectPointer, (__int64 *)FileOffset, v5, 0) >= 0 )
    {
LABEL_9:
      if ( FileOffset )
        v8 = 1;
      goto LABEL_11;
    }
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap, v20, v21);
    v10 = 0;
LABEL_33:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return v10;
  }
LABEL_11:
  v11 = v8 | 2;
  if ( (v7 & 4) == 0 )
    v11 = v8;
  v12 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, v5, v11, &v23);
  v13 = (v7 & 4) != 0 ? 5 : -1;
  while ( 1 )
  {
    v14 = v12;
    if ( v12 )
      break;
    if ( (_DWORD)v5 )
      break;
    if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
      break;
    if ( (v7 & 2) != 0 )
      break;
    KeDelayExecutionThread(0, 0, &CcCollisionDelay);
    if ( !--v13 )
      break;
    v12 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, 0LL, v11, &v23);
  }
  if ( SharedCacheMap )
  {
    if ( !(_DWORD)v5 )
    {
      if ( FileOffset )
      {
        QuadPart = FileOffset->QuadPart;
        if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 46) )
        {
          v23 = QuadPart + 0x3FFFF;
          LODWORD(v23) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
          *((_QWORD *)SharedCacheMap + 46) = v23 + 0x40000;
        }
      }
      else
      {
        *((_QWORD *)SharedCacheMap + 46) = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap, v15, v16);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  return v14;
}
