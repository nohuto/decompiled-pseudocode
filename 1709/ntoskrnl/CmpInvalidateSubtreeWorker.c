/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x14068FB10
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, _DWORD *a2)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *a2, 1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 64));
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  ++a2[1];
  return 0LL;
}
