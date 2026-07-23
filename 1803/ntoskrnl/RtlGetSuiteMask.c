/*
 * XREFs of RtlGetSuiteMask @ 0x140571920
 * Callers:
 *     RtlGetVersion @ 0x140571860 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
