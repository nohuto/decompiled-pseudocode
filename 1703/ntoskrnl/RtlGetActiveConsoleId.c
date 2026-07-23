/*
 * XREFs of RtlGetActiveConsoleId @ 0x140071260
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140070CB4 (PopGetConsoleDisplayRequestCount.c)
 *     PoBlockConsoleSwitch @ 0x140420964 (PoBlockConsoleSwitch.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     PopNotifyConsoleUserPresent @ 0x140575AAC (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x14058509C (PfpProcessScenarioPhase.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405D5F00 (TtmpDisplayBurstPowerSettingCallback.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*(_QWORD *)(PsGetServerSiloGlobals(-1LL) + 1072) + 4LL);
  else
    return MEMORY[0xFFFFF780000002D8];
}
