/*
 * XREFs of SendSuppressionStateChanged @ 0x1C012D820
 * Callers:
 *     <none>
 * Callees:
 *     SendCursorManagementNotification @ 0x1C005DE24 (SendCursorManagementNotification.c)
 */

void __fastcall SendSuppressionStateChanged(unsigned __int8 a1, __int64 a2)
{
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2[1] = 0;
  v2[3] = 0;
  v2[2] = a1;
  v2[0] = 3;
  v3 = a2;
  SendCursorManagementNotification(v2);
}
