/*
 * XREFs of NtSetTimer2 @ 0x1400E2514
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400E2540 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  if ( Period )
    return -1073741822;
  else
    return ExpSetTimer2(TimerHandle);
}
