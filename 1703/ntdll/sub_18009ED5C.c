/*
 * XREFs of sub_18009ED5C @ 0x18009ED5C
 * Callers:
 *     sub_18009E840 @ 0x18009E840 (sub_18009E840.c)
 * Callees:
 *     sub_18009FCDA @ 0x18009FCDA (sub_18009FCDA.c)
 *     sub_1800ABA50 @ 0x1800ABA50 (sub_1800ABA50.c)
 */

__int64 sub_18009ED5C()
{
  __int64 v0; // rbx

  v0 = sub_1800ABA50() & 0x3F;
  sub_18009FCDA();
  return (unsigned int)v0;
}
