/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x140666090
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1)
{
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL, 1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 64));
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  return 0LL;
}
