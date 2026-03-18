/*
 * XREFs of IoThreadToProcess @ 0x14006A740
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140461E3C (AlpcpCreateSecurityContext.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140573684 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     DbgkQueueUserExceptionReport @ 0x1406ABCD4 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x1406ACEEC (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1406DEB64 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x140719430 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
