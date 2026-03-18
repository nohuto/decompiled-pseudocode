/*
 * XREFs of xxxWaitMessageEx @ 0x1C01BD408
 * Callers:
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 */

__int64 __fastcall xxxWaitMessageEx(__int64 a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2, (__int64)a3, gptiCurrent);
}
