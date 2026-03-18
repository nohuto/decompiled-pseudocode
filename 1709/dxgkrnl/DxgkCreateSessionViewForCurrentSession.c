/*
 * XREFs of DxgkCreateSessionViewForCurrentSession @ 0x1C00F84DC
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00B289C (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 */

__int64 __fastcall DxgkCreateSessionViewForCurrentSession(
        struct _LUID *a1,
        unsigned int a2,
        struct tagRECT *a3,
        unsigned __int8 a4,
        struct _LUID *a5)
{
  __int64 v9; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax

  SessionDataForSpecifiedSession = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    SessionDataForSpecifiedSession = (struct _KTHREAD **)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                           CurrentProcessSessionId,
                                                           v12);
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession[2316] != KeGetCurrentThread() )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v16 + 24) = 633LL;
      WdLogEvent5_WdAssertion(v16);
    }
    return DXGSESSIONDATA::AddSourceViewToSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession, a3, a1, a2, a4, a5);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v15);
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
