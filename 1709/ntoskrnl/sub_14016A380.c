/*
 * XREFs of sub_14016A380 @ 0x14016A380
 * Callers:
 *     <none>
 * Callees:
 *     qsort @ 0x14015F450 (qsort.c)
 */

void __fastcall sub_14016A380(void *a1, unsigned int a2)
{
  qsort(a1, a2, 8uLL, PtFuncCompare);
}
