/*
 * XREFs of SendClipChanged @ 0x1C005DDF0
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C005DCD4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 * Callees:
 *     SendCursorManagementNotification @ 0x1C005DE24 (SendCursorManagementNotification.c)
 */

__int64 __fastcall SendClipChanged(__int128 *a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  v3 = *a1;
  v2 = 2LL;
  return SendCursorManagementNotification(&v2);
}
