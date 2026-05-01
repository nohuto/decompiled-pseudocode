/*
 * XREFs of ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180196778
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800EF740 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetCurTime @ 0x180195AF4 (_anonymous_namespace_--GetCurTime.c)
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180196E28 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801972C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDefaults(PenWorkspace::Discover::RecentAppsCache *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v5; // [rsp+20h] [rbp-50h] BYREF
  struct _FILETIME FileTime; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int16 *v7[6]; // [rsp+30h] [rbp-40h]

  anonymous_namespace_::GetCurTime(&FileTime);
  v2 = 0LL;
  v5 = 0;
  PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(this, FileTime, &v5);
  v7[0] = L"Microsoft.Getstarted_8wekyb3d8bbwe!App";
  v7[1] = L"Microsoft.Windows.Photos_8wekyb3d8bbwe!App";
  v7[2] = L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge";
  v7[3] = L"Microsoft.MSPaint_8wekyb3d8bbwe!Microsoft.MSPaint";
  v7[4] = L"Microsoft.WindowsMaps_8wekyb3d8bbwe!App";
  v7[5] = L"Microsoft.Office.OneNote_8wekyb3d8bbwe!microsoft.onenoteim";
  v3 = 6 - v5;
  if ( 6 - v5 > 0 )
  {
    do
      PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v7[v2++], &FileTime);
    while ( v2 < v3 );
  }
  return 0LL;
}
