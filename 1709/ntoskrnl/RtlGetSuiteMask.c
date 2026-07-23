/*
 * XREFs of RtlGetSuiteMask @ 0x140541C20
 * Callers:
 *     RtlGetVersion @ 0x140541B60 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
