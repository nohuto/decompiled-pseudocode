/*
 * XREFs of KseQueryDeviceDataList @ 0x140744990
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1407BADD0 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KsepShimDbChanged @ 0x140170554 (KsepShimDbChanged.c)
 *     KsepCacheLookup @ 0x140603CA8 (KsepCacheLookup.c)
 *     KsepDbCacheReadDevice @ 0x14061DB54 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x14061DCD0 (KsepCacheDeviceFree.c)
 *     KsepDbCacheInsertDevice @ 0x14062007C (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x140744B28 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x140744D18 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140745064 (KsepDbQueryRegistryDeviceDataList.c)
 */

__int64 __fastcall KseQueryDeviceDataList(wchar_t *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // rsi
  _QWORD *v16; // rbx
  _QWORD *v18; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v19[40]; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v18 = 0LL;
  if ( dword_1403CDEE4 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList();
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v18);
      if ( RegistryDeviceDataList >= 0 )
      {
        v16 = v18;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v18, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v16) < 0 )
          KsepCacheDeviceFree(v16);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    CurrentThread = KeGetCurrentThread();
    v10 = qword_1403CDF28;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = KsepCacheLookup(qword_1403CDF28, (__int64)v19);
    v18 = v11;
    if ( v11 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v11, a2, a3, a4);
    v15 = (volatile signed __int64 *)qword_1403CDF28;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403CDF28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15, v12, v13, v14);
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v18 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
