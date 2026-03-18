/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C00FAB8C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0008130 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00B275C (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00B331C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkDestroyCsrssProcess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v5; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  DXGADAPTER **v12; // rbp
  DXGADAPTER *v13; // rdx
  DXGADAPTER ***v14; // rcx

  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 73);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId, v5);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v10 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v10 + 24) = 457LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v7 = *((_QWORD *)SessionDataForSpecifiedSession + 2324);
  if ( v7 != PsGetCurrentProcess(v2, v1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v11 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v9 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2318);
  while ( v9 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18544) )
  {
    v12 = (DXGADAPTER **)(v9 - 4);
    v9 = (_QWORD *)*v9;
    SESSION_ADAPTER::Cleanup(v12);
    v13 = v12[4];
    if ( *((DXGADAPTER ***)v13 + 1) != v12 + 4 || (v14 = (DXGADAPTER ***)v12[5], *v14 != v12 + 4) )
      __fastfail(3u);
    *v14 = (DXGADAPTER **)v13;
    *((_QWORD *)v13 + 1) = v14;
    if ( v12 )
      SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v12);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2325) = 0LL;
}
