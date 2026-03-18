/*
 * XREFs of SendVisibilityChanged @ 0x1C0071BE0
 * Callers:
 *     <none>
 * Callees:
 *     SendCursorManagementNotification @ 0x1C00726F4 (SendCursorManagementNotification.c)
 */

__int64 __fastcall SendVisibilityChanged(unsigned __int8 a1)
{
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2[1] = 0;
  v2[3] = 0;
  v3 = 0LL;
  v2[0] = 0;
  v2[2] = a1;
  return SendCursorManagementNotification(v2);
}
