/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1C009A800
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00ED468 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00FAB1C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 */

__int64 __fastcall DxgkRemoveSessionViewForCurrentSession(struct _LUID *a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **SessionDataForSpecifiedSession; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rbx
  __int64 v14; // rax

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
      v14 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
      *(_QWORD *)(v14 + 24) = 680LL;
      WdLogEvent5_WdAssertion(v14);
    }
    return DXGSESSIONDATA::RemoveSourceViewFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession, a1, a2, a3);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v13 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
