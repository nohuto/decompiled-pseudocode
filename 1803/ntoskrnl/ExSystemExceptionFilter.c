/*
 * XREFs of ExSystemExceptionFilter @ 0x1405BCA80
 * Callers:
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     NtShutdownWorkerFactory @ 0x140085388 (NtShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400B2608 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400B27A8 (ExpGetSystemBasicInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400B9EB0 (PsWow64GetSupportedArchitectures.c)
 *     ExpGetSystemProcessorInformation @ 0x1400D3890 (ExpGetSystemProcessorInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140249D74 (KeGetAffinitizedInterruptsInfo.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1402A0D84 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402B6498 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1402B6D34 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1402B7298 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1402B7300 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x1402BCAEC (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     NtCreateEnclave @ 0x140752ED0 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
