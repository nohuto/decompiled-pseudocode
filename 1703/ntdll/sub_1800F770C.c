/*
 * XREFs of sub_1800F770C @ 0x1800F770C
 * Callers:
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 *     sub_1800F7674 @ 0x1800F7674 (sub_1800F7674.c)
 *     sub_1800F76DC @ 0x1800F76DC (sub_1800F76DC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1800F770C(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
