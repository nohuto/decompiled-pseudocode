/*
 * XREFs of TppTimerpFree @ 0x18000BC70
 * Callers:
 *     TpReleaseTimer @ 0x18000BCB0 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18000C5A8 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
