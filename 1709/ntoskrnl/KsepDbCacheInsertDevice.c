/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1406DAC58
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1406DA8D0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x140551D9C (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x140594884 (KsepCacheInsert.c)
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
  v4 = qword_140387FC8;
  v6 = -1073741811;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_140387FC8, (__int64)v9) )
  {
    KsepCacheInsert(qword_140387FC8, a2);
    v6 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140387FC8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140387FC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
