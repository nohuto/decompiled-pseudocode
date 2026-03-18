/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1400350C0
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140453A20 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407100C8 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
