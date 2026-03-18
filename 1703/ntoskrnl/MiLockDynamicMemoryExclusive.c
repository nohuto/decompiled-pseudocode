/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140020728
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     MiGetChannelInformation @ 0x14043CB04 (MiGetChannelInformation.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1406BD19C (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
}
