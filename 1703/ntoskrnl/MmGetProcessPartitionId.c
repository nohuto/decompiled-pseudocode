/*
 * XREFs of MmGetProcessPartitionId @ 0x140085190
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140599708 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140715400 (ExpQueryChannelInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1452);
}
