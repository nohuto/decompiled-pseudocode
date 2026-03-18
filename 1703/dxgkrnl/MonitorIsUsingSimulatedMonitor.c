/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C00A7368
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00A72A0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00E399C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00EA080 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  MONITOR_MGR *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v12);
    }
    v10 = *((_QWORD *)this + 285);
    if ( v10 )
    {
      v7 = *(MONITOR_MGR **)(v10 + 96);
      if ( v7 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v7);
        return 0LL;
      }
    }
    v13 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
  }
  return 3221225485LL;
}
