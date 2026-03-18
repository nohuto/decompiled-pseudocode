/*
 * XREFs of ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C00477A4
 * Callers:
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C023AECC (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00031D4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetColorDataRaw(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DATA_RAW *a3)
{
  __int64 result; // rax
  int *v4; // r11
  unsigned __int64 v5; // r8
  __int16 v6; // [rsp+28h] [rbp-70h]
  _QWORD v7[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v7[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a2, a1);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(v7[0] + 25LL);
    v6 = *(_WORD *)(v7[0] + 33LL);
    *v4 = ((unsigned __int8)v5 >> 6) | (4 * BYTE2(v5));
    v4[1] = ((unsigned __int8)v5 >> 4) & 3 | (4 * BYTE3(v5));
    v4[2] = ((unsigned __int8)v5 >> 2) & 3 | (4 * BYTE4(v5));
    v4[3] = v5 & 3 | (4 * BYTE5(v5));
    v4[4] = (BYTE1(v5) >> 6) | (4 * BYTE6(v5));
    v4[5] = (BYTE1(v5) >> 4) & 3 | (4 * HIBYTE(v5));
    v4[6] = (BYTE1(v5) >> 2) & 3 | (4 * (unsigned __int8)v6);
    v4[7] = BYTE1(v5) & 3 | (4 * HIBYTE(v6));
    return 0LL;
  }
  return result;
}
