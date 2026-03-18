/*
 * XREFs of DxgkCreateSessionViewForCurrentSession @ 0x1C00A5254
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00FABF0 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 */

int __fastcall DxgkCreateSessionViewForCurrentSession(
        struct _LUID *a1,
        unsigned int a2,
        struct tagRECT *a3,
        unsigned __int8 a4,
        struct _LUID *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  struct SESSION_VIEW **v18; // [rsp+30h] [rbp-18h]

  SessionDataForSpecifiedSession = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = (struct _KTHREAD **)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                           CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession[2315] != KeGetCurrentThread() )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9, v12, v13);
      *(_QWORD *)(v17 + 24) = 633LL;
      WdLogEvent5_WdAssertion(v17);
    }
    return DXGSESSIONDATA::AddSourceViewToSession(
             (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
             a3,
             a1,
             a2,
             a4,
             a5,
             v18);
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v16 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return -1073741811;
  }
}
