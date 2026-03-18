/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x140027714
 * Callers:
 *     KiTryScheduleNextForegroundBoost @ 0x140042818 (KiTryScheduleNextForegroundBoost.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax
  __int64 *v4; // rcx

  v1 = (_QWORD *)(a1 + 1432);
  if ( *(_QWORD *)(a1 + 1432) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_1403569D8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_1403569D0;
      v4 = (__int64 *)qword_1403569C8;
      if ( *(__int64 **)qword_1403569D0 != &qword_1403569C8 )
        __fastfail(3u);
      *v1 = &qword_1403569C8;
      v1[1] = v3;
      *v3 = v1;
      v2 = v4 == &qword_1403569C8;
      qword_1403569D0 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_1403569D8);
    if ( v2 )
      KeInsertQueueDpc(&stru_140356988, 0LL, 0LL);
  }
}
