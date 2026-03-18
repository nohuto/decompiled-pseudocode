/*
 * XREFs of MmGetSystemPageCounts @ 0x1400F08F0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140388420;
}
