/*
 * XREFs of ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C000FD20
 * Callers:
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01066DC (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0004840 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0010000 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 *     ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0046174 (-GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VE.c)
 */

__int64 __fastcall EDID_V1_GetColorDepths(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DEPTHS *a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  int v7; // edx
  __int64 v8; // rax
  int v9; // eax
  __int16 v10; // r9
  int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v13[12]; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v13[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v13, a2, a1);
  if ( (int)result < 0 )
    return result;
  v12 = 0uLL;
  *(_QWORD *)&v12 = 0LL;
  *(_OWORD *)a3 = 0uLL;
  *((_DWORD *)a3 + 4) = 0;
  if ( MonDescParser::EDID_PARSER::GetHdmiLLCVendorDataBlock(
         (MonDescParser::EDID_PARSER *)v13,
         (struct _EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC *)&v12) )
  {
    v7 = ((unsigned __int64)v12 >> 42) & 0x1C | 2;
    *(_DWORD *)a3 = v7;
    if ( (v12 & 0x80000000000LL) != 0 )
    {
      v8 = v13[0];
      *((_DWORD *)a3 + 1) = v7;
      *((_DWORD *)a3 + 2) = (*(_BYTE *)(v8 + 24) & 0x10) != 0 ? v7 : 0;
    }
    v14 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetHdmiForumVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v13,
           (struct _EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC *)&v14) )
    {
      *((_DWORD *)a3 + 3) |= (v14 >> 46) & 0x1C;
    }
    return 0LL;
  }
  v5 = v13[0];
  v6 = *(_BYTE *)(v13[0] + 20LL);
  if ( v6 >= 0x80u )
  {
    switch ( (v6 >> 4) & 7 )
    {
      case 0:
        goto LABEL_27;
      case 1:
        *(_DWORD *)a3 = 1;
        break;
      case 2:
LABEL_27:
        *(_DWORD *)a3 = 2;
        break;
      case 3:
        *(_DWORD *)a3 = 6;
        break;
      case 4:
      case 5:
        *(_DWORD *)a3 = 14;
        break;
      case 6:
        *(_DWORD *)a3 = 30;
        break;
      case 7:
        return 3221225485LL;
    }
    switch ( (*(unsigned __int8 *)(v5 + 24) >> 3) & 3 )
    {
      case 0:
        v10 = *(_WORD *)(v5 + 33);
        *(_QWORD *)&v12 = *(_QWORD *)(v5 + 25);
        WORD4(v12) = v10;
        if ( !(((unsigned __int8)v12 >> 6) | (4 * BYTE2(v12)))
          && !(((unsigned __int8)v12 >> 4) & 3 | (4 * BYTE3(v12)))
          && !(((unsigned __int8)v12 >> 2) & 3 | (4 * BYTE4(v12)))
          && !(v12 & 3 | (4 * (unsigned int)BYTE5(v12)))
          && !((BYTE1(v12) >> 6) | (4 * BYTE6(v12)))
          && !((BYTE1(v12) >> 4) & 3 | (4 * BYTE7(v12)))
          && (BYTE1(v12) >> 2) & 3 | (4 * (unsigned __int8)v10) )
        {
          if ( BYTE1(v12) & 3 | (4 * HIBYTE(v10)) )
          {
            v11 = *(_DWORD *)a3;
            *(_DWORD *)a3 = 0;
            *((_DWORD *)a3 + 4) = v11;
          }
        }
        return 0LL;
      case 1:
        *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
        return 0LL;
      case 2:
        v9 = *(_DWORD *)a3;
        break;
      case 3:
        v9 = *(_DWORD *)a3;
        *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
        break;
      default:
        return 0LL;
    }
    *((_DWORD *)a3 + 2) = v9;
    return 0LL;
  }
  return 3221226021LL;
}
