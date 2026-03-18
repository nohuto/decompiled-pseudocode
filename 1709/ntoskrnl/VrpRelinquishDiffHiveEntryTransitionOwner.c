/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406A92B8
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1406A8FE8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1406A92F8 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 */

_QWORD *__fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((volatile signed __int32 **)(a1 + 48), 0, 0);
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
