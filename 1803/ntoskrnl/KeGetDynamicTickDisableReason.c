/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1400D2DEC
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1405271DC (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407AE9A4 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
