/*
 * XREFs of ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z @ 0x1C0107084
 * Callers:
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C010722C (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0108864 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C0108A44 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0108BE8 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001029C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     MonitorLogBadEDID @ 0x1C01E4118 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetHWMonitorBaseEDIDBlock(
        DXGMONITOR *this,
        unsigned __int8 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 **v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  int IsEDIDBaseBlock; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 **v13; // r11
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_13;
  v5 = (__int64 **)*((_QWORD *)this + 15);
  if ( !v5 )
    goto LABEL_13;
  v6 = *v5;
  if ( !v6 )
    goto LABEL_13;
  do
  {
    if ( *((_DWORD *)v6 + 2) == 2 )
      break;
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( v6 )
  {
    v7 = v6 + 3;
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v6 + 24);
    v14 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v16 + 24) = v7;
      *(_QWORD *)(v16 + 32) = v14;
      WdLogEvent5_WdWarning(v16);
      MonitorLogBadEDID(v7, (unsigned int)v14);
      return (unsigned int)v14;
    }
    else
    {
      *v13 = v7;
      return 0LL;
    }
  }
  else
  {
LABEL_13:
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdWarning(v17);
    return 3223126017LL;
  }
}
