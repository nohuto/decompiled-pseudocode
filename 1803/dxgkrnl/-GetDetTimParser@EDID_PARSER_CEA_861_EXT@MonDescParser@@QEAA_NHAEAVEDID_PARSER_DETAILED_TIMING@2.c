/*
 * XREFs of ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C00484BC
 * Callers:
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C0018F10 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C00190F0 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        char a2,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a3)
{
  __int64 v3; // r9
  char v4; // cl
  unsigned __int8 v6; // dl
  _BYTE *v7; // rcx

  v3 = *(_QWORD *)this;
  v4 = *(_BYTE *)(*(_QWORD *)this + 2LL);
  if ( !v4 )
    return 0;
  v6 = v4 + 18 * a2;
  if ( v6 >= 0x6Eu )
    return 0;
  v7 = (_BYTE *)(v6 + v3);
  if ( !*v7 && !*(_BYTE *)((unsigned int)v6 + 1 + v3) )
    return 0;
  *(_QWORD *)a3 = v7;
  return 1;
}
