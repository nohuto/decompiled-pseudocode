/*
 * XREFs of KseShimDatabaseOpen @ 0x1404B5F48
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
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v3 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_14034F7D0);
      goto LABEL_4;
    }
    *a1 = 0LL;
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v3 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_14034F7D8);
      goto LABEL_4;
    }
    v3 = KsepShimDbMapToMemory();
    if ( v3 >= 0 )
    {
      ++KsepShimDbRefCount;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_14034F7D4);
      goto LABEL_4;
    }
    *a1 = 0LL;
    _InterlockedIncrement(&dword_14034F7DC);
  }
  v3 = -1073741823;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
