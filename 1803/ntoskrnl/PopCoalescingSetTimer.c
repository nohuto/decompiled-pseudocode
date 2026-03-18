/*
 * XREFs of PopCoalescingSetTimer @ 0x14027846C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402783CC (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x140761620 (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (PopCoalescingState & 1) != 0 )
  {
    PopPrintEx(3u, (__int64)"PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (__int64)&PopCoalescingTimer,
               -10000000LL * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}
