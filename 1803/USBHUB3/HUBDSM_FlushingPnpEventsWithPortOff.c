/*
 * XREFs of HUBDSM_FlushingPnpEventsWithPortOff @ 0x1C001DBE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerFailureEvent @ 0x1C0015B2C (HUBPDO_SignalPnpPowerFailureEvent.c)
 */

__int64 __fastcall HUBDSM_FlushingPnpEventsWithPortOff(__int64 a1)
{
  HUBPDO_SignalPnpPowerFailureEvent(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
