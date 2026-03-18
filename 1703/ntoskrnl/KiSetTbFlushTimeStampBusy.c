/*
 * XREFs of KiSetTbFlushTimeStampBusy @ 0x140201190
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140063D58 (KxFlushNonGlobalTb.c)
 * Callees:
 *     <none>
 */

char KiSetTbFlushTimeStampBusy()
{
  return KxSetTimeStampBusy(&KiTbFlushTimeStamp);
}
