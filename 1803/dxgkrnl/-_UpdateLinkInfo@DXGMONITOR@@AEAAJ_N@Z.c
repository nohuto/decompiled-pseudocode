/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C023851C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C0163DD0 (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C020B0F0 (DpiGetIntegratedMonitorLinkInfo.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(DXGMONITOR *this, unsigned __int8 a2)
{
  __int64 v2; // r8
  char v5; // r15
  __int64 v6; // rax
  DXGADAPTER **v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  int updated; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // ebx
  DXGADAPTER *v15; // rcx
  __int64 v16; // r8
  __int64 Value; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  DXGK_MONITORLINKINFO_USAGEHINTS v22; // eax
  char v23; // al
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _DXGKARG_UPDATEMONITORLINKINFO v28; // [rsp+20h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 4);
  v5 = 1;
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
    v2 = *((_QWORD *)this + 4);
  }
  v7 = *(DXGADAPTER ***)(v2 + 8);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
    v2 = *((_QWORD *)this + 4);
  }
  *((_DWORD *)this + 10) &= ~0x400u;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x7000u )
  {
    LODWORD(v9) = -1073741637;
    goto LABEL_33;
  }
  v28.MonitorLinkInfo.Capabilities.Value = 0;
  v28.MonitorLinkInfo.DitheringSupport.Value = 0;
  v28.VideoPresentTargetId = *((_DWORD *)this + 11);
  v28.MonitorLinkInfo.UsageHints.Value = a2;
  LODWORD(v9) = DpiGetIntegratedMonitorLinkInfo(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 192LL),
                  v28.VideoPresentTargetId);
  if ( (int)v9 < 0 )
  {
    v5 = 0;
    updated = ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo((ADAPTER_DISPLAY *)v7, &v28, v10);
    v9 = updated;
    if ( updated < 0 )
    {
      if ( updated != -1073741637 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v13[3] = this;
        v13[4] = *((unsigned int *)this + 11);
        v13[5] = v7[2];
        v13[6] = v9;
        WdLogEvent5_WdError(v13);
      }
      goto LABEL_32;
    }
  }
  v14 = 127;
  if ( (int)DXGADAPTER::GetDriverVersion(v7[2]) < 2400 )
  {
    if ( (unsigned int)DXGADAPTER::GetDriverVersion(v15) == 2300 && *(_DWORD *)(v20 + 276) == 1297040209 && v5 )
      v14 = 511;
    Value = v28.MonitorLinkInfo.Capabilities.Value;
    if ( (~v14 & v28.MonitorLinkInfo.Capabilities.Value) != 0 )
    {
      v21 = WdLogNewEntry5_WdError(v28.MonitorLinkInfo.Capabilities.Value);
      *(_QWORD *)(v21 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v21 + 32) = v7[2];
      WdLogEvent5_WdError(v21);
      Value = v14 & v28.MonitorLinkInfo.Capabilities.Value;
      v28.MonitorLinkInfo.Capabilities.Value &= v14;
    }
    goto LABEL_28;
  }
  Value = v28.MonitorLinkInfo.Capabilities.Value;
  if ( (v28.MonitorLinkInfo.Capabilities.Value & 0xFFFFFC00) == 0
    && (v5
     || *(_BYTE *)&v28.MonitorLinkInfo.Capabilities.0 >= 0
     && (*(_WORD *)&v28.MonitorLinkInfo.Capabilities.0 & 0x100) == 0) )
  {
    if ( (*(_WORD *)&v28.MonitorLinkInfo.Capabilities.0 & 0x200) != 0 )
    {
      v19 = *(_DWORD *)(v16 + 300);
      if ( (v19 & 0x200) == 0 && (v19 & 8) == 0 )
      {
        LODWORD(v9) = -1073741823;
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v28.MonitorLinkInfo.Capabilities.Value);
        v18[3] = this;
        v18[4] = *((unsigned int *)this + 11);
        v18[5] = v7[2];
        goto LABEL_14;
      }
    }
LABEL_28:
    v22.0 = (struct _DXGK_MONITORLINKINFO_USAGEHINTS::$93BFB232C2354556C10F40D8A24AA81F)v28.MonitorLinkInfo.UsageHints;
    *((_DWORD *)this + 10) |= 0x400u;
    *((DXGK_MONITORLINKINFO_USAGEHINTS *)this + 116) = v22;
    *((_DWORD *)this + 117) = Value;
    if ( *((int *)v7[2] + 526) >= 9216 )
    {
      v23 = (char)v28.MonitorLinkInfo.DitheringSupport.0;
      *((_DWORD *)this + 118) = v28.MonitorLinkInfo.DitheringSupport.Value;
      if ( (v23 & 3) == 0 )
        goto LABEL_32;
      v24 = (_QWORD *)WdLogNewEntry5_WdError(Value);
      v24[3] = *((unsigned int *)this + 118);
      v24[4] = this;
      v24[5] = *((unsigned int *)this + 11);
      v24[6] = v7[2];
      WdLogEvent5_WdError(v24);
    }
    *((_DWORD *)this + 118) = 0;
LABEL_32:
    if ( (int)v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_33;
  }
  LODWORD(v9) = -1073741823;
  v18 = (_QWORD *)WdLogNewEntry5_WdError(v28.MonitorLinkInfo.Capabilities.Value);
  v18[3] = *((unsigned int *)this + 11);
  v18[4] = v7[2];
  v18[5] = -1073741823LL;
LABEL_14:
  WdLogEvent5_WdError(v18);
LABEL_33:
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  if ( (int)DXGADAPTER::GetDriverVersion(v7[2]) >= 2400 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v26[3] = v7[2];
    v26[4] = *((unsigned int *)this + 11);
    v26[5] = (int)v9;
    WdLogEvent5_WdError(v26);
  }
  else
  {
    LODWORD(v9) = 0;
  }
  return (unsigned int)v9;
}
