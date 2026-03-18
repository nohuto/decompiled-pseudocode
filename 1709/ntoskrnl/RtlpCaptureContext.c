/*
 * XREFs of RtlpCaptureContext @ 0x140189070
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140251460 (RtlRaiseException.c)
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x1401890EALL);
}
