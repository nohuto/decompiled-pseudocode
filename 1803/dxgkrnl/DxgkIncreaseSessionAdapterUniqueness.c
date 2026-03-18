/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C01D111C
 * Callers:
 *     DxgkSessionConnected @ 0x1C01A2080 (DxgkSessionConnected.c)
 *     DxgkSessionDisconnected @ 0x1C01A2130 (DxgkSessionDisconnected.c)
 *     DxgkSessionReconnected @ 0x1C01A21F0 (DxgkSessionReconnected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkIncreaseSessionAdapterUniqueness(__int64 a1)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  volatile signed __int32 *v8; // rax

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 74);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v8 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2313);
    if ( v8 )
      _InterlockedIncrement(v8);
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
