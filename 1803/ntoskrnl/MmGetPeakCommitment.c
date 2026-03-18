/*
 * XREFs of MmGetPeakCommitment @ 0x140081390
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetPeakCommitment(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * a1) + 6144LL);
}
