/*
 * XREFs of MiLockPartitionSystemThreads @ 0x140187274
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1404BEC88 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
}
