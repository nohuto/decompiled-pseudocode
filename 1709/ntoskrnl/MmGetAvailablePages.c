/*
 * XREFs of MmGetAvailablePages @ 0x1400F09B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1405E86B8 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * a1) + 5952LL);
}
