/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C0126DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1236LL) | (*(unsigned __int16 *)(gptiCurrent + 1240LL) << 16);
}
