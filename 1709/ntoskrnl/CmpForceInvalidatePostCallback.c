/*
 * XREFs of CmpForceInvalidatePostCallback @ 0x140697EB0
 * Callers:
 *     <none>
 * Callees:
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpForceInvalidatePostCallback(ULONG_PTR a1, __int64 a2)
{
  if ( (unsigned int)CmpSearchForOpenSubKeys(a1, 1LL, a2) )
    return 1LL;
  CmpMarkKeyUnbacked(a1);
  CmpFlushNotifiesOnKeyBodyList(a1, 8, 1);
  CmpDiscardKcb(a1);
  return 0LL;
}
