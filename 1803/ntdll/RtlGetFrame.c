/*
 * XREFs of RtlGetFrame @ 0x1800CA540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB_ACTIVE_FRAME *RtlGetFrame()
{
  return NtCurrentTeb()->ActiveFrame;
}
