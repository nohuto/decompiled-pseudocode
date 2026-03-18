/*
 * XREFs of SrbAssignQueueId @ 0x1C00078B4
 * Callers:
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0008970 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008A90 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C0008CF0 (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0008EA8 (ScsiModeSelectRequest.c)
 *     LogSenseTemperature @ 0x1C00091F4 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009404 (LogSenseInformationalExceptions.c)
 *     ScsiReadWriteRequest @ 0x1C00096E0 (ScsiReadWriteRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C00098CC (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C0009980 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0009BA8 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0009C68 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0009D98 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0009EC8 (ScsiSanitizeRequest.c)
 *     FirmwareGetInfo @ 0x1C000A9DC (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000AE68 (FirmwareDownload.c)
 *     FirmwareActivate @ 0x1C000B59C (FirmwareActivate.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B8AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000BA3C (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000BCD4 (QueryProtocolInfoFeatureData.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C000BF50 (QueryTemperatureThresholdCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000C150 (QueryTemperatureInfoHealthLogCompletion.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000C36C (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000C53C (IoctlSetTemperatureThresholdProcess.c)
 *     ProtocolCommandToNVMe @ 0x1C000D704 (ProtocolCommandToNVMe.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F970 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000FCFC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000FEBC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0010158 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0010240 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0010328 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C00128EC (NVMeSyncHostTime.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int16 v7; // si
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  int v16; // [rsp+38h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - (v3 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v3 + 4253) & 1) != 0 )
  {
    result = *(unsigned __int16 *)(a1 + 288);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 16) )
    {
      v5 = *(_QWORD *)(a1 + 552);
    }
    else
    {
      v13 = 0;
      v15 = 0LL;
      v16 = 0;
      v14 = 0x1400000002LL;
      StorPortExtendedFunction(15LL, a1, a2, &v14);
      v7 = v15;
      if ( (_WORD)v16 == 0xFFFF && BYTE2(v16) == 0xFF )
        StorPortExtendedFunction(17LL, a1, &v16, v6);
      StorPortExtendedFunction(56LL, a1, &v16, &v13);
      v8 = *(unsigned __int16 *)(a1 + 170);
      v9 = v13;
      if ( v13 >= v8 )
      {
        v9 = v13 % v8;
        v13 %= v8;
      }
      v10 = *(_QWORD *)(a1 + 200);
      if ( !*(_QWORD *)(32LL * v9 + v10 + 24) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 24LL * v7 + 16);
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 120)
                        + 8LL
                        * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 112), 1u)
                         % *(_DWORD *)(v11 + 108)));
        *(_QWORD *)(32LL * v9 + *(_QWORD *)(a1 + 200) + 24) = v12;
        ++*(_WORD *)(v12 + 52);
        v10 = *(_QWORD *)(a1 + 200);
        v9 = v13;
      }
      v5 = *(_QWORD *)(32LL * v9 + v10 + 24);
    }
    result = *(unsigned __int16 *)(v5 + 40);
  }
  *(_WORD *)(v3 + 4244) = result;
  return result;
}
