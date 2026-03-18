/*
 * XREFs of KseShimDatabaseOpen @ 0x1405FDD48
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
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v6 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1403AD310);
      goto LABEL_4;
    }
    *a1 = 0LL;
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v6 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1403AD318);
      goto LABEL_4;
    }
    v6 = KsepShimDbMapToMemory();
    if ( v6 >= 0 )
    {
      ++KsepShimDbRefCount;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1403AD314);
      goto LABEL_4;
    }
    *a1 = 0LL;
    _InterlockedIncrement(&dword_1403AD31C);
  }
  v6 = -1073741823;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock, v3, v4, v5);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
