/*
 * XREFs of MiLockPartitionSystemThreads @ 0x14015D498
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1404F9CA4 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
}
