/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800F4F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->ConsoleSessionForegroundProcessId;
  else
    return MEMORY[0x7FFE0338];
}
