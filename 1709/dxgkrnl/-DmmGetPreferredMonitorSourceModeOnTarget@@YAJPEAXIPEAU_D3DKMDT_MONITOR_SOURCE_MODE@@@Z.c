/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00F58D8
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C0171480 (-DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01A1324 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00A99F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00A9AB0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C00F5990 (MonitorGetPreferredMonitorSourceMode.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  VIDPN_MGR *v7; // rbp
  int ConnectedMonitorHandle; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct HDXGMONITOR__ *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct HDXGMONITOR__ *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 288) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 288) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v17, (__int64)v7);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v7, v4, &v16);
  v10 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = v10;
    WdLogEvent5_WdError(v14);
  }
  else
  {
    v11 = v16;
    if ( !v16 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v15);
    }
    LODWORD(v10) = MonitorGetPreferredMonitorSourceMode(v11, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v7, v11);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40));
  return (unsigned int)v10;
}
