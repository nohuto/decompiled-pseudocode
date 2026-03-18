/*
 * XREFs of MmGetTotalCommitLimit @ 0x14008513C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommitLimit(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * a1) + 6248LL);
}
