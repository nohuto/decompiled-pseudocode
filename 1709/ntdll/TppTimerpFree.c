/*
 * XREFs of TppTimerpFree @ 0x18000BC70
 * Callers:
 *     TpReleaseTimer @ 0x18000BCB0 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18000C5A8 (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x100000), a1);
}
