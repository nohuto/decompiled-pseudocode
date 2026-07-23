/*
 * XREFs of RtlGetActiveConsoleId @ 0x1400B16C0
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400B1110 (PopGetConsoleDisplayRequestCount.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405EA090 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PopNotifyConsoleUserPresent @ 0x1405EED5C (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x1405EF25C (PfpProcessScenarioPhase.c)
 *     PoBlockConsoleSwitch @ 0x1406FC85C (PoBlockConsoleSwitch.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetServerSiloGlobals(-1LL) + 138) + 4LL);
  else
    return MEMORY[0xFFFFF780000002D8];
}
