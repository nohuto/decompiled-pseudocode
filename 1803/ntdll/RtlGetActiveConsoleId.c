/*
 * XREFs of RtlGetActiveConsoleId @ 0x180080A10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetActiveConsoleId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((unsigned int *)NtCurrentPeb()->HotpatchInformation + 1);
  else
    return MEMORY[0x7FFE02D8];
}
