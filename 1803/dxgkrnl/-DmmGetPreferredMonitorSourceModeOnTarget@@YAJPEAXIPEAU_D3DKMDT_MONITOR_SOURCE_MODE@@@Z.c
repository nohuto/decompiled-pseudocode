/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C731C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00B8E74 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00B8F10 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C00C73D4 (MonitorGetPreferredMonitorSourceMode.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct HDXGMONITOR__ *v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 307) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 307) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, (__int64)v7);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v7, v4, &v18);
  v10 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    v11 = v18;
    if ( !v18 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v17);
    }
    LODWORD(v10) = MonitorGetPreferredMonitorSourceMode(v11, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v7, v11, v12, v13);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
  return (unsigned int)v10;
}
