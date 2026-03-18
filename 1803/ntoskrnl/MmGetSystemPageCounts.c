/*
 * XREFs of MmGetSystemPageCounts @ 0x14008075C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_1403CB5A0;
}
