/*
 * XREFs of ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001029C
 * Callers:
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z @ 0x1C0107084 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C0107A98 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C0108A44 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C01E84F8 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0004840 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_IsEDIDBaseBlock(unsigned __int8 *a1)
{
  _BYTE v2[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v3; // [rsp+70h] [rbp-18h]

  if ( !a1 )
    return 3221225485LL;
  v3 = 0LL;
  return MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v2, a1, 0x80u);
}
