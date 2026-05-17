/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800F4F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->HotpatchInformation + 1);
  else
    return MEMORY[0x7FFE0338];
}
