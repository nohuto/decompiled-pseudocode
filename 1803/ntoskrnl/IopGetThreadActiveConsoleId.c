/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14071CD88
 * Callers:
 *     IoRaiseHardError @ 0x140236830 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x140283DB4 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
