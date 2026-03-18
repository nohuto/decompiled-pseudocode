/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x140042818
 * Callers:
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  char v1; // dl

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1474LL) == 2 )
  {
    v1 = *(_BYTE *)(a1 + 195);
    if ( v1 < 16 && (*(_DWORD *)(a1 + 120) & 2) == 0 && v1 > 0 )
      KiScheduleNextForegroundBoost(a1);
  }
}
