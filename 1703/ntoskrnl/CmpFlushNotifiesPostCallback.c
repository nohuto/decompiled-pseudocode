/*
 * XREFs of CmpFlushNotifiesPostCallback @ 0x14066D950
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpFlushNotifiesPostCallback(__int64 a1, unsigned int *a2)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *a2, *((_BYTE *)a2 + 5));
  return 0LL;
}
