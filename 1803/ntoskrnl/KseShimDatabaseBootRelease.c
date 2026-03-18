/*
 * XREFs of KseShimDatabaseBootRelease @ 0x140642D1C
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14018047C (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x1405FC764 (KseShimDatabaseClose.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x1405FFCB8 (SdbReleaseDatabase.c)
 */

_QWORD *KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax
  char v5; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    v4 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v4 == 1) )
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
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock, v1, v2, v3);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
