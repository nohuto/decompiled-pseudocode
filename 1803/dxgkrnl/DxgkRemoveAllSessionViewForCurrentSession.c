/*
 * XREFs of DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DE82C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00A2614 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkRemoveAllSessionViewForCurrentSession(__int64 a1)
{
  __int64 v1; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax

  SessionDataForSpecifiedSession = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 74);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = (struct _KTHREAD **)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                           CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession[2316] != KeGetCurrentThread() )
    {
      v7 = WdLogNewEntry5_WdAssertion(v1);
      *(_QWORD *)(v7 + 24) = 723LL;
      WdLogEvent5_WdAssertion(v7);
    }
    DXGSESSIONDATA::RemoveAllSourceViewFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v5 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v6);
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
