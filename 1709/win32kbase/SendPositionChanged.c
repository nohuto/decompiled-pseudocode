/*
 * XREFs of SendPositionChanged @ 0x1C005EE00
 * Callers:
 *     <none>
 * Callees:
 *     SendCursorManagementNotification @ 0x1C005DE24 (SendCursorManagementNotification.c)
 */

void __fastcall SendPositionChanged(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[0] = 0LL;
  v2[2] = 0LL;
  v1 = *a1;
  LODWORD(v2[0]) = 1;
  v2[1] = v1;
  SendCursorManagementNotification(v2);
}
