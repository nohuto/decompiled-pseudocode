/*
 * XREFs of MiLockPartitionSystemThreads @ 0x1401685D4
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1404938EC (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     <none>
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
}
