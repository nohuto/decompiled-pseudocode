/*
 * XREFs of strtolX @ 0x14016C4CC
 * Callers:
 *     atoi @ 0x140169850 (atoi.c)
 *     atol @ 0x140169880 (atol.c)
 * Callees:
 *     strtoxlX @ 0x14016C27C (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
