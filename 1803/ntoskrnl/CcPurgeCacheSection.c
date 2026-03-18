/*
 * XREFs of CcPurgeCacheSection @ 0x140050C80
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14005BC54 (CcZeroEndOfLastPage.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x140082000 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcUnmapAndPurge @ 0x1400DB23C (CcUnmapAndPurge.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x14004DD2C (MmGetControlAreaPartition.c)
 *     MmCanFileBeTruncated @ 0x140050EA0 (MmCanFileBeTruncated.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MmTrimSection @ 0x14008212C (MmTrimSection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  __int64 v5; // r12
  __int64 v7; // r14
  char v8; // r13
  int v9; // esi
  char *SharedCacheMap; // rbx
  int v11; // eax
  int v12; // r13d
  BOOLEAN v13; // al
  BOOLEAN v14; // r13
  __int64 Partition; // rax
  bool v17; // zf
  bool v18; // cf
  int v19; // r14d
  int v20; // esi
  _QWORD *i; // r13
  _BYTE v22[4]; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+34h] [rbp-4Ch]
  __int64 v24; // [rsp+38h] [rbp-48h]
  char *v25; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v28; // [rsp+D8h] [rbp+58h]

  v28 = Flags;
  v5 = Length;
  v7 = 0LL;
  v24 = 0LL;
  v8 = Flags;
  v9 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v25 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SharedCacheMap);
    v17 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v7 = Partition;
    v24 = Partition;
    if ( !v17 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        return 1;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v26);
    ++*((_DWORD *)SharedCacheMap + 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v26);
    __writecr8(v26.OldIrql);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( SharedCacheMap )
  {
    if ( v7 != *(_QWORD *)(MmGetControlAreaPartition((__int64)SectionObjectPointer) + 8) )
      KeBugCheckEx(0x34u, 0x113FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v8 & 1) != 0 )
    {
      for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
        ;
      v8 = v28;
    }
    if ( (v8 & 8) != 0 )
    {
      if ( (int)MmTrimSection(SectionObjectPointer, FileOffset, v5, 0LL) < 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &v26);
        CcDecrementOpenCount(SharedCacheMap);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v26);
        __writecr8(v26.OldIrql);
        return 0;
      }
    }
    else
    {
      CcUnmapVacbArray((_DWORD)SharedCacheMap, (_DWORD)FileOffset, v5, 0, 1, 0);
    }
    if ( FileOffset )
      v9 = 1;
  }
  v11 = v9 | 2;
  v12 = v8 & 4;
  if ( !v12 )
    v11 = v9;
  v23 = v11;
  v13 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, v5, v11, (__int64)v22);
  if ( v13 )
  {
    v14 = v13;
  }
  else
  {
    v18 = v12 != 0;
    v19 = v23;
    v14 = 0;
    v20 = v18 ? 5 : -1;
    do
    {
      if ( (_DWORD)v5 )
        break;
      if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
        break;
      if ( (v28 & 2) != 0 )
        break;
      KeDelayExecutionThread(0, 0, &CcCollisionDelay);
      if ( !--v20 )
        break;
      v14 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, 0, v19, (__int64)v22);
    }
    while ( !v14 );
    SharedCacheMap = v25;
    v7 = v24;
  }
  if ( SharedCacheMap )
  {
    if ( !(_DWORD)v5 )
    {
      if ( FileOffset )
      {
        if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 46) )
          *((_QWORD *)SharedCacheMap + 46) = ((FileOffset->QuadPart + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) + 0x40000;
      }
      else
      {
        *((_QWORD *)SharedCacheMap + 46) = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &v26);
    CcDecrementOpenCount(SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v26);
    __writecr8(v26.OldIrql);
  }
  return v14;
}
