/*
 * XREFs of MmGetProcessPartitionId @ 0x1400F09CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1405E86B8 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140754B00 (ExpQueryChannelInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1452);
}
