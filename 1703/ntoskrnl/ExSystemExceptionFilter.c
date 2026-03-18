/*
 * XREFs of ExSystemExceptionFilter @ 0x140430F30
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x14000AEB4 (PsWow64GetSupportedArchitectures.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14001D704 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x14001D8A0 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x1400886A4 (ExpGetSystemProcessorInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     NtShutdownWorkerFactory @ 0x14012B704 (NtShutdownWorkerFactory.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402055D0 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140247BBC (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402589D0 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140259244 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14025979C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140259804 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14025EC4C (NtQueryInformationWorkerFactory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
