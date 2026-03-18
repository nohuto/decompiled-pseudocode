/*
 * XREFs of ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000C954
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C01095B0 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D877C (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C0009118 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0009190 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetPreferredMode(unsigned __int8 *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 result; // rax
  unsigned __int8 *v4; // rax
  int v5; // ecx
  int v6; // edx
  _BYTE v7[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]
  unsigned __int8 *v9; // [rsp+90h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v8 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetDetTimParser(
           (MonDescParser::EDID_PARSER *)v7,
           0,
           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v9) )
    {
      v4 = v9;
      v5 = v9[5];
      *(_DWORD *)a2 = v9[2] + (v9[4] >> 4 << 8);
      v6 = v5 + (v4[7] >> 4 << 8);
      *((_BYTE *)a2 + 8) = v4[17] >> 7;
      result = 0LL;
      *((_DWORD *)a2 + 1) = v6;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
