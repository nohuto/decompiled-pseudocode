/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800F24E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->ConsoleSessionForegroundProcessId;
  else
    return MEMORY[0x7FFE0338];
}
