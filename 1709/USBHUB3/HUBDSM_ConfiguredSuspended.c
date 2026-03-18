/*
 * XREFs of HUBDSM_ConfiguredSuspended @ 0x1C00191A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x1C0015210 (HUBPDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBDSM_ConfiguredSuspended(__int64 a1)
{
  HUBPDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
