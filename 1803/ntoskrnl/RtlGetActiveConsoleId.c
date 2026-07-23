/*
 * XREFs of RtlGetActiveConsoleId @ 0x14006EAF0
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140074B28 (PopGetConsoleDisplayRequestCount.c)
 *     PoBlockConsoleSwitch @ 0x140583BAC (PoBlockConsoleSwitch.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     PopNotifyConsoleUserPresent @ 0x1405E9A30 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x1406129BC (PfpProcessScenarioPhase.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140653570 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v2; // rax

  if ( !PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v2 = *(_QWORD **)(ThreadServerSilo + 1256);
  else
    v2 = &PspHostSiloGlobals;
  return *(_DWORD *)(v2[138] + 4LL);
}
