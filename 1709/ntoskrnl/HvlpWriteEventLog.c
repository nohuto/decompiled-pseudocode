/*
 * XREFs of HvlpWriteEventLog @ 0x1401F08A0
 * Callers:
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14017AF44 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpCheckTscSync @ 0x1401F02EC (HvlpCheckTscSync.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401F0460 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1401F04D4 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1401F0530 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1401F0638 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401F07D8 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
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
