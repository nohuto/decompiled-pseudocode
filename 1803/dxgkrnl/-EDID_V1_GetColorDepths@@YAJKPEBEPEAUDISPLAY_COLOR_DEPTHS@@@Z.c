/*
 * XREFs of ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00478F0
 * Callers:
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C023AECC (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00031D4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0048820 (-GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VE.c)
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00488E0 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 */

__int64 __fastcall EDID_V1_GetColorDepths(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DEPTHS *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  int v10; // eax
  __int16 v11; // r9
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v14[12]; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 v15; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v14[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v14, a2, a1);
  if ( (int)result < 0 )
    return result;
  v13 = 0uLL;
  *(_QWORD *)&v13 = 0LL;
  *(_OWORD *)a3 = 0uLL;
  *((_DWORD *)a3 + 4) = 0;
  if ( MonDescParser::EDID_PARSER::GetHdmiLLCVendorDataBlock(
         (MonDescParser::EDID_PARSER *)v14,
         (struct _EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC *)&v13) )
  {
    v5 = v13;
    v6 = ((unsigned __int64)v13 >> 42) & 0xC | ((unsigned __int64)v13 >> 41) & 0x20 | 2;
    *(_DWORD *)a3 = v6;
    if ( (v5 & 0x80000000000LL) != 0 )
    {
      v7 = v14[0];
      *((_DWORD *)a3 + 1) = v6;
      *((_DWORD *)a3 + 2) = (*(_BYTE *)(v7 + 24) & 0x10) != 0 ? v6 : 0;
    }
    v15 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetHdmiForumVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v14,
           (struct _EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC *)&v15) )
    {
      *((_DWORD *)a3 + 3) |= (v15 >> 46) & 0xC | (v15 >> 45) & 0x20;
    }
    return 0LL;
  }
  v8 = v14[0];
  v9 = *(_BYTE *)(v14[0] + 20LL);
  if ( (v9 & 0x80u) == 0 )
    return 3221226021LL;
  switch ( (v9 >> 4) & 7 )
  {
    case 0:
      goto LABEL_27;
    case 1:
      *(_DWORD *)a3 = 1;
      goto LABEL_28;
    case 2:
LABEL_27:
      *(_DWORD *)a3 = 2;
LABEL_28:
      switch ( (*(unsigned __int8 *)(v8 + 24) >> 3) & 3 )
      {
        case 0:
          v11 = *(_WORD *)(v8 + 33);
          *(_QWORD *)&v13 = *(_QWORD *)(v8 + 25);
          WORD4(v13) = v11;
          if ( !(((unsigned __int8)v13 >> 6) | (4 * BYTE2(v13)))
            && !(((unsigned __int8)v13 >> 4) & 3 | (4 * BYTE3(v13)))
            && !(((unsigned __int8)v13 >> 2) & 3 | (4 * BYTE4(v13)))
            && !(v13 & 3 | (4 * (unsigned int)BYTE5(v13)))
            && !((BYTE1(v13) >> 6) | (4 * BYTE6(v13)))
            && !((BYTE1(v13) >> 4) & 3 | (4 * BYTE7(v13)))
            && (BYTE1(v13) >> 2) & 3 | (4 * (unsigned __int8)v11)
            && BYTE1(v13) & 3 | (4 * HIBYTE(v11)) )
          {
            v12 = *(_DWORD *)a3;
            *(_DWORD *)a3 = 0;
            *((_DWORD *)a3 + 4) = v12;
          }
          return 0LL;
        case 1:
          *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
          return 0LL;
        case 2:
          v10 = *(_DWORD *)a3;
          break;
        case 3:
          v10 = *(_DWORD *)a3;
          *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
          break;
        default:
          return 0LL;
      }
      *((_DWORD *)a3 + 2) = v10;
      return 0LL;
    case 3:
      *(_DWORD *)a3 = 6;
      goto LABEL_28;
    case 4:
      *(_DWORD *)a3 = 14;
      goto LABEL_28;
    case 5:
      *(_DWORD *)a3 = 30;
      goto LABEL_28;
    case 6:
      *(_DWORD *)a3 = 62;
      goto LABEL_28;
  }
  if ( ((v9 >> 4) & 7) != 7 )
    goto LABEL_28;
  return 3221225485LL;
}
