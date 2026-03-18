/*
 * XREFs of MonitorGetNumConnectedMonitor @ 0x1C00E4E1C
 * Callers:
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C003556C (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00A790C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00E4D80 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorGetNumConnectedMonitor(DXGADAPTER *this, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( this && a2 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v7);
    }
    v5 = *((_QWORD *)this + 288);
    if ( v5 )
    {
      v4 = *(_QWORD *)(v5 + 96);
      if ( v4 )
      {
        *a2 = *(_DWORD *)(v4 + 120);
        return 0LL;
      }
    }
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
  }
  return 3221225485LL;
}
