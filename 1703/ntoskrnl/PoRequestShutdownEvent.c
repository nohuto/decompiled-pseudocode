/*
 * XREFs of PoRequestShutdownEvent @ 0x1405C5ED0
 * Callers:
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x1405C5F14 (PopRequestShutdownWait.c)
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
