/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C00A65A0
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C00A6520 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C00A6570 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C0105230 (DxgkSessionReconnected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 DxgkIncreaseSessionAdapterUniqueness()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  volatile signed __int32 *v5; // rax
  __int64 v7; // rbx

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v5 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2313);
    if ( v5 )
      _InterlockedIncrement(v5);
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
