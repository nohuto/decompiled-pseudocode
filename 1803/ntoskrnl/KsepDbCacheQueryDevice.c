/*
 * XREFs of KsepDbCacheQueryDevice @ 0x14061D818
 * Callers:
 *     KseQueryDeviceData @ 0x14061D690 (KseQueryDeviceData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KsepCacheLookup @ 0x140603CA8 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x14061DD2C (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // rbx
  char v16; // di
  _BYTE v18[40]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v19; // [rsp+58h] [rbp-30h] BYREF

  DeviceData = -1073741275;
  RtlInitUnicodeString(&v19, SourceString);
  CurrentThread = KeGetCurrentThread();
  v10 = qword_1403CDF28;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  v11 = KsepCacheLookup(qword_1403CDF28, (__int64)v18);
  if ( v11 )
    DeviceData = KsepDbCacheQueryDeviceData((int)v11, a2, a3, a4, a5);
  v15 = (volatile signed __int64 *)qword_1403CDF28;
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403CDF28, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
    ExfTryToWakePushLock(v15, v12, v13, v14);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return DeviceData;
}
