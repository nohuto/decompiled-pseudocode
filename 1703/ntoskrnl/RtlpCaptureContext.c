/*
 * XREFs of RtlpCaptureContext @ 0x140189570
 * Callers:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     RtlRaiseException @ 0x14023BBE0 (RtlRaiseException.c)
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x1401895EALL);
}
