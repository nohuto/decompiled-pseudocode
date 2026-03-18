/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C0002820
 * Callers:
 *     IoQueuesInitialize @ 0x1C0003010 (IoQueuesInitialize.c)
 *     ScsiModeSenseRequest @ 0x1C0008CF0 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C00091F4 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009404 (LogSenseInformationalExceptions.c)
 *     FirmwareGetInfo @ 0x1C000A9DC (FirmwareGetInfo.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B8AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000BA3C (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000BCD4 (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000C36C (IoctlQueryTemperatureInfoProcess.c)
 *     ProtocolCommandCompletion @ 0x1C000D590 (ProtocolCommandCompletion.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E864 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000F0D8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F620 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000FCFC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0010328 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C00128EC (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 180);
  result = StorPortExtendedFunction(82LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, a2, 0LL);
  }
  return result;
}
