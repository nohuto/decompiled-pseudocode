/*
 * XREFs of MmGetAvailablePages @ 0x140085174
 * Callers:
 *     CcZeroData @ 0x14044A710 (CcZeroData.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140599708 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * a1) + 5760LL);
}
