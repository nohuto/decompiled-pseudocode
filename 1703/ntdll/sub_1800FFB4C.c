/*
 * XREFs of sub_1800FFB4C @ 0x1800FFB4C
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800FFB4C()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
