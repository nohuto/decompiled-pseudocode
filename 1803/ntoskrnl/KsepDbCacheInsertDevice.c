/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14062007C
 * Callers:
 *     KseQueryDeviceData @ 0x14061D690 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140744990 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KsepCacheInsert @ 0x140603BF8 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x140603CA8 (KsepCacheLookup.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int64 *v10; // rbx
  char v11; // di
  _BYTE v13[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = qword_1403CDF28;
  v6 = -1073741811;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_1403CDF28, (__int64)v13) )
  {
    KsepCacheInsert(qword_1403CDF28, a2);
    v6 = 0;
  }
  v10 = (volatile signed __int64 *)qword_1403CDF28;
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403CDF28, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock(v10, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
