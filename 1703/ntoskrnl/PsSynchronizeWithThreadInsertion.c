/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x1406DFCF0
 * Callers:
 *     NtGetNextThread @ 0x14041F564 (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14067F234 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (unsigned __int64 *)(a1 + 1720);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive(v3);
  return KiLeaveCriticalRegionUnsafe(a2);
}
