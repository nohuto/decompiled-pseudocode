/*
 * XREFs of ?GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1C00486E8
 * Callers:
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C0047BA4 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 * Callees:
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C00030D8 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C00199D4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0048428 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0048470 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER::GetColorimetryDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct _EDID_V1_CEA_861_COLORIMETRY_DESC *a2)
{
  int v2; // ebx
  int v5; // edx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  int v7; // esi
  bool result; // al
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-10h]
  struct _EDID_V1_CEA_861_DATA_HEADER *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 1 )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, v2) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, v5);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v9,
        *IterAtElement);
      v7 = 0;
      if ( v10 )
        break;
    }
LABEL_9:
    if ( (unsigned int)++v2 >= *((_DWORD *)this + 20) )
      return 0;
  }
  while ( 1 )
  {
    v11 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)v9, v7, &v11) )
    {
      if ( (*(_BYTE *)v11 & 0xE0) == 0xE0 && *((_BYTE *)v11 + 1) == 5 && (*(_BYTE *)v11 & 0x1Fu) >= 3 )
        break;
    }
    if ( ++v7 >= v10 )
      goto LABEL_9;
  }
  result = 1;
  *(_BYTE *)a2 = *((_BYTE *)v11 + 2);
  *((_BYTE *)a2 + 1) = 0;
  return result;
}
