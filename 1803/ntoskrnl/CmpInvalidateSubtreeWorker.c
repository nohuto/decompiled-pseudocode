/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x1405EDF90
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *a2, 1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 64), 0);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  ++a2[1];
  return 0LL;
}
