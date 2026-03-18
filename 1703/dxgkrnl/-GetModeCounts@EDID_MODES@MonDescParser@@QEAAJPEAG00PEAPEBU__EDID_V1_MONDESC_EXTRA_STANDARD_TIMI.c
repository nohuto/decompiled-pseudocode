/*
 * XREFs of ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C000EC80
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C000EE5C (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0004718 (-Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0004800 (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C000F218 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 *     ?DenseOnesBitCount@MonDescParser@@YAEE@Z @ 0x1C000F2A4 (-DenseOnesBitCount@MonDescParser@@YAEE@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C000F500 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0045F3C (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0045F84 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C0045FE4 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::GetModeCounts(
        MonDescParser ***this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7)
{
  MonDescParser **v7; // rbx
  MonDescParser **v12; // r10
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **v13; // rsi
  MonDescParser *v14; // r12
  MonDescParser *v15; // rcx
  MonDescParser *v16; // rcx
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // al
  __int16 v19; // r10
  __int16 v20; // r11
  __int64 v21; // r11
  MonDescParser *v22; // r9
  __int64 v23; // r10
  unsigned __int16 i; // dx
  unsigned int *v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int16 v28; // dx
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r9
  unsigned __int16 v31; // r11
  int k; // r9d
  int v33; // r9d
  unsigned __int8 v34; // r10
  _WORD *v35; // r11
  unsigned __int16 *v36; // rdi
  unsigned int v37; // esi
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *v39; // r8
  unsigned __int16 j; // cx
  __int16 v41; // dx
  int v42; // ecx
  MonDescParser **v43; // rdx
  unsigned __int8 m; // r10
  unsigned __int8 v45; // r10
  unsigned int v46; // ebx
  unsigned int v47; // edx
  int v48; // edx
  char *v49; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v50; // [rsp+28h] [rbp-8h] BYREF
  __int16 v51; // [rsp+60h] [rbp+30h]

  v7 = *this;
  v12 = *this;
  if ( *this == &(*this)[(_QWORD)(*this)[10]] )
    v12 = 0LL;
  v13 = a5;
  v14 = *v12;
  if ( a5 )
    *a5 = 0LL;
  if ( a2 )
  {
    v15 = *v7;
    LOBYTE(v15) = *(_WORD *)((char *)*v7 + 35);
    v51 = *(_WORD *)((char *)*v7 + 35);
    MonDescParser::DenseOnesBitCount(v15, (unsigned __int8)a2);
    LOBYTE(v16) = HIBYTE(v51);
    v18 = MonDescParser::DenseOnesBitCount(v16, v17);
    *a2 = v20 + v18 + v19;
  }
  v21 = 4LL;
  if ( a3 )
  {
    v22 = *v7;
    *a3 = 0;
    v23 = 1LL;
    for ( i = 0; i < 8u; i = v23 + v28 )
    {
      v25 = &v50;
      v49 = (char *)v22 + 2 * i + 38;
      v26 = 0LL;
      do
      {
        v27 = *((unsigned __int8 *)v22 + v26 + 18);
        v26 += v23;
        *v25 = v27;
        v25 = (unsigned int *)((char *)v25 + v21);
      }
      while ( v26 < 2 );
      if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused((MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v49) )
        break;
      *a3 += v23;
    }
    v13 = a5;
  }
  if ( a4 )
    *a4 = 0;
  v29 = 0;
  while ( !(unsigned __int8)MonDescParser::EDID_PARSER::Is18ByteDispDesc((MonDescParser::EDID_PARSER *)v7, v29)
       || *((_BYTE *)*v7 + 18 * v30 + 57) != 0xFA )
  {
    v29 = v30 + 1;
    if ( v29 >= v31 )
      goto LABEL_20;
  }
  v39 = (MonDescParser *)((char *)v14 + 18 * v30 + 59);
  if ( a4 )
  {
    for ( j = 0; j < 6u; ++j )
    {
      v41 = *((_WORD *)v39 + j);
      if ( v41 == 257 )
        break;
      if ( !v41 )
        break;
      ++*a4;
    }
  }
  if ( v13 )
    *v13 = v39;
LABEL_20:
  if ( a6 )
  {
    for ( k = 0; k < 4; k = v33 + 1 )
    {
      if ( (unsigned __int8)MonDescParser::EDID_PARSER::Is18ByteDetTim((MonDescParser::EDID_PARSER *)v7, k) )
        ++v34;
    }
    *v35 = v34;
  }
  v36 = a7;
  if ( a7 )
  {
    v37 = 0;
    *a7 = 0;
    if ( *((_DWORD *)v7 + 20) )
    {
      do
      {
        if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v7, v37) == 2 )
        {
          v42 = 0;
          v43 = &v7[(_QWORD)v7[10]];
          if ( v7 == v43 )
          {
LABEL_41:
            v7 = 0LL;
          }
          else
          {
            while ( v42 != v37 )
            {
              ++v42;
              if ( ++v7 == v43 )
                goto LABEL_41;
            }
          }
          MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)&v49, *v7);
          for ( m = 0;
                MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v49,
                  m,
                  (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&a5);
                m = v45 + 1 )
          {
            ;
          }
          v46 = v50;
          v47 = 0;
          *v36 += v45;
          if ( v46 )
          {
            do
            {
              a5 = 0LL;
              if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                     (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v49,
                     v47,
                     (struct _EDID_V1_CEA_861_DATA_HEADER **)&a5)
                && (*(_BYTE *)a5 & 0xE0) == 0x40 )
              {
                *v36 += *(_BYTE *)a5 & 0x1F;
              }
              v47 = v48 + 1;
            }
            while ( v47 < v46 );
          }
        }
        v7 = *this;
        ++v37;
      }
      while ( v37 < *((_DWORD *)*this + 20) );
    }
  }
  return 0LL;
}
