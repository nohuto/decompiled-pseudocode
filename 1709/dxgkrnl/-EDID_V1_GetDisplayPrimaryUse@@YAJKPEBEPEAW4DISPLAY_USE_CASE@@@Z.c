/*
 * XREFs of ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0011848
 * Callers:
 *     ?_ParseEDIDForMsftVSDB@DXGMONITOR@@AEAAJXZ @ 0x1C0108DA0 (-_ParseEDIDForMsftVSDB@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0009190 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00118AC (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 */

__int64 __fastcall EDID_V1_GetDisplayPrimaryUse(unsigned int a1, unsigned __int8 *a2, enum DISPLAY_USE_CASE *a3)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v7; // [rsp+90h] [rbp-18h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v7 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v6, a2, a1);
  if ( (int)result >= 0 )
  {
    if ( MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v6,
           (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)v5) )
    {
      *(_BYTE *)a3 = v5[4] & 0xF;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
