/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x14003AEF8
 * Callers:
 *     KiEvaluateGroupSchedulingPreemption @ 0x14003A6D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14003AD30 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
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
