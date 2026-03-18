/*
 * XREFs of DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00A5784
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00FAAB0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 DxgkRemoveAllSessionViewForCurrentSession()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rbx
  __int64 v8; // rax

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
      v8 = WdLogNewEntry5_WdAssertion(v1, v0, v3, v4);
      *(_QWORD *)(v8 + 24) = 721LL;
      WdLogEvent5_WdAssertion(v8);
    }
    DXGSESSIONDATA::RemoveAllSourceViewFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v1, v0);
    *(_QWORD *)(v7 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
