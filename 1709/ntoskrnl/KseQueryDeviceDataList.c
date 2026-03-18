/*
 * XREFs of KseQueryDeviceDataList @ 0x1406DA8D0
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140754024 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepShimDbChanged @ 0x1400B5B1C (KsepShimDbChanged.c)
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x1404F5490 (KsepCacheDeviceFree.c)
 *     KsepCacheLookup @ 0x140551D9C (KsepCacheLookup.c)
 *     KseResetDeviceCache @ 0x1406DAA68 (KseResetDeviceCache.c)
 *     KsepDbCacheInsertDevice @ 0x1406DAC58 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1406DAD94 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406DAE38 (KsepDbQueryRegistryDeviceDataList.c)
 */

__int64 __fastcall KseQueryDeviceDataList(PCWSTR SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // edi
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  void **v12; // rax
  volatile signed __int64 *v13; // rsi
  void **v14; // rbx
  void **v16; // [rsp+20h] [rbp-78h] BYREF
  char v17[40]; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v16 = 0LL;
  if ( dword_140387F84 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList();
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache(v9);
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice((__int64)SourceString, &v16);
      if ( RegistryDeviceDataList >= 0 )
      {
        v14 = v16;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v16, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString) < 0 )
          KsepCacheDeviceFree(v14);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    CurrentThread = KeGetCurrentThread();
    v11 = qword_140387FC8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = (void **)KsepCacheLookup(qword_140387FC8, (__int64)v17);
    v16 = v12;
    if ( v12 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v12, a2, a3, a4);
    v13 = (volatile signed __int64 *)qword_140387FC8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140387FC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v16 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
