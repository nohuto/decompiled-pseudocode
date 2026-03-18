/*
 * XREFs of KseShimDatabaseClose @ 0x1405FC764
 * Callers:
 *     KsepDbGetDriverShims @ 0x1405FC67C (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14061DB54 (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlAssert @ 0x140288F50 (RtlAssert.c)
 *     KsepShimDbUnmapFromMemory @ 0x1405FFE1C (KsepShimDbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x140642D1C (KseShimDatabaseBootRelease.c)
 */

_QWORD *__fastcall KseShimDatabaseClose(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl
  int v8; // eax
  __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( a1 != KsepShimDbHandle )
  {
    v3 = KsepHistoryErrors;
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v4 = 379LL;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 590203;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("DbHandle == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x17Bu, 0LL);
  }
  if ( KsepShimDbDuringBoot )
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock, (__int64)v3, v4, v5);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (_QWORD *)KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      v8 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v8 == 1) )
      {
        KsepShimDbUnmapFromMemory();
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock, (__int64)v3, v4, v5);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
