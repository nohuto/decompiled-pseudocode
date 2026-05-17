/*
 * XREFs of sub_18009E510 @ 0x18009E510
 * Callers:
 *     DbgPrompt @ 0x1800DAF10 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 sub_18009E510()
{
  __int64 result; // rax

  result = 2LL;
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return result;
}
