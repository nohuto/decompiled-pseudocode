/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x1406732D0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 24) != a2 || (*(_DWORD *)(a1 + 176) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, 1);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  return 2LL;
}
