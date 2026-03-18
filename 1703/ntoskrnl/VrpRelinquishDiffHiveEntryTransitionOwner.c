/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14067E238
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14067DF68 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 */

__int64 __fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((_QWORD **)(a1 + 48), 0, 0);
  KeAbPostRelease(v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
