/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C01096FC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C0106094 (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(D3DDDI_VIDEO_PRESENT_TARGET_ID *this, char a2, __int64 a3)
{
  ADAPTER_DISPLAY *v5; // rsi
  __int64 v6; // rax
  DXGK_MONITORLINKINFO_USAGEHINTS v7; // edx
  DXGK_MONITORLINKINFO_CAPABILITIES *v8; // rcx
  int updated; // eax
  DXGK_MONITORLINKINFO_CAPABILITIES v10; // r8d
  int v11; // edi
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  _DXGKARG_UPDATEMONITORLINKINFO v17; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  v5 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2) + 8LL);
  if ( !v5 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  v17.MonitorLinkInfo.Capabilities.Value = 0;
  v17.VideoPresentTargetId = this[7];
  v6 = *((_QWORD *)this + 5);
  v7.Value = a2 & 1;
  v17.MonitorLinkInfo.UsageHints = v7;
  v8 = *(DXGK_MONITORLINKINFO_CAPABILITIES **)(*(_QWORD *)(*(_QWORD *)(v6 + 64) + 936LL) + 96LL);
  if ( v8 )
  {
    v10.0 = v8[16].0;
    v11 = 0;
    v17.MonitorLinkInfo.Capabilities = v10;
  }
  else
  {
    v17.MonitorLinkInfo.Capabilities.Value = 0;
    updated = ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(v5, &v17, a3);
    v10.0 = (struct _DXGK_MONITORLINKINFO_CAPABILITIES::$9E3BB2B9C51DA1466203AB97776F201E)v17.MonitorLinkInfo.Capabilities;
    v11 = updated;
    v7.0 = (struct _DXGK_MONITORLINKINFO_USAGEHINTS::$93BFB232C2354556C10F40D8A24AA81F)v17.MonitorLinkInfo.UsageHints;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL) + 192LL) + 64LL)
                  + 40LL);
  if ( *(_DWORD *)(v12 + 28) < 0x7000u )
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    this[6] |= 0x400u;
    this[112] = v7.Value;
    this[113] = v10.Value;
  }
  else
  {
    this[6] &= ~0x400u;
    if ( v11 != -1073741637 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v16[3] = this;
      v16[4] = this[7];
      v16[5] = *((_QWORD *)v5 + 2);
      v16[6] = v11;
      WdLogEvent5_WdError(v16);
    }
  }
  return (unsigned int)v11;
}
