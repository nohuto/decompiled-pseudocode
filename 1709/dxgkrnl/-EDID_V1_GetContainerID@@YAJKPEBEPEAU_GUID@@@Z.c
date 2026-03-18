/*
 * XREFs of ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C00114F4
 * Callers:
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C010D18C (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0009190 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00118AC (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 */

__int64 __fastcall EDID_V1_GetContainerID(unsigned int a1, unsigned __int8 *a2, struct _GUID *a3)
{
  __int64 result; // rax
  _BYTE v5[5]; // [rsp+20h] [rbp-88h] BYREF
  struct _GUID v6; // [rsp+25h] [rbp-83h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v8; // [rsp+90h] [rbp-18h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v8 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a2, a1);
  if ( (int)result >= 0 )
  {
    if ( MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v7,
           (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)v5) )
    {
      *a3 = v6;
      a3->Data1 = _byteswap_ulong(a3->Data1);
      a3->Data2 = __ROR2__(a3->Data2, 8);
      a3->Data3 = __ROR2__(a3->Data3, 8);
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
