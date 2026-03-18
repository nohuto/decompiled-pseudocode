/*
 * XREFs of ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0018614
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0108D84 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0235B14 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0237848 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C023A150 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00031D4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorProductCodeID(unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  _WORD *v3; // r11
  unsigned __int64 v4; // rdx
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v5, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v4 = *(unsigned __int8 *)(v5[0] + 10LL) | (unsigned __int64)(unsigned __int16)(*(unsigned __int8 *)(v5[0] + 11LL) << 8);
    v3[4] = 0;
    *v3 = a0123456789abcd[v4 >> 12];
    v3[1] = a0123456789abcd[(v4 >> 8) & 0xF];
    v3[2] = a0123456789abcd[(unsigned __int8)v4 >> 4];
    v3[3] = a0123456789abcd[v4 & 0xF];
    return 0LL;
  }
  return result;
}
