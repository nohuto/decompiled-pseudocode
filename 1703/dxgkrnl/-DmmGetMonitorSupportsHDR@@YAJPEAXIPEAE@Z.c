/*
 * XREFs of ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01D2304
 * Callers:
 *     ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C016DCB0 (-DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00E17DC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00E187C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00F2068 (MonitorIsMonitorAndLinkHDRCapable.c)
 */

__int64 __fastcall DmmGetMonitorSupportsHDR(DXGADAPTER *a1, unsigned int a2, char *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  VIDPN_MGR *v11; // rbp
  __int64 v12; // r9
  int ConnectedMonitorHandle; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct HDXGMONITOR__ *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  struct HDXGMONITOR__ *v28; // [rsp+40h] [rbp+8h] BYREF
  __int64 v29; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 285) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 285) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v29, (__int64)v11, v8, v9);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v11, (unsigned int)v4, &v28, v12);
  v18 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle >= 0 )
  {
    v23 = v28;
    if ( !v28 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      WdLogEvent5_WdAssertion(v24);
    }
    LODWORD(v18) = MonitorIsMonitorAndLinkHDRCapable(v23, a3, v16, v17);
    VIDPN_MGR::ReleaseMonitorHandle(v11, v23, v25, v26);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v19 + 24) = v4;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdError(v19);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40), v20, v21, v22);
  return (unsigned int)v18;
}
