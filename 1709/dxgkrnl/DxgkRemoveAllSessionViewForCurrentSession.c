/*
 * XREFs of DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00F8ABC
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00B275C (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkRemoveAllSessionViewForCurrentSession(__int64 a1)
{
  __int64 v1; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v4; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax

  SessionDataForSpecifiedSession = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = (struct _KTHREAD **)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                           CurrentProcessSessionId,
                                                           v4);
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession[2316] != KeGetCurrentThread() )
    {
      v8 = WdLogNewEntry5_WdAssertion(v1);
      *(_QWORD *)(v8 + 24) = 721LL;
      WdLogEvent5_WdAssertion(v8);
    }
    DXGSESSIONDATA::RemoveAllSourceViewFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v6 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v7);
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
