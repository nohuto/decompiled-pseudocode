/*
 * XREFs of RtlGetActiveConsoleId @ 0x1800860C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->ActiveConsoleId;
  else
    return MEMORY[0x7FFE02D8];
}
