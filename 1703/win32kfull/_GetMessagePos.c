/*
 * XREFs of _GetMessagePos @ 0x1C0102CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 676LL) | (*(unsigned __int16 *)(gptiCurrent + 680LL) << 16);
}
