/*
 * XREFs of ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C000F628
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00F9BF8 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C010722C (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0004840 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorManufactureDate(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int16 *a3)
{
  int v5; // eax
  unsigned int v6; // r11d
  unsigned __int8 *v7; // rcx
  unsigned __int8 v8; // al
  bool v9; // cc
  _QWORD v11[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( a1 && a2 && a3 )
  {
    v11[10] = 0LL;
    v5 = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v11, a1, 0x80u);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v7 = (unsigned __int8 *)v11[0];
    *a2 = *(_BYTE *)(v11[0] + 16LL);
    *a3 = v7[17] + 1990;
    v8 = v7[18];
    if ( v8 != 1 )
      goto LABEL_15;
    if ( v7[19] == 3 )
    {
      v9 = *a2 <= 0x36u;
LABEL_8:
      if ( v9 )
      {
LABEL_9:
        if ( *a3 > 0x7C9u )
          return v6;
        *a3 = v6;
        return (unsigned int)-1071841270;
      }
LABEL_12:
      *a2 = v6;
      return (unsigned int)-1071841270;
    }
    if ( v7[19] < 4u )
    {
LABEL_15:
      if ( v8 < 3u )
      {
        if ( (unsigned __int8)(*a2 - 1) <= 0x35u )
          goto LABEL_9;
        goto LABEL_12;
      }
    }
    if ( *a2 == 0xFF )
    {
      *a2 = v6;
      goto LABEL_9;
    }
    v9 = *a2 <= 0x36u;
    goto LABEL_8;
  }
  return 3221225485LL;
}
