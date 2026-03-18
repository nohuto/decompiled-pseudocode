/*
 * XREFs of CmPostCallbackNotification @ 0x1404E32B8
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(int a1, int a2, int a3, int a4, __int64 a5)
{
  return CmPostCallbackNotificationEx(a1, a2, a3, a4, 0LL, a5);
}
