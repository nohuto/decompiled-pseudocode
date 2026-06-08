/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C00288A4
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0009274 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C00288EC (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0028918 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0028944 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0028970 (ProcLibTracePccErrata.c)
 *     ProcLibTraceControlCallback @ 0x1C0028AA0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled(ProcLibEtwHandle, EventDescriptor);
  if ( result )
    return EtwWrite(ProcLibEtwHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
