/*
 * XREFs of sub_180105960 @ 0x180105960
 * Callers:
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_180073730 @ 0x180073730 (sub_180073730.c)
 *     TpWaitForIoCompletion @ 0x180087F70 (TpWaitForIoCompletion.c)
 *     sub_180105230 @ 0x180105230 (sub_180105230.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_180105960()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
