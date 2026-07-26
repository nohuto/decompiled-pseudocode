/*
 * XREFs of ndisAssignSGListLookasideList @ 0x1C001F508
 * Callers:
 *     ndisMInitializeScatterGatherDma @ 0x1C00BB398 (ndisMInitializeScatterGatherDma.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAssignSGListLookasideList(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 96LL));
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 520LL) = KeGetCurrentThread();
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1856LL) = 1835078;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1856LL) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 96LL), v4);
}
