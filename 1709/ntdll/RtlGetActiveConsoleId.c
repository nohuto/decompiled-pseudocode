/*
 * XREFs of RtlGetActiveConsoleId @ 0x180085F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetActiveConsoleId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((unsigned int *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE02D8];
}
