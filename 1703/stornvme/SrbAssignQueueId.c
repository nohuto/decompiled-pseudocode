/*
 * XREFs of SrbAssignQueueId @ 0x1C000718C
 * Callers:
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C00080D0 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00081F0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C0008430 (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C00085D4 (ScsiModeSelectRequest.c)
 *     LogSenseTemperature @ 0x1C0008908 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0008B18 (LogSenseInformationalExceptions.c)
 *     ScsiReadWriteRequest @ 0x1C0008DE4 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x1C0008F74 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C000917C (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000923C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0009368 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0009494 (ScsiSanitizeRequest.c)
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 *     FirmwareGetInfo @ 0x1C0009F2C (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000A3A4 (FirmwareDownload.c)
 *     FirmwareActivate @ 0x1C000AA60 (FirmwareActivate.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000AD60 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000AF04 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B188 (QueryProtocolInfoFeatureData.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C000B410 (QueryTemperatureThresholdCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000B5E0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000B7F4 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000B9C4 (IoctlSetTemperatureThresholdProcess.c)
 *     ProtocolCommandToNVMe @ 0x1C000CAE0 (ProtocolCommandToNVMe.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000ECD0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F224 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000F4D8 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000F5C0 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8 (NVMeDirectiveStreamsGetStatus.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // si
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+2Ch] [rbp-24h]
  __int64 v13; // [rsp+34h] [rbp-1Ch] BYREF

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
    v10 = 0;
    v11 = 2;
    v13 = 0LL;
    v12 = 20LL;
    StorPortExtendedFunction(15LL, a1, a2, &v11);
    v6 = WORD2(v12);
    if ( WORD2(v13) == 0xFFFF && BYTE6(v13) == 0xFF )
      StorPortExtendedFunction(17LL, a1, (char *)&v13 + 4, v5);
    StorPortExtendedFunction(56LL, a1, (char *)&v13 + 4, &v10);
    v7 = v10;
    if ( !*(_QWORD *)(32LL * v10 + *(_QWORD *)(a1 + 192) + 24) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 24LL * v6 + 16);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 120)
                     + 8LL
                     * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 112), 1u)
                      % *(_DWORD *)(v8 + 108)));
      *(_QWORD *)(32LL * v7 + *(_QWORD *)(a1 + 192) + 24) = v9;
      ++*(_WORD *)(v9 + 52);
      v7 = v10;
    }
    result = *(unsigned __int16 *)(*(_QWORD *)(32LL * v7 + *(_QWORD *)(a1 + 192) + 24) + 40LL);
  }
  *(_WORD *)(v3 + 4236) = result;
  return result;
}
