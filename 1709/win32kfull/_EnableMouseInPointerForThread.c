/*
 * XREFs of _EnableMouseInPointerForThread @ 0x1C01263D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnableMouseInPointerForThread()
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1184LL) |= 0x2000000u;
  return result;
}
