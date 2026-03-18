/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x1400B8DA0
 * Callers:
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     MiGetChannelInformation @ 0x1404FC770 (MiGetChannelInformation.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1406EE4F8 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
}
