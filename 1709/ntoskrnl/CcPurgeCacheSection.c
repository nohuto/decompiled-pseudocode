/*
 * XREFs of CcPurgeCacheSection @ 0x1400F28C0
 * Callers:
 *     CcUnmapAndPurge @ 0x1400202D4 (CcUnmapAndPurge.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400F2240 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmTrimSection @ 0x1400F2370 (MmTrimSection.c)
 *     MmGetControlAreaPartition @ 0x1400F2D5C (MmGetControlAreaPartition.c)
 *     MmCanFileBeTruncated @ 0x1401103D0 (MmCanFileBeTruncated.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  __int64 v5; // r12
  __int64 Partition; // r14
  char v8; // bl
  char v9; // r15
  char *SharedCacheMap; // rdi
  _QWORD *i; // rbx
  char v13; // al
  int v14; // ebx
  BOOLEAN v15; // r15
  int v16; // eax
  char v17; // bl
  int v18; // edi
  LONGLONG QuadPart; // rax
  char v20; // [rsp+34h] [rbp-4Ch]
  __int64 v21; // [rsp+38h] [rbp-48h]
  char *v22; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  LONGLONG v25; // [rsp+C0h] [rbp+40h] BYREF
  ULONG v26; // [rsp+D8h] [rbp+58h]

  v26 = Flags;
  v5 = Length;
  Partition = 0LL;
  v21 = 0LL;
  v8 = Flags;
  v9 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v22 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SharedCacheMap);
    v21 = Partition;
    if ( (*((_DWORD *)SharedCacheMap + 38) & 0x2000) != 0 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        return 1;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v23);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    __writecr8(v23.OldIrql);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( SharedCacheMap )
  {
    if ( Partition != *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) )
      KeBugCheckEx(0x34u, 0x1133uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v8 & 1) != 0 )
    {
      for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
        ;
      v8 = v26;
    }
    if ( (v8 & 8) != 0 )
    {
      if ( (int)MmTrimSection((__int64)SectionObjectPointer, (unsigned __int64 *)&FileOffset->QuadPart, v5, 0) < 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v23);
        CcDecrementOpenCount((__int64)SharedCacheMap);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
        __writecr8(v23.OldIrql);
        return 0;
      }
    }
    else
    {
      CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)FileOffset, v5, 0, 1, 0);
    }
    if ( FileOffset )
      v9 = 1;
  }
  v13 = v9 | 2;
  v14 = v8 & 4;
  if ( !v14 )
    v13 = v9;
  v20 = v13;
  v15 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, v5, v13, &v25);
  v16 = v14 != 0 ? 5 : -1;
  if ( !v15 )
  {
    v17 = v26;
    v18 = v16;
    do
    {
      if ( (_DWORD)v5 )
        break;
      if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
        break;
      if ( (v17 & 2) != 0 )
        break;
      KeDelayExecutionThread(0, 0, &CcCollisionDelay);
      if ( !--v18 )
        break;
      v15 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, 0, v20, &v25);
    }
    while ( !v15 );
    SharedCacheMap = v22;
    Partition = v21;
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
          v25 = QuadPart + 0x3FFFF;
          LODWORD(v25) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
          *((_QWORD *)SharedCacheMap + 46) = v25 + 0x40000;
        }
      }
      else
      {
        *((_QWORD *)SharedCacheMap + 46) = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v23);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    __writecr8(v23.OldIrql);
  }
  return v15;
}
