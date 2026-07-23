/*
 * XREFs of NtSetIRTimer @ 0x1400D2C58
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400389A4 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle, (__int64)DueTime, 0LL);
}
