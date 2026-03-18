/*
 * XREFs of HvlpWriteEventLog @ 0x1401EB614
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14017B6EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpCheckTscSync @ 0x1401EB060 (HvlpCheckTscSync.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401EB1D4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1401EB248 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1401EB2A4 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1401EB3AC (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401EB54C (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 */

NTSTATUS __fastcall HvlpWriteEventLog(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( HvlGlobalSystemEventsHandle )
    return EtwWriteEx(HvlGlobalSystemEventsHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
