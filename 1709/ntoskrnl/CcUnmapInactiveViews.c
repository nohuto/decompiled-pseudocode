/*
 * XREFs of CcUnmapInactiveViews @ 0x1401E1A30
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetNextPartitionUnsafe @ 0x14011C07C (PsGetNextPartitionUnsafe.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(_QWORD *a1)
{
  unsigned __int8 v1; // si
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // bp
  _UNKNOWN **NextPartitionUnsafe; // rdi
  __int64 v7; // rcx

  v1 = 0;
  if ( !CcInitializationComplete || !CcNumberOfMappedVacbs )
    return 0LL;
  if ( a1 )
  {
    v7 = a1[1];
    if ( v7 )
      return CcUnmapInactiveViewsInternal(v7, 64LL);
    return 0LL;
  }
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    v2 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v3 = (__int64)NextPartitionUnsafe[1];
    v4 = v2;
    if ( !v3 || *(_BYTE *)(v3 + 901) )
    {
      v3 = 0LL;
    }
    else if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 904)) <= 1 )
    {
      __fastfail(0xEu);
    }
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    __writecr8(v4);
    if ( v3 )
    {
      v1 |= CcUnmapInactiveViewsInternal(v3, 64LL);
      CcDereferencePartition(v3);
    }
    a1 = NextPartitionUnsafe;
  }
  return v1;
}
