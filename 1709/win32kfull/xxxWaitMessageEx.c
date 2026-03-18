/*
 * XREFs of xxxWaitMessageEx @ 0x1C01C1328
 * Callers:
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00F8420 (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 16LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2, (__int64)a3, gptiCurrent);
}
