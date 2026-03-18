/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x14024D9D4
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x1406B805C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  return *(unsigned int *)(*((_QWORD *)PsGetServerSiloGlobals(a1) + 138) + 4LL);
}
