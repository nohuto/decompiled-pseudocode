/*
 * XREFs of PoRequestShutdownEvent @ 0x140632020
 * Callers:
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x140632064 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}
