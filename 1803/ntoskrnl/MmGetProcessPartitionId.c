/*
 * XREFs of MmGetProcessPartitionId @ 0x140081400
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x1407BB420 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407BBB44 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1454);
}
