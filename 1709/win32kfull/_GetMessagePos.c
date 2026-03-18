/*
 * XREFs of _GetMessagePos @ 0x1C010FCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 732LL) | (*(unsigned __int16 *)(gptiCurrent + 736LL) << 16);
}
