/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800F24E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->HotpatchInformation + 1);
  else
    return MEMORY[0x7FFE0338];
}
