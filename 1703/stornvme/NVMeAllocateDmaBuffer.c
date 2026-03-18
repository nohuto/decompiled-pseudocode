/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C0002610
 * Callers:
 *     IoQueuesInitialize @ 0x1C0002DAC (IoQueuesInitialize.c)
 *     ScsiModeSenseRequest @ 0x1C0008430 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C0008908 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0008B18 (LogSenseInformationalExceptions.c)
 *     FirmwareGetInfo @ 0x1C0009F2C (FirmwareGetInfo.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000AD60 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000AF04 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B188 (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000B7F4 (IoctlQueryTemperatureInfoProcess.c)
 *     ProtocolCommandCompletion @ 0x1C000C960 (ProtocolCommandCompletion.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000DC18 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000E45C (NVMeGetAutoPowerStateTransition.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000E980 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8 (NVMeDirectiveStreamsGetStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 172);
  result = StorPortExtendedFunction(24LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(24LL, a1, a2, 0LL);
  }
  return result;
}
