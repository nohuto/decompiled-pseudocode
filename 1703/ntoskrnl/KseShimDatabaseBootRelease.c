/*
 * XREFs of KseShimDatabaseBootRelease @ 0x1405C6260
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140162DE4 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x1404B5110 (KseShimDatabaseClose.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SdbReleaseDatabase @ 0x1404533F0 (SdbReleaseDatabase.c)
 */

__int64 KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    v1 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v1 == 1) )
    {
      if ( KsepShimDbHandle )
      {
        SdbReleaseDatabase(KsepShimDbHandle);
        KsepShimDbHandle = 0LL;
        KsepPoolFreePaged(KsepShimDbAddress);
        KsepShimDbAddress = 0LL;
      }
      KsepShimDbDuringBoot = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
