/*
 * XREFs of ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01EC54C
 * Callers:
 *     ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C0171480 (-DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00A99F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00A9AB0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D237C (MonitorIsMonitorAndLinkHDRCapable.c)
 */

__int64 __fastcall DmmGetMonitorSupportsHDR(DXGADAPTER *a1, unsigned int a2, char *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  VIDPN_MGR *v8; // rbp
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  struct HDXGMONITOR__ *v13; // rbx
  __int64 v14; // rax
  struct HDXGMONITOR__ *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 288) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 288) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v17, (__int64)v8);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v8, v4, &v16);
  v11 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle >= 0 )
  {
    v13 = v16;
    if ( !v16 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v14);
    }
    LODWORD(v11) = MonitorIsMonitorAndLinkHDRCapable(v13, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v8, v13);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v4;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40));
  return (unsigned int)v11;
}
