/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140070288
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     MiGetChannelInformation @ 0x14051275C (MiGetChannelInformation.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407579D0 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
}
