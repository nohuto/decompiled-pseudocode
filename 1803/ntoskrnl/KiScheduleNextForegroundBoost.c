/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x14003A994
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400ECAB8 (KiTryScheduleNextForegroundBoost.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 1432);
  if ( *(_QWORD *)(a1 + 1432) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_1403B46D8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_1403B46D0;
      v2 = qword_1403B46C8 == (_QWORD)&qword_1403B46C8;
      if ( *(__int64 **)qword_1403B46D0 != &qword_1403B46C8 )
        __fastfail(3u);
      *v1 = &qword_1403B46C8;
      v1[1] = v3;
      *v3 = v1;
      qword_1403B46D0 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_1403B46D8);
    if ( v2 )
      KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  }
}
