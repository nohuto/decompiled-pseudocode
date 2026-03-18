/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x1400ECAB8
 * Callers:
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x14003A994 (KiScheduleNextForegroundBoost.c)
 */

void __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  char v1; // dl

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 )
  {
    v1 = *(_BYTE *)(a1 + 195);
    if ( v1 < 16 && (*(_DWORD *)(a1 + 120) & 8) == 0 && v1 > 0 )
      KiScheduleNextForegroundBoost(a1);
  }
}
