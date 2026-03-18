/*
 * XREFs of HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C00078B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x1C000B5D8 (HUBFDO_SignalPnpPowerEvent.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000E280 (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResumeWithResetToDevices(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_QueuePowerUpEventToDSMs(v1, 4014LL);
  HUBFDO_SignalPnpPowerEvent(v1);
  return 1000LL;
}
