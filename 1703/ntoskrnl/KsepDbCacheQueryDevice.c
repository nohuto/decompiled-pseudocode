/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1405ACB58
 * Callers:
 *     KseQueryDeviceData @ 0x1405AC9D0 (KseQueryDeviceData.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x1404B3690 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x1405D8ED0 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int64 *v12; // rdi
  _BYTE v14[40]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v15; // [rsp+58h] [rbp-30h] BYREF

  DeviceData = -1073741275;
  RtlInitUnicodeString(&v15, SourceString);
  CurrentThread = KeGetCurrentThread();
  v10 = qword_14036BCC8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  v11 = KsepCacheLookup(qword_14036BCC8, (__int64)v14);
  if ( v11 )
    DeviceData = KsepDbCacheQueryDeviceData((int)v11, a2, a3, a4, a5);
  v12 = (volatile signed __int64 *)qword_14036BCC8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_14036BCC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return DeviceData;
}
