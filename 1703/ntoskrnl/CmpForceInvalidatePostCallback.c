/*
 * XREFs of CmpForceInvalidatePostCallback @ 0x14066D990
 * Callers:
 *     <none>
 * Callees:
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpForceInvalidatePostCallback(ULONG_PTR a1, __int64 a2)
{
  if ( (unsigned int)CmpSearchForOpenSubKeys(a1, 1LL, a2) )
    return 1LL;
  CmpMarkKeyUnbacked(a1);
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, 1);
  CmpDiscardKcb(a1);
  return 0LL;
}
