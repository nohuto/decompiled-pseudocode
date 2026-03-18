/*
 * XREFs of KseQueryDeviceDataList @ 0x1406AF480
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140714E94 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepShimDbChanged @ 0x14015689C (KsepShimDbChanged.c)
 *     KsepCacheLookup @ 0x1404B3690 (KsepCacheLookup.c)
 *     KsepDbCacheReadDevice @ 0x1405ACD7C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x1405ACEF0 (KsepCacheDeviceFree.c)
 *     KsepDbCacheInsertDevice @ 0x1405D9C60 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x1406AF618 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1406AF808 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406AF8AC (KsepDbQueryRegistryDeviceDataList.c)
 */

__int64 __fastcall KseQueryDeviceDataList(wchar_t *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int64 *v12; // rsi
  _QWORD *v13; // rbx
  _QWORD *v15; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v15 = 0LL;
  if ( dword_14036BC84 != 2 || (KseEngine & 2) != 0 )
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
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v15);
      if ( RegistryDeviceDataList >= 0 )
      {
        v13 = v15;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v15, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v13) < 0 )
          KsepCacheDeviceFree(v13);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    CurrentThread = KeGetCurrentThread();
    v10 = qword_14036BCC8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = KsepCacheLookup(qword_14036BCC8, (__int64)v16);
    v15 = v11;
    if ( v11 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v11, a2, a3, a4);
    v12 = (volatile signed __int64 *)qword_14036BCC8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_14036BCC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v15 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
