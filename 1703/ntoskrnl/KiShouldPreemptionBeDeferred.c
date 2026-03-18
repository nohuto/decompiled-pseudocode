/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x14011387C
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400E2590 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1401136E0 (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1 )
    return 1;
  return result;
}
