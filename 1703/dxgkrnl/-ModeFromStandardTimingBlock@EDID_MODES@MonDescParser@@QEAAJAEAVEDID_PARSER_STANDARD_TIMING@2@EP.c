/*
 * XREFs of ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C000EA74
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C000EE5C (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C000E618 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C000F218 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 *     ?CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z @ 0x1C000F274 (-CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_STANDARD_TIMING *a2,
        char a3,
        struct _VideoModeDescriptor *a4)
{
  unsigned __int8 **v7; // rdx
  BOOLEAN v8; // bl
  unsigned __int8 *v9; // rax
  int v10; // ecx
  ULONG v11; // edi
  USHORT v12; // r11
  int v13; // ecx
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // r8
  __int64 result; // rax
  USHORT v17; // dx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  unsigned __int16 *v21; // [rsp+20h] [rbp-28h]
  unsigned __int16 v22; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(a2) )
    return 3223126020LL;
  v9 = *v7;
  v22 = 0;
  v10 = v9[1] >> 6;
  v11 = (v9[1] & 0x3F) + 60;
  v12 = 8 * (*v9 + 31);
  if ( v10 )
  {
    v13 = v10 - 1;
    if ( !v13 )
    {
      v14 = 4;
      v15 = 3;
LABEL_5:
      result = MonDescParser::CalculateVerticalActivePixelsFrom(
                 (MonDescParser *)v12,
                 v14,
                 v15,
                 (unsigned __int16)&v22,
                 v21);
      v17 = v22;
      goto LABEL_6;
    }
    v18 = v13 - 1;
    if ( !v18 )
    {
      v14 = 5;
      v15 = 4;
      goto LABEL_5;
    }
    if ( v18 != 1 )
      return 3223126020LL;
    v15 = 9;
LABEL_21:
    v14 = 16;
    goto LABEL_5;
  }
  v19 = **(_QWORD **)this;
  v20 = *(_BYTE *)(v19 + 18);
  if ( v20 == 1 && *(_BYTE *)(v19 + 19) >= 3u || v20 >= 3u )
  {
    v15 = 10;
    goto LABEL_21;
  }
  v17 = v12;
  result = 0LL;
LABEL_6:
  if ( (int)result < 0 )
    return result;
  if ( v17 < 0x64u )
    return 3223126020LL;
  if ( v12 == 1024 && v17 == 768 && v11 == 43 )
    v8 = 1;
  result = GTF_GetVideoModeDescriptor(v12, v17, v11, 1u, v8, a4);
  a4->VideoStandardType = 2;
  a4->Origin = *((_BYTE *)this + 8);
  a4->TimingType = (a3 != 0) + 2;
  return result;
}
