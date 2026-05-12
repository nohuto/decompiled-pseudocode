/*
 * XREFs of memmove @ 0x1C0017E00
 * Callers:
 *     StorpTelemetrySmartCommand @ 0x1C0001FB8 (StorpTelemetrySmartCommand.c)
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C00040B4 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0005D40 (StorpTelemetrySendUnitPerfData.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C000AD40 (RaidXrbSetDataBufferAddress.c)
 *     StorUnmapSenseInfo @ 0x1C000C270 (StorUnmapSenseInfo.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C000F9A8 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     StorCreateAnsiString @ 0x1C0010A0C (StorCreateAnsiString.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00128E0 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C0014958 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaUnitStreamsIoctl @ 0x1C0015550 (RaUnitStreamsIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0015B78 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C002A22C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002A438 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidInitializeCryptoEngine @ 0x1C002A560 (RaidInitializeCryptoEngine.c)
 *     StorPortMoveMemory @ 0x1C0030AF0 (StorPortMoveMemory.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00317EC (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0033890 (StorpUnitInitializePoFxPower.c)
 *     TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C0037F88 (TranslateScsiRequestBlockToScsiCdb16SrbExData.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0038690 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C00387CC (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     StorCreateSystemLogEntry @ 0x1C0039C0C (StorCreateSystemLogEntry.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C003A538 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003B844 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003B98C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BB54 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidAdapterWmiDeferredRoutine @ 0x1C003F0C0 (RaidAdapterWmiDeferredRoutine.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C00474A0 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 *     PortpBinaryReadCallBack @ 0x1C0048000 (PortpBinaryReadCallBack.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0048658 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C0048810 (PortPassThroughExNormalize.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0048A88 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortTraceErrorDrainList @ 0x1C0048F20 (PortTraceErrorDrainList.c)
 *     PortTraceInitGlobalLogger @ 0x1C004904C (PortTraceInitGlobalLogger.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C005E458 (RaGetUnitStorageDeviceProperty.c)
 *     PortpRegQueryRoutine @ 0x1C005F2E0 (PortpRegQueryRoutine.c)
 *     RaWmiIrpRegisterRequest @ 0x1C00608E4 (RaWmiIrpRegisterRequest.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0060DBC (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaSaveDriverInitData @ 0x1C0065834 (RaSaveDriverInitData.c)
 *     WppInitGlobalLogger @ 0x1C0065A30 (WppInitGlobalLogger.c)
 *     WppTraceCallback @ 0x1C0065E60 (WppTraceCallback.c)
 *     RaDuplicateCmResourceList @ 0x1C00665D8 (RaDuplicateCmResourceList.c)
 *     PortQueryInterfaceFdoQdr @ 0x1C00679A0 (PortQueryInterfaceFdoQdr.c)
 *     PortpReadDriverParameterEntry @ 0x1C00680F8 (PortpReadDriverParameterEntry.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0068720 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C0069238 (PortPassThroughSrbInitialize.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
