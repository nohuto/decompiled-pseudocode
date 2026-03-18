/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1405D9C60
 * Callers:
 *     KseQueryDeviceData @ 0x1405AC9D0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1406AF480 (KseQueryDeviceDataList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x1404B3690 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x1404B3780 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  unsigned int v6; // esi
  volatile signed __int64 *v7; // rdi
  _BYTE v9[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = qword_14036BCC8;
  v6 = -1073741811;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_14036BCC8, (__int64)v9) )
  {
    KsepCacheInsert(qword_14036BCC8, a2);
    v6 = 0;
  }
  v7 = (volatile signed __int64 *)qword_14036BCC8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_14036BCC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
