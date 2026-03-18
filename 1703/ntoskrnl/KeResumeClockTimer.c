/*
 * XREFs of KeResumeClockTimer @ 0x140137EF4
 * Callers:
 *     PopHandleNextState @ 0x1404063E0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KeResumeClockTimer()
{
  return KiResumeClockTimer();
}
