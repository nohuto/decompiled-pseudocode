/*
 * XREFs of ExSystemExceptionFilter @ 0x140515700
 * Callers:
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400E5898 (PsWow64GetSupportedArchitectures.c)
 *     ExpGetSystemProcessorInformation @ 0x1400FC794 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140114A74 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140114C10 (ExpGetSystemBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x140129720 (NtShutdownWorkerFactory.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14020B770 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14025F2E4 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402825B4 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140282E20 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14028337C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1402833E4 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14028879C (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     NtCreateEnclave @ 0x1406E9454 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
