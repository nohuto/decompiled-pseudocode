/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x140090DE8
 * Callers:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x14011D4F8 (KiScheduleNextForegroundBoost.c)
 */

char __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  LOBYTE(v1) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1474LL);
  if ( (_BYTE)v1 == 2 )
  {
    v2 = *(_BYTE *)(a1 + 195);
    if ( v2 < 16 )
    {
      v1 = *(_DWORD *)(a1 + 120);
      if ( (v1 & 8) == 0 && v2 > 0 )
        LOBYTE(v1) = KiScheduleNextForegroundBoost(a1);
    }
  }
  return v1;
}
