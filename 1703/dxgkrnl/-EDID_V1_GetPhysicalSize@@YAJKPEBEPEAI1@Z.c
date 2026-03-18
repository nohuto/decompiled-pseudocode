/*
 * XREFs of ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0004038
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012189C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFFE0 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C00047C4 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0004840 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetPhysicalSize(__int64 a1, unsigned __int8 *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 result; // rax
  bool v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  _QWORD v14[12]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int8 *v15; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  v14[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v14, a2, 0x80u);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    v8 = 10 * *(unsigned __int8 *)(v14[0] + 21LL);
    v9 = 10 * *(unsigned __int8 *)(v14[0] + 22LL);
    if ( MonDescParser::EDID_PARSER::GetDetTimParser(
           (MonDescParser::EDID_PARSER *)v14,
           0,
           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v15,
           v7)
      && ((v10 = v15[12] + (v15[14] >> 4 << 8), v11 = v15[13] + ((v15[14] & 0xF) << 8), v10 < v8)
        ? (v12 = v8 - v10)
        : (v12 = v10 - v8),
          v12 < 0xA && (v11 < v9 ? (v13 = v9 - v11) : (v13 = v11 - v9), v13 < 0xA)) )
    {
      *a3 = v10;
      *a4 = v11;
    }
    else
    {
      *a3 = v8;
      *a4 = v9;
    }
    return 0LL;
  }
  return result;
}
