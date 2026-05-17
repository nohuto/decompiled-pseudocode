/*
 * XREFs of sub_180105A00 @ 0x180105A00
 * Callers:
 *     TpSetPoolMinThreads @ 0x1800878A0 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_180105A00()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
