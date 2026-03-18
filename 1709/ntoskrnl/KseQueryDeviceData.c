/*
 * XREFs of KseQueryDeviceData @ 0x1404F52B0
 * Callers:
 *     KseQueryDeviceFlags @ 0x1404F50C0 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x140754024 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepShimDbChanged @ 0x1400B5B1C (KsepShimDbChanged.c)
 *     KsepLogInfo @ 0x1400FA05C (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1404F5170 (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x1404F5490 (KsepCacheDeviceFree.c)
 *     KsepDbCacheQueryDevice @ 0x1404F54EC (KsepDbCacheQueryDevice.c)
 *     KseResetDeviceCache @ 0x1406DAA68 (KseResetDeviceCache.c)
 *     KsepDbCacheInsertDevice @ 0x1406DAC58 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x1406DAD20 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, const WCHAR *a2, int *a3, _DWORD *a4, void *a5)
{
  int v6; // edi
  int v9; // eax
  int RegistryDeviceData; // ebx
  __int64 v11; // rcx
  int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rax
  void *v16; // [rsp+20h] [rbp-38h]
  int v17[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v17 = 0LL;
  v6 = (int)a3;
  if ( dword_140387F84 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *a3;
  *a3 = 0;
  if ( (v9 & 0x20000000) == 0 )
  {
    HIDWORD(v16) = HIDWORD(a5);
    RegistryDeviceData = KsepDbQueryRegistryDeviceData((__int64)SourceString, a2, a3, a4);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_15;
  }
  if ( (unsigned int)KsepShimDbChanged() )
  {
    KseResetDeviceCache(v11);
  }
  else
  {
    RegistryDeviceData = KsepDbCacheQueryDevice(SourceString, (int)a2, v6, (int)a4, a5);
    if ( RegistryDeviceData != -1073741275 )
      goto LABEL_15;
  }
  RegistryDeviceData = KsepDbCacheReadDevice(SourceString, v17);
  if ( RegistryDeviceData < 0 )
    return (unsigned int)RegistryDeviceData;
  v13 = v6;
  v14 = *(_QWORD *)v17;
  RegistryDeviceData = KsepDbCacheQueryDeviceData(v17[0], (int)a2, v13, (int)a4, a5);
  if ( (int)KsepDbCacheInsertDevice(SourceString) < 0 )
    KsepCacheDeviceFree(v14);
LABEL_15:
  if ( RegistryDeviceData >= 0 )
  {
    if ( !*a4 )
      RegistryDeviceData = -1073741275;
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v15]) = 0;
    LODWORD(KsepHistoryMessages[v15]) = 591858;
    if ( (KsepDebugFlag & 1) != 0 )
    {
      LODWORD(v16) = RegistryDeviceData;
      KsepDebugPrint(0LL, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v16);
    }
    LODWORD(v16) = RegistryDeviceData;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v16);
  }
  return (unsigned int)RegistryDeviceData;
}
