/*
 * XREFs of ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0008E88
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01A872C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2C88 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C0003198 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00031D4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetPhysicalSize(__int64 a1, unsigned __int8 *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  _QWORD v13[12]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int8 *v14; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  v13[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v13, a2, 0x80u);
  if ( (int)result >= 0 )
  {
    v14 = 0LL;
    v7 = 10 * *(unsigned __int8 *)(v13[0] + 21LL);
    v8 = 10 * *(unsigned __int8 *)(v13[0] + 22LL);
    if ( MonDescParser::EDID_PARSER::GetDetTimParser(
           (MonDescParser::EDID_PARSER *)v13,
           0,
           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v14) )
    {
      v9 = v14[12] + (v14[14] >> 4 << 8);
      v10 = v14[13] + ((v14[14] & 0xF) << 8);
      if ( v9 < v7 )
        v11 = v7 - v9;
      else
        v11 = v9 - v7;
      if ( v11 >= 0xA || (v10 < v8 ? (v12 = v8 - v10) : (v12 = v10 - v8), v12 >= 0xA) )
      {
        v10 = v8;
        v9 = v7;
      }
      *a3 = v9;
      *a4 = v10;
    }
    else
    {
      *a3 = v7;
      *a4 = v8;
    }
    return 0LL;
  }
  return result;
}
