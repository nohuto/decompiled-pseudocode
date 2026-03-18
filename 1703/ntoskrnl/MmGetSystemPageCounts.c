/*
 * XREFs of MmGetSystemPageCounts @ 0x140085080
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_14036C0E0;
}
