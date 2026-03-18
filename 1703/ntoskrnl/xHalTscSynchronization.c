/*
 * XREFs of xHalTscSynchronization @ 0x1401E49E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
