/*
 * XREFs of SendPositionChanged @ 0x1C0072110
 * Callers:
 *     <none>
 * Callees:
 *     SendCursorManagementNotification @ 0x1C00726F4 (SendCursorManagementNotification.c)
 */

__int64 __fastcall SendPositionChanged(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 0LL;
  v3[2] = 0LL;
  v1 = *a1;
  LODWORD(v3[0]) = 1;
  v3[1] = v1;
  return SendCursorManagementNotification(v3);
}
