/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C00028B0
 * Callers:
 *     IoQueuesInitialize @ 0x1C0003054 (IoQueuesInitialize.c)
 *     ScsiModeSenseRequest @ 0x1C000897C (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C0008E48 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009054 (LogSenseInformationalExceptions.c)
 *     FirmwareGetInfo @ 0x1C000A5FC (FirmwareGetInfo.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B4A0 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B644 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B8DC (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000BF64 (IoctlQueryTemperatureInfoProcess.c)
 *     ProtocolCommandCompletion @ 0x1C000D0D0 (ProtocolCommandCompletion.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E398 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000EBEC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F110 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F7EC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FAA0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000FE48 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C001238C (NVMeSyncHostTime.c)
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
