/*
 * XREFs of KseShimDatabaseClose @ 0x1404B5110
 * Callers:
 *     KsepDbGetDriverShims @ 0x1404B502C (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140599338 (KsepDbGetShimInfo.c)
 *     KsepDbCacheReadDevice @ 0x1405ACD7C (KsepDbCacheReadDevice.c)
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
 *     KsepShimDbUnmapFromMemory @ 0x14045336C (KsepShimDbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x1405C6260 (KseShimDatabaseBootRelease.c)
 */

__int64 __fastcall KseShimDatabaseClose(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // eax
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( a1 != KsepShimDbHandle )
  {
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v5 + 1] = -1073740768;
    KsepHistoryErrors[2 * v5] = 590203;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("DbHandle == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x17Bu, 0LL);
  }
  if ( KsepShimDbDuringBoot )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      v4 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v4 == 1) )
      {
        KsepShimDbUnmapFromMemory();
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
