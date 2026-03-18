/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C0010010
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C000FB08 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C0009118 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C000FC5C (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C000FCB8 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C00103DC (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1C00104EC (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C00105EC (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C00107F8 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0037420 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0037464 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C00374C4 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C0037938 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 */

int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        __int64 **this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  int result; // eax
  unsigned __int16 v7; // si
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r13
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // bx
  char v12; // r14
  __int64 v13; // r11
  unsigned __int16 v14; // r15
  struct _VideoModeDescriptor *v15; // r8
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // si
  bool i; // cf
  bool DetTimParser; // al
  __int64 v20; // rax
  _WORD *v21; // r10
  int v22; // ecx
  unsigned __int16 v23; // si
  unsigned int v24; // r14d
  struct _EDID_V1_CEA_861_DATA_HEADER *v25; // r13
  unsigned __int8 v26; // r10
  __int64 v27; // rdx
  __int128 v28; // xmm0
  unsigned __int16 v29; // r12
  MonDescParser::EDID_MODES *v30; // r13
  int v31; // edx
  int v32; // edx
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v38; // r11
  unsigned __int16 v39; // si
  struct _VideoModeDescriptor *v40; // r12
  unsigned int v41; // esi
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v43; // r13
  struct _EDID_V1_CEA_861_DATA_HEADER *v44; // rcx
  unsigned int j; // r12d
  char v46; // [rsp+48h] [rbp-49h]
  unsigned __int16 v47; // [rsp+48h] [rbp-49h]
  struct _VideoModeDescriptor *v48; // [rsp+50h] [rbp-41h]
  unsigned __int16 v49[2]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int16 v50[2]; // [rsp+5Ch] [rbp-35h] BYREF
  unsigned __int16 v51[2]; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int16 v52; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int16 v53[8]; // [rsp+68h] [rbp-29h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v54[2]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v55; // [rsp+88h] [rbp-9h] BYREF
  _OWORD v56[5]; // [rsp+98h] [rbp+7h] BYREF

  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v54[0] = 0LL;
  v51[0] = 0;
  v52 = 0;
  v53[0] = 0;
  v50[0] = 0;
  v49[0] = 0;
  v46 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts((MonDescParser::EDID_MODES *)this, v51, &v52, v53, v54, v50, v49);
  if ( result >= 0 )
  {
    v7 = v51[0];
    if ( v51[0] > 0x11u )
      return -1071841278;
    v8 = v52;
    if ( v52 > 8u )
      return -1071841278;
    v9 = v53[0];
    if ( v53[0] > 6u )
      return -1071841278;
    v10 = v50[0];
    if ( v50[0] > 4u )
      return -1071841278;
    v11 = *a2;
    if ( !*a2 )
    {
      *a2 = v51[0] + v52 + v53[0] + v50[0] + v49[0];
      v12 = 1;
      return v12 != 0 ? 0xC0000023 : 0;
    }
    memset(a4, 0, 56LL * v11);
    v13 = 0LL;
    v48 = a4;
    *a3 = -1;
    v14 = 0;
    v15 = a4;
    if ( v11 < v7 )
    {
      v46 = 1;
      v7 = v11;
    }
    if ( !v7 )
    {
LABEL_18:
      if ( v11 < v10 )
      {
        v46 = 1;
        v10 = v11;
      }
      v16 = 0;
      v17 = 0;
      for ( i = v10 != 0; ; i = v17 < v10 )
      {
        v50[0] = v16;
        if ( !i || v16 >= 4u )
          break;
        *(_QWORD *)&v55 = v13;
        DetTimParser = MonDescParser::EDID_PARSER::GetDetTimParser(
                         (MonDescParser::EDID_PARSER *)*this,
                         v16,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v55);
        v15 = v48;
        v13 = 0LL;
        if ( DetTimParser )
        {
          result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                     (MonDescParser::EDID_MODES *)this,
                     (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v55,
                     v48);
          v13 = 0LL;
          if ( result == -1071841271 )
          {
            v15 = v48;
          }
          else
          {
            if ( result < 0 )
              return result;
            if ( !v17 )
              *a3 = v14;
            v15 = v48;
            if ( v14
              && (v20 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v14], v48), v20 != -1) )
            {
              if ( (_WORD)v13 == v17 )
                *v21 = v20;
            }
            else
            {
              ++v17;
              --v11;
              ++v14;
              v48 = ++v15;
            }
          }
        }
        v16 = v50[0] + 1;
      }
      if ( v11 < v8 )
      {
        v8 = v11;
        v9 = v13;
      }
      else
      {
        if ( v11 >= v8 + (unsigned int)v9 )
        {
LABEL_36:
          v22 = v8;
          v23 = v13;
          v24 = v8 + v9;
          if ( v24 )
          {
            v25 = v54[0];
            while ( 1 )
            {
              if ( v23 >= v8 )
              {
                v26 = 1;
                v54[0] = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v25 + 2 * (v23 - v22));
                v35 = **this;
                LODWORD(v54[1]) = *(unsigned __int8 *)(v35 + 18);
                HIDWORD(v54[1]) = *(unsigned __int8 *)(v35 + 19);
                v28 = *(_OWORD *)v54;
              }
              else
              {
                v26 = v13;
                v27 = **this;
                DWORD2(v55) = *(unsigned __int8 *)(v27 + 18);
                HIDWORD(v55) = *(unsigned __int8 *)(v27 + 19);
                *(_QWORD *)&v55 = v27 + 2 * (v23 + 19LL);
                v28 = v55;
              }
              v56[0] = v28;
              result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
                         (MonDescParser::EDID_MODES *)this,
                         (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)v56,
                         v26,
                         v15);
              v13 = 0LL;
              if ( result == -1071841276 )
              {
                v15 = v48;
              }
              else
              {
                if ( result < 0 )
                  return result;
                v15 = v48;
                if ( !v14
                  || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v14], v48) == -1 )
                {
                  ++v14;
                  --v11;
                  v48 = ++v15;
                }
              }
              if ( ++v23 >= v24 )
                break;
              v22 = v8;
            }
          }
          v29 = v13;
          v12 = v46;
          v30 = (MonDescParser::EDID_MODES *)this;
          if ( v11 < v49[0] )
            v12 = 1;
          *(_QWORD *)&v55 = v13;
          DWORD2(v55) = v13;
          v47 = v13;
          *(_DWORD *)v50 = *((_DWORD *)*this + 20);
          if ( *(_DWORD *)v50 )
          {
            v31 = v13;
            do
            {
              if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(MonDescParser::EDID_PARSER **)v30, v31) == 2 )
              {
                v36 = v34;
                v37 = v33 + 8LL * *(_QWORD *)(v33 + 80);
                while ( v33 != v37 )
                {
                  if ( v36 == v32 )
                    goto LABEL_68;
                  ++v36;
                  v33 += 8LL;
                }
                v33 = v34;
LABEL_68:
                MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v55,
                  *(union _EDID_V1_BLOCK **)v33);
                v38 = 0LL;
                v54[0] = 0LL;
                v39 = 0;
                if ( v11 )
                {
                  v40 = v48;
                  do
                  {
                    if ( !MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                            (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v55,
                            v39,
                            (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v54) )
                      break;
                    result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                               v30,
                               (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v54,
                               v40);
                    v38 = 0LL;
                    if ( result != -1071841271 )
                    {
                      if ( result < 0 )
                        return result;
                      if ( !v14
                        || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v14], v40) == -1 )
                      {
                        ++v14;
                        --v11;
                        v48 = ++v40;
                      }
                    }
                    ++v39;
                  }
                  while ( v11 );
                  v29 = v47;
                }
                v41 = (unsigned int)v38;
                if ( v11 )
                {
                  do
                  {
                    if ( v41 >= DWORD2(v55) )
                      break;
                    v54[0] = v38;
                    DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v55,
                                  v41,
                                  v54);
                    v38 = 0LL;
                    if ( DataBlock )
                    {
                      v43 = v54[0];
                      if ( (*(_BYTE *)v54[0] & 0xE0) == 0x40 )
                      {
                        v44 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v54[0] + 1);
                        for ( j = 0; ; ++j )
                        {
                          v54[0] = v44;
                          if ( !v11 || j >= (*(_BYTE *)v43 & 0x1Fu) )
                            break;
                          result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(
                                     (MonDescParser::EDID_MODES *)this,
                                     v44,
                                     v48);
                          v38 = 0LL;
                          if ( result != -1071841278 )
                          {
                            if ( result < 0 )
                              return result;
                            ++v14;
                            --v11;
                            ++v48;
                          }
                          v44 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v54[0] + 1);
                        }
                      }
                    }
                    ++v41;
                  }
                  while ( v11 );
                  v30 = (MonDescParser::EDID_MODES *)this;
                  v29 = v47;
                }
              }
              v31 = ++v29;
              v47 = v29;
            }
            while ( (unsigned int)v29 < *(_DWORD *)v50 );
          }
          *a2 = v14;
          return v12 != 0 ? 0xC0000023 : 0;
        }
        v9 = v11 - v8;
      }
      v46 = 1;
      goto LABEL_36;
    }
    result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings((MonDescParser::EDID_MODES *)this, v7, a4);
    v13 = 0LL;
    if ( result >= 0 )
    {
      v11 -= v7;
      v14 = v7;
      v15 = &a4[v7];
      v48 = v15;
      goto LABEL_18;
    }
  }
  return result;
}
