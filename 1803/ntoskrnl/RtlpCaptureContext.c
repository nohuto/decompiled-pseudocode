/*
 * XREFs of RtlpCaptureContext @ 0x1401B2CD0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14012B860 (RtlpWalkFrameChain.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140286F30 (RtlRaiseException.c)
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x1401B2D4ALL);
}
