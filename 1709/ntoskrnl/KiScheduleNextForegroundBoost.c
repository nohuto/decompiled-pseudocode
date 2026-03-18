/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x14011D4F8
 * Callers:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140090DE8 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
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
    KxAcquireSpinLock(&qword_1403714D8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_1403714D0;
      v4 = (__int64 *)qword_1403714C8;
      if ( *(__int64 **)qword_1403714D0 != &qword_1403714C8 )
        __fastfail(3u);
      *v1 = &qword_1403714C8;
      v1[1] = v3;
      *v3 = v1;
      v2 = v4 == &qword_1403714C8;
      qword_1403714D0 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_1403714D8);
    if ( v2 )
      KeInsertQueueDpc(&stru_140371488, 0LL, 0LL);
  }
}
