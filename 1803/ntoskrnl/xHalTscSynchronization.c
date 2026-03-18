/*
 * XREFs of xHalTscSynchronization @ 0x1402267E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140156098 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
