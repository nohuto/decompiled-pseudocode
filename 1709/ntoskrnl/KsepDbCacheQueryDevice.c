/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1404F54EC
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x140551D9C (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x1406DAD20 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rax
  volatile signed __int64 *v12; // rdi
  char v13; // bl
  _BYTE v15[40]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v16; // [rsp+58h] [rbp-30h] BYREF

  DeviceData = -1073741275;
  RtlInitUnicodeString(&v16, SourceString);
  CurrentThread = KeGetCurrentThread();
  v10 = qword_140387FC8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  v11 = KsepCacheLookup(qword_140387FC8, v15);
  if ( v11 )
    DeviceData = KsepDbCacheQueryDeviceData(v11, a2, a3, a4, a5);
  v12 = (volatile signed __int64 *)qword_140387FC8;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140387FC8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return DeviceData;
}
