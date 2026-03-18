/*
 * XREFs of CcUnmapInactiveViews @ 0x14015C064
 * Callers:
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x14024FD3C (MiRemoveUnusedSegments.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x14000457C (PsGetNextPartitionUnsafe.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  unsigned int v6; // r15d
  __int64 v7; // rcx
  KIRQL v9; // al
  __int64 v10; // rbx
  KIRQL v11; // bp
  _UNKNOWN **NextPartitionUnsafe; // rdi

  v4 = 0;
  v6 = a3;
  if ( !CcInitializationComplete || !CcNumberOfMappedVacbs )
    return 0LL;
  if ( a1 )
  {
    v7 = a1[1];
    if ( v7 )
      return CcUnmapInactiveViewsInternal(v7, 64LL, a3, a4);
    return 0LL;
  }
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    v9 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v10 = (__int64)NextPartitionUnsafe[1];
    v11 = v9;
    if ( v10 && *(_BYTE *)(v10 + 902) < 2u )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 904)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    __writecr8(v11);
    if ( v10 )
    {
      v4 |= CcUnmapInactiveViewsInternal(v10, 64LL, v6, a4);
      CcDereferencePartition(v10);
    }
    a1 = NextPartitionUnsafe;
  }
  return v4;
}
