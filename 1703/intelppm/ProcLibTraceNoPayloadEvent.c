/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C0024398
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00040D8 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceControlCallback @ 0x1C001A8C0 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0024378 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C00243E0 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C00247D4 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0025588 (ProcLibTraceThrottleStatesErrata.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
