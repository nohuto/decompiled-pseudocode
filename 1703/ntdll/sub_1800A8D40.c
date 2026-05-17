/*
 * XREFs of sub_1800A8D40 @ 0x1800A8D40
 * Callers:
 *     DbgPrompt @ 0x1800E1340 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800A8D40()
{
  __int64 result; // rax

  result = 2LL;
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return result;
}
