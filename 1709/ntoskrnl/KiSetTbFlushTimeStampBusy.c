/*
 * XREFs of KiSetTbFlushTimeStampBusy @ 0x140207568
 * Callers:
 *     KxFlushNonGlobalTb @ 0x14005B3D0 (KxFlushNonGlobalTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x140144260 (KxSetTimeStampBusy.c)
 */

char KiSetTbFlushTimeStampBusy()
{
  return KxSetTimeStampBusy(&KiTbFlushTimeStamp);
}
