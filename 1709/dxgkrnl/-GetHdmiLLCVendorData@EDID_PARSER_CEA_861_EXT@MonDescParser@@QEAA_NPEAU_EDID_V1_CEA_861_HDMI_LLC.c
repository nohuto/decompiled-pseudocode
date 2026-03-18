/*
 * XREFs of ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00375C0
 * Callers:
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00119A8 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0037464 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiLLCVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edx
  int v6; // edx
  bool result; // al
  int v8; // ecx
  struct _EDID_V1_CEA_861_DATA_HEADER *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  v4 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v9 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, v4, &v9)
      && (*(_BYTE *)v9 & 0xE0) == 0x60
      && (*(_BYTE *)v9 & 0x1Fu) >= 5
      && (*(_DWORD *)((_BYTE *)v9 + 1) & 0xFFFFFF) == 0xC03LL )
    {
      break;
    }
    v4 = v6 + 1;
    if ( v4 >= v2 )
      return 0;
  }
  result = 1;
  v8 = *(_DWORD *)((char *)v9 + 9);
  *(_QWORD *)a2 = *(_QWORD *)((char *)v9 + 1);
  *((_DWORD *)a2 + 2) = v8;
  return result;
}
