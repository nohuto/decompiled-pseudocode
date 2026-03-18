/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1400C14A0
 * Callers:
 *     EtwTraceThread @ 0x1404FD384 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1404FD6FC (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0LL;
  else
    return KeGetCurrentThread()->Teb;
}
