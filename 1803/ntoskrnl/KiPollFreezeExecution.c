/*
 * XREFs of KiPollFreezeExecution @ 0x1400D28F0
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140474F40 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
