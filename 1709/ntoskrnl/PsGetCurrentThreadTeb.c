/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1401247E0
 * Callers:
 *     EtwTraceThread @ 0x14074619C (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x14074711C (EtwpPsProvTraceThread.c)
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
