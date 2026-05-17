/*
 * XREFs of RtlDeleteTimerQueue @ 0x180108B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDeleteTimerQueue(unsigned __int64 a1)
{
  return RtlDeleteTimerQueueEx(a1, 0LL);
}
