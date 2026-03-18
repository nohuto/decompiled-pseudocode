/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x1406B805C
 * Callers:
 *     IoRaiseHardError @ 0x1401F9540 (IoRaiseHardError.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x14024D9D4 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ProcessServerSilo; // rax

  if ( *(_QWORD *)(a1 + 2000) == -3LL )
    ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  else
    ProcessServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 2000));
  return PsGetServerSiloActiveConsoleId(ProcessServerSilo);
}
