/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C0107138
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C01175CC (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(
        D3DDDI_VIDEO_PRESENT_TARGET_ID *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  ADAPTER_DISPLAY *v6; // rsi
  __int64 v7; // rax
  __int64 Value; // rdx
  DXGK_MONITORLINKINFO_CAPABILITIES *v9; // rcx
  int updated; // eax
  DXGK_MONITORLINKINFO_CAPABILITIES v11; // r8d
  int v12; // edi
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _DXGKARG_UPDATEMONITORLINKINFO v18; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  if ( !*((_QWORD *)this + 2) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2) + 8LL);
  if ( !v6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  v18.MonitorLinkInfo.Capabilities.Value = 0;
  v18.VideoPresentTargetId = this[7];
  v7 = *((_QWORD *)this + 5);
  Value = v4 & 1;
  v18.MonitorLinkInfo.UsageHints.Value = v4 & 1;
  v9 = *(DXGK_MONITORLINKINFO_CAPABILITIES **)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 936LL) + 96LL);
  if ( v9 )
  {
    v11.0 = v9[16].0;
    v12 = 0;
    v18.MonitorLinkInfo.Capabilities = v11;
  }
  else
  {
    v18.MonitorLinkInfo.Capabilities.Value = 0;
    updated = ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(v6, &v18);
    v11.0 = (struct _DXGK_MONITORLINKINFO_CAPABILITIES::$9E3BB2B9C51DA1466203AB97776F201E)v18.MonitorLinkInfo.Capabilities;
    v12 = updated;
    Value = v18.MonitorLinkInfo.UsageHints.Value;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL) + 192LL) + 64LL)
                  + 40LL);
  if ( *(_DWORD *)(v13 + 28) < 0x7000u )
    v12 = -1073741637;
  if ( v12 >= 0 )
  {
    this[6] |= 0x400u;
    this[102] = Value;
    this[103] = v11.Value;
  }
  else
  {
    this[6] &= ~0x400u;
    if ( v12 != -1073741637 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, Value);
      v17[3] = this;
      v17[4] = this[7];
      v17[5] = *((_QWORD *)v6 + 2);
      v17[6] = v12;
      WdLogEvent5_WdError(v17);
    }
  }
  return (unsigned int)v12;
}
