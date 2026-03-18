/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C00A6DA8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000D578 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00FAAB0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00FB274 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void DxgkDestroyCsrssProcess()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  SESSION_ADAPTER *v15; // rbp
  SESSION_ADAPTER **v16; // rdx
  SESSION_ADAPTER **v17; // rcx

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
  if ( !SessionDataForSpecifiedSession )
  {
    v13 = WdLogNewEntry5_WdAssertion(v1, v0, v3, v4);
    *(_QWORD *)(v13 + 24) = 457LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = *((_QWORD *)SessionDataForSpecifiedSession + 2323);
  if ( v7 != PsGetCurrentProcess() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v14 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v12 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2317);
  while ( v12 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18536) )
  {
    v15 = (SESSION_ADAPTER *)(v12 - 4);
    v12 = (_QWORD *)*v12;
    SESSION_ADAPTER::Cleanup(v15);
    v16 = (SESSION_ADAPTER **)*((_QWORD *)v15 + 4);
    v17 = (SESSION_ADAPTER **)*((_QWORD *)v15 + 5);
    if ( v16[1] != (SESSION_ADAPTER *)((char *)v15 + 32) || *v17 != (SESSION_ADAPTER *)((char *)v15 + 32) )
      __fastfail(3u);
    *v17 = (SESSION_ADAPTER *)v16;
    v16[1] = (SESSION_ADAPTER *)v17;
    if ( v15 )
      SESSION_ADAPTER::`scalar deleting destructor'(v15);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2324) = 0LL;
}
