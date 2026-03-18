/*
 * XREFs of DbgkpGetServerSiloState @ 0x1405C4A00
 * Callers:
 *     DbgkpInitializePhase1 @ 0x14083EE04 (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x14083EE54 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 960;
}
