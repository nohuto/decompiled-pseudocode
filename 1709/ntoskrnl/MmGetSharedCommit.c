/*
 * XREFs of MmGetSharedCommit @ 0x1400F069C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSharedCommit()
{
  return qword_14038BA08;
}
