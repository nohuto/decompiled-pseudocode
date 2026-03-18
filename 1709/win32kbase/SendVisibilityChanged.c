/*
 * XREFs of SendVisibilityChanged @ 0x1C005EE40
 * Callers:
 *     <none>
 * Callees:
 *     SendCursorManagementNotification @ 0x1C005DE24 (SendCursorManagementNotification.c)
 */

void __fastcall SendVisibilityChanged(unsigned __int8 a1)
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  v1[1] = 0;
  v1[3] = 0;
  v2 = 0LL;
  v1[0] = 0;
  v1[2] = a1;
  SendCursorManagementNotification(v1);
}
