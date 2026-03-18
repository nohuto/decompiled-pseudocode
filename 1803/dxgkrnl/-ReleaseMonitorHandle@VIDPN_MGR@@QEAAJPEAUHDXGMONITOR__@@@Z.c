/*
 * XREFs of ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00B8F10
 * Callers:
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C009E554 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C731C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D9A58 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C021B7E0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0220F74 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::ReleaseMonitorHandle(VIDPN_MGR *this, struct HDXGMONITOR__ *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v6 = *((_QWORD *)this + 1);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v9);
    v6 = *((_QWORD *)this + 1);
  }
  return MonitorReleaseMonitorHandle(*(DXGADAPTER **)(v6 + 16), (__int64)a2, (void *)0x4E506456, a4);
}
