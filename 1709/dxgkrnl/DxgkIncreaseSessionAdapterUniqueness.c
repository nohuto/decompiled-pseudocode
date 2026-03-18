/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C00FC2E0
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C00FC260 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C00FC2B0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C0104B30 (DxgkSessionReconnected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkIncreaseSessionAdapterUniqueness(__int64 a1)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v4; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  volatile signed __int32 *v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 73);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId, v4);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v6 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2313);
    if ( v6 )
      _InterlockedIncrement(v6);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v8 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v9);
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
