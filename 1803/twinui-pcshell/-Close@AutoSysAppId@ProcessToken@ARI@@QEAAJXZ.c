/*
 * XREFs of ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18000CB54
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000C7EC (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800413D0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180095590 (-Free@ARI@@YAXPEAX@Z.c)
 */

__int64 __fastcall ARI::ProcessToken::AutoSysAppId::Close(ARI::ProcessToken::AutoSysAppId *this, void *a2)
{
  void *v3; // rcx

  v3 = *(void **)this;
  if ( v3 )
  {
    ARI::Free(v3, a2);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return 0LL;
}
