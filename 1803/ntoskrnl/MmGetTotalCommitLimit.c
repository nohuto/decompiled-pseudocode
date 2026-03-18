/*
 * XREFs of MmGetTotalCommitLimit @ 0x1400813AC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommitLimit(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * a1) + 7528LL);
}
