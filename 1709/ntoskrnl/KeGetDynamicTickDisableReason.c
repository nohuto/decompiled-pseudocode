/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14013266C
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140452384 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x14074CD8C (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
