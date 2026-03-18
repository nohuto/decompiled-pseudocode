/*
 * XREFs of ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00376F0
 * Callers:
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00116C4 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 * Callees:
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C00092B0 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C000FC5C (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0037420 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0037464 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetHdmiForumVendorDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct _EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC *a2)
{
  int v2; // ebx
  int v5; // edx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  unsigned int v7; // edx
  int v8; // edx
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-10h]
  struct _EDID_V1_CEA_861_DATA_HEADER *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 1 )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, v2) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, v5);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v10,
        *IterAtElement);
      v7 = 0;
      if ( v11 )
        break;
    }
LABEL_9:
    if ( (unsigned int)++v2 >= *((_DWORD *)this + 20) )
      return 0;
  }
  while ( 1 )
  {
    v12 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)v10, v7, &v12)
      && (*(_BYTE *)v12 & 0xE0) == 0x60
      && (*(_BYTE *)v12 & 0x1Fu) >= 7
      && (*(_QWORD *)((_BYTE *)v12 + 1) & 0xFFFFFFLL) == 0xC45DD8 )
    {
      break;
    }
    v7 = v8 + 1;
    if ( v7 >= v11 )
      goto LABEL_9;
  }
  *(_QWORD *)a2 = *(_QWORD *)((char *)v12 + 1);
  return 1;
}
