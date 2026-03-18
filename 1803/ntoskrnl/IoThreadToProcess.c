/*
 * XREFs of IoThreadToProcess @ 0x140060570
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     NtSetContextThread @ 0x14056B4B0 (NtSetContextThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1405709E4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     DbgkQueueUserExceptionReport @ 0x14071043C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140711794 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
