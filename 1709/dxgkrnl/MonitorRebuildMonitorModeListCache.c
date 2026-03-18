/*
 * XREFs of MonitorRebuildMonitorModeListCache @ 0x1C01047D0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C00F3AA8 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010485C (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int i; // edx
  int NextVideoPresentTarget; // eax
  __int64 v10; // rax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  v6 = 0;
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = 4294967293LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 288) )
    {
      for ( i = -1; ; i = v11 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget(a1, i, &v11);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper(a1, v11, a3);
      }
      if ( NextVideoPresentTarget != -1073741275 )
        return (unsigned int)NextVideoPresentTarget;
    }
    return v6;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(4294967293LL);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}
