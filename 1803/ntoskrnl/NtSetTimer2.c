/*
 * XREFs of NtSetTimer2 @ 0x140038B1C
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400389A4 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  if ( !DueTime )
    return -1073741584;
  if ( Period )
    return -1073741822;
  return ExpSetTimer2(TimerHandle, (__int64)DueTime, (unsigned __int64)Parameters);
}
