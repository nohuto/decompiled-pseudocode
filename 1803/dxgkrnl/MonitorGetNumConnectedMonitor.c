/*
 * XREFs of MonitorGetNumConnectedMonitor @ 0x1C00C7B00
 * Callers:
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0044968 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C7A64 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0211648 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorGetNumConnectedMonitor(DXGADAPTER *this, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( this && a2 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
    }
    v7 = *((_QWORD *)this + 307);
    if ( v7 )
    {
      v6 = *(_QWORD *)(v7 + 96);
      if ( v6 )
      {
        *a2 = *(_DWORD *)(v6 + 120);
        return 0LL;
      }
    }
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
  }
  return 3221225485LL;
}
