/*
 * XREFs of IoThreadToProcess @ 0x14002FAA0
 * Callers:
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140445FC4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     DbgkQueueUserExceptionReport @ 0x140680B08 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtSetContextThread @ 0x1406E2E60 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
