/*
 * XREFs of SrbAssignQueueId @ 0x1C00075C0
 * Callers:
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0008610 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008730 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C000897C (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0008B20 (ScsiModeSelectRequest.c)
 *     LogSenseTemperature @ 0x1C0008E48 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009054 (LogSenseInformationalExceptions.c)
 *     ScsiReadWriteRequest @ 0x1C0009324 (ScsiReadWriteRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C0009500 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C00095B0 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00097D0 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0009890 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00099BC (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0009AE8 (ScsiSanitizeRequest.c)
 *     FirmwareGetInfo @ 0x1C000A5FC (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000AA74 (FirmwareDownload.c)
 *     FirmwareActivate @ 0x1C000B1A4 (FirmwareActivate.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B4A0 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B644 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B8DC (QueryProtocolInfoFeatureData.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C000BB70 (QueryTemperatureThresholdCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000BD50 (QueryTemperatureInfoHealthLogCompletion.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000BF64 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000C134 (IoctlSetTemperatureThresholdProcess.c)
 *     ProtocolCommandToNVMe @ 0x1C000D250 (ProtocolCommandToNVMe.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F460 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F7EC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F9C4 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FAA0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000FC78 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000FD60 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000FE48 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C001238C (NVMeSyncHostTime.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00138B0 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // si
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+2Ch] [rbp-24h]
  __int64 v14; // [rsp+34h] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - (v3 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v3 + 4245) & 1) != 0 )
  {
    result = *(unsigned __int16 *)(a1 + 280);
  }
  else if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 40LL);
  }
  else
  {
    v11 = 0;
    v12 = 2;
    v14 = 0LL;
    v13 = 20LL;
    StorPortExtendedFunction(15LL, a1, a2, &v12);
    v6 = WORD2(v13);
    if ( WORD2(v14) == 0xFFFF && BYTE6(v14) == 0xFF )
      StorPortExtendedFunction(17LL, a1, (char *)&v14 + 4, v5);
    StorPortExtendedFunction(56LL, a1, (char *)&v14 + 4, &v11);
    v7 = *(unsigned __int16 *)(a1 + 162);
    v8 = v11;
    if ( v11 >= v7 )
    {
      v8 = v11 % v7;
      v11 %= v7;
    }
    if ( !*(_QWORD *)(32LL * v8 + *(_QWORD *)(a1 + 192) + 24) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 24LL * v6 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 120)
                      + 8LL
                      * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 112), 1u)
                       % *(_DWORD *)(v9 + 108)));
      *(_QWORD *)(32LL * v8 + *(_QWORD *)(a1 + 192) + 24) = v10;
      ++*(_WORD *)(v10 + 52);
      v8 = v11;
    }
    result = *(unsigned __int16 *)(*(_QWORD *)(32LL * v8 + *(_QWORD *)(a1 + 192) + 24) + 40LL);
  }
  *(_WORD *)(v3 + 4236) = result;
  return result;
}
