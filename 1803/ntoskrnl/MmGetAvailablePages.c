/*
 * XREFs of MmGetAvailablePages @ 0x1400813E4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407BBB44 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * a1) + 7040LL);
}
