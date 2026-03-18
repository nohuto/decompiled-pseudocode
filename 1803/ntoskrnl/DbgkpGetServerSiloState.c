/*
 * XREFs of DbgkpGetServerSiloState @ 0x140620E90
 * Callers:
 *     DbgkpInitializePhase1 @ 0x14089F290 (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x14089F2E0 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 960;
}
