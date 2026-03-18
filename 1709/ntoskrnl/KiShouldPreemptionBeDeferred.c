/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1400AA768
 * Callers:
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400763C0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400AA5D0 (KiDeferGroupSchedulingPreemption.c)
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
