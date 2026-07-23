/*
 * XREFs of RtlGetActiveConsoleId @ 0x180080A10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->ActiveConsoleId;
  else
    return MEMORY[0x7FFE02D8];
}
