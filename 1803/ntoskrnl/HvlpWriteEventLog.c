/*
 * XREFs of HvlpWriteEventLog @ 0x14022DACC
 * Callers:
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401A57C4 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpCheckTscSync @ 0x14022D518 (HvlpCheckTscSync.c)
 *     HvlpLogHypervisorLaunchError @ 0x14022D68C (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x14022D700 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x14022D75C (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x14022D864 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14022DA04 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
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
