/*
 * XREFs of ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0044904
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     MonitorGetNumConnectedMonitor @ 0x1C00A72F8 (MonitorGetNumConnectedMonitor.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::GetNumTargetsWithMonitorObjects(
        VIDPN_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  if ( !*((_QWORD *)this + 1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (int)MonitorGetNumConnectedMonitor(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) < 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  return 1LL;
}
