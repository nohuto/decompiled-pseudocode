/*
 * XREFs of ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00E187C
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00A2674 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00ADA88 (-GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00ADF6C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01D2304 (-DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01D88E0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01DBD0C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::ReleaseMonitorHandle(VIDPN_MGR *this, struct HDXGMONITOR__ *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  return MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), a2, (PVOID)0x4E506456, a4);
}
