/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C0028B64
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004328 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0028B38 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0028BAC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0029054 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0029E24 (ProcLibTraceThrottleStatesErrata.c)
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
