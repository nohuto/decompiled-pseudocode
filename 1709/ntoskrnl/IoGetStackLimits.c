/*
 * XREFs of IoGetStackLimits @ 0x1400D9020
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402825B4 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14057E7E4 (_RegRtlEnumKeyWithCallback.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PipHardwareConfigActivateService @ 0x1405A4610 (PipHardwareConfigActivateService.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 *     ViDeadlockCheckStackLimits @ 0x1407BC524 (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
