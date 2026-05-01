/*
 * XREFs of _anonymous_namespace_::GetCurTime @ 0x1800E7CD8
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800E8A08 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E9C98 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

BOOL __fastcall anonymous_namespace_::GetCurTime(LPFILETIME lpFileTime)
{
  _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  GetSystemTime(&SystemTime);
  return SystemTimeToFileTime(&SystemTime, lpFileTime);
}
