/*
 * XREFs of ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C003556C
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01EED18 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     MonitorGetNumConnectedMonitor @ 0x1C00E4E1C (MonitorGetNumConnectedMonitor.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::GetNumTargetsWithMonitorObjects(VIDPN_MGR *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !*((_QWORD *)this + 1) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( (int)MonitorGetNumConnectedMonitor(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v4);
  }
  return 1LL;
}
