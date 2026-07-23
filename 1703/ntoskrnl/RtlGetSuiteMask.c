/*
 * XREFs of RtlGetSuiteMask @ 0x140448D10
 * Callers:
 *     RtlGetVersion @ 0x140448C50 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 134) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
