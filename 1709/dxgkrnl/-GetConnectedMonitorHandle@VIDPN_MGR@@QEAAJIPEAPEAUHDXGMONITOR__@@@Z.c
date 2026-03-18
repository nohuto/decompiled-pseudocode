/*
 * XREFs of ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00A99F8
 * Callers:
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00E2198 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00F58D8 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00F5D08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01EC54C (-DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01F0320 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01F1AA0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::GetConnectedMonitorHandle(VIDPN_MGR *this, unsigned int a2, struct HDXGMONITOR__ **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int MonitorHandle; // edi
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = a2;
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  *a3 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
  v6 = *((_QWORD *)this + 10);
  if ( IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v6, v3) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v16);
    }
    MonitorHandle = MonitorGetMonitorHandle(
                      *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
                      v3,
                      0,
                      (void *)0x4E506456,
                      (__int64)a3);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = v3;
    if ( !*((_QWORD *)this + 1) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v15);
    }
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v14);
    MonitorHandle = -1071774971;
  }
  if ( v6 )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))(v6 + 64);
    v10 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 72));
    if ( v10 )
    {
      if ( v10 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v17 + 24) = v10;
        WdLogEvent5_WdError(v17);
      }
    }
    else if ( v9 )
    {
      (**v9)(v9, 1LL);
    }
  }
  return MonitorHandle;
}
