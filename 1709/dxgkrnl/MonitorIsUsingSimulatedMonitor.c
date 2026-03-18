/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C00E4E8C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00A790C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00B108C (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, char *a2)
{
  MONITOR_MGR *v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v7);
    }
    v5 = *((_QWORD *)this + 288);
    if ( v5 )
    {
      v4 = *(MONITOR_MGR **)(v5 + 96);
      if ( v4 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v4);
        return 0LL;
      }
    }
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
  }
  return 3221225485LL;
}
