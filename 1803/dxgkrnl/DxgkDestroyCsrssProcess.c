/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C01D0F50
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0036400 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00A2614 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01CE5F0 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkDestroyCsrssProcess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  DXGADAPTER **v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 74);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v6 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v6 + 24) = 457LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)SessionDataForSpecifiedSession + 2324);
  if ( v7 != PsGetCurrentProcess(v2, v1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v10 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2318);
  while ( v10 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18544) )
  {
    v11 = (DXGADAPTER **)(v10 - 4);
    v12 = v10;
    v10 = (_QWORD *)*v10;
    SESSION_ADAPTER::Cleanup(v11);
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    if ( v11 )
      SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v11);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2325) = 0LL;
}
