/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C00190F0
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C0018938 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C0003198 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C00189E4 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C0018D00 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1C0018E10 (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C0018F10 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C00194F8 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C00199D4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0048428 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0048470 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C00484BC (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C0048BA8 (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 */

signed int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser ***this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  signed int result; // eax
  unsigned __int16 v7; // si
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  struct _VideoModeDescriptor *v13; // rdx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // si
  bool i; // cf
  __int64 v17; // rax
  _WORD *v18; // r10
  int v19; // r11d
  unsigned __int16 v20; // si
  unsigned int v21; // r15d
  struct _EDID_V1_CEA_861_DATA_HEADER *v22; // r12
  MonDescParser *v23; // rcx
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // r9
  __int128 v26; // xmm0
  struct _VideoModeDescriptor *v27; // r8
  char v28; // r13
  MonDescParser::EDID_MODES *v29; // r12
  unsigned __int16 v30; // r15
  __int64 v31; // rdx
  int v32; // edx
  __int64 v33; // r10
  __int64 v34; // r11
  int v35; // ecx
  __int64 v36; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v37; // r11
  unsigned __int16 v38; // si
  struct _VideoModeDescriptor *v39; // r15
  unsigned int v40; // esi
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v42; // r12
  struct _EDID_V1_CEA_861_DATA_HEADER *v43; // rcx
  unsigned int j; // r15d
  char v45; // [rsp+48h] [rbp-49h]
  unsigned __int16 v46; // [rsp+48h] [rbp-49h]
  struct _VideoModeDescriptor *v47; // [rsp+50h] [rbp-41h]
  unsigned __int16 v48[2]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int16 v49[2]; // [rsp+5Ch] [rbp-35h] BYREF
  unsigned __int16 v50[2]; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int16 v51; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int16 v52[8]; // [rsp+68h] [rbp-29h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v53[2]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v54; // [rsp+88h] [rbp-9h] BYREF
  _OWORD v55[5]; // [rsp+98h] [rbp+7h] BYREF

  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v53[0] = 0LL;
  v50[0] = 0;
  v51 = 0;
  v52[0] = 0;
  v49[0] = 0;
  v48[0] = 0;
  v45 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(this, v50, &v51, v52, v53, v49, v48);
  if ( result >= 0 )
  {
    v7 = v50[0];
    if ( v50[0] > 0x11u )
      return -1071841278;
    v8 = v51;
    if ( v51 > 8u )
      return -1071841278;
    v9 = v52[0];
    if ( v52[0] > 6u )
      return -1071841278;
    v10 = v49[0];
    if ( v49[0] > 4u )
      return -1071841278;
    v11 = *a2;
    v12 = v50[0] + v51 + v52[0] + v49[0] + v48[0];
    if ( !v11 )
    {
      v28 = 1;
LABEL_48:
      *a2 = v12;
      return v28 != 0 ? 0xC0000023 : 0;
    }
    memset(a4, 0, 56LL * v11);
    v47 = a4;
    *a3 = -1;
    v12 = 0;
    v13 = a4;
    if ( v11 < v7 )
    {
      v45 = 1;
      v7 = v11;
    }
    if ( v7 )
    {
      result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings((MonDescParser::EDID_MODES *)this, v7, a4);
      if ( result < 0 )
        return result;
      v11 -= v7;
      v12 = v7;
      v13 = &a4[v7];
      v47 = v13;
    }
    if ( v11 < v10 )
    {
      v45 = 1;
      v10 = v11;
    }
    v14 = 0;
    v15 = 0;
    for ( i = v10 != 0; ; i = v15 < v10 )
    {
      v49[0] = v14;
      if ( !i || v14 >= 4u )
        break;
      *(_QWORD *)&v54 = 0LL;
      if ( !MonDescParser::EDID_PARSER::GetDetTimParser(
              (MonDescParser::EDID_PARSER *)*this,
              v14,
              (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v54)
        || (result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                       (MonDescParser::EDID_MODES *)this,
                       (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v54,
                       v47),
            result == -1071841271) )
      {
        v13 = v47;
      }
      else
      {
        if ( result < 0 )
          return result;
        if ( !v15 )
          *a3 = v12;
        if ( v12
          && (v17 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v47), v17 != -1) )
        {
          v13 = v47;
          if ( !v15 )
            *v18 = v17;
        }
        else
        {
          --v11;
          ++v15;
          ++v12;
          v13 = ++v47;
        }
      }
      v14 = v49[0] + 1;
    }
    if ( v11 < v8 )
    {
      v8 = v11;
      v9 = 0;
    }
    else
    {
      if ( v11 >= v8 + (unsigned int)v9 )
      {
LABEL_31:
        v19 = v8;
        v20 = 0;
        v21 = v8 + v9;
        if ( v21 )
        {
          v22 = v53[0];
          while ( 1 )
          {
            v23 = **this;
            v24 = *((_BYTE *)v23 + 18);
            v25 = *((_BYTE *)v23 + 19);
            if ( v20 >= v8 )
            {
              LODWORD(v53[1]) = v24;
              HIDWORD(v53[1]) = v25;
              v53[0] = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v22 + 2 * (v20 - v19));
              v26 = *(_OWORD *)v53;
            }
            else
            {
              DWORD2(v54) = v24;
              HIDWORD(v54) = v25;
              *(_QWORD *)&v54 = (char *)v23 + 2 * v20 + 38;
              v26 = v54;
            }
            v55[0] = v26;
            result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
                       (MonDescParser::EDID_MODES *)this,
                       (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)v55,
                       v20 >= v8,
                       v13);
            if ( result == -1071841276 )
            {
              v13 = v47;
            }
            else
            {
              if ( result < 0 )
                return result;
              if ( v12 && MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v47) != -1 )
              {
                v13 = v27;
              }
              else
              {
                --v11;
                ++v12;
                v13 = ++v47;
              }
            }
            if ( ++v20 >= v21 )
              break;
            v19 = v8;
          }
        }
        v28 = v45;
        v29 = (MonDescParser::EDID_MODES *)this;
        if ( v11 < v48[0] )
          v28 = 1;
        *(_QWORD *)&v54 = 0LL;
        v30 = 0;
        DWORD2(v54) = 0;
        v46 = 0;
        *(_DWORD *)v49 = *((_DWORD *)*this + 20);
        if ( *(_DWORD *)v49 )
        {
          v31 = 0LL;
          do
          {
            if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v29, v31) == 2 )
            {
              v35 = v34;
              v36 = v33 + 8LL * *(_QWORD *)(v33 + 80);
              while ( v33 != v36 )
              {
                if ( v35 == v32 )
                  goto LABEL_67;
                ++v35;
                v33 += 8LL;
              }
              v33 = v34;
LABEL_67:
              MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
                (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v54,
                *(union _EDID_V1_BLOCK **)v33);
              v37 = 0LL;
              v53[0] = 0LL;
              v38 = 0;
              if ( v11 )
              {
                v39 = v47;
                do
                {
                  if ( !MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                          (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v54,
                          v38,
                          (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v53) )
                    break;
                  result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                             v29,
                             (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v53,
                             v39);
                  v37 = 0LL;
                  if ( result != -1071841271 )
                  {
                    if ( result < 0 )
                      return result;
                    if ( !v12
                      || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v39) == -1 )
                    {
                      ++v12;
                      --v11;
                      v47 = ++v39;
                    }
                  }
                  ++v38;
                }
                while ( v11 );
                v30 = v46;
              }
              v40 = (unsigned int)v37;
              if ( v11 )
              {
                do
                {
                  if ( v40 >= DWORD2(v54) )
                    break;
                  v53[0] = v37;
                  DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                                (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v54,
                                v40,
                                v53);
                  v37 = 0LL;
                  if ( DataBlock )
                  {
                    v42 = v53[0];
                    if ( (*(_BYTE *)v53[0] & 0xE0) == 0x40 )
                    {
                      v43 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v53[0] + 1);
                      for ( j = 0; ; ++j )
                      {
                        v53[0] = v43;
                        if ( !v11 || j >= (*(_BYTE *)v42 & 0x1Fu) )
                          break;
                        result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(
                                   (MonDescParser::EDID_MODES *)this,
                                   v43,
                                   v47);
                        v37 = 0LL;
                        if ( result != -1071841278 )
                        {
                          if ( result < 0 )
                            return result;
                          ++v12;
                          --v11;
                          ++v47;
                        }
                        v43 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v53[0] + 1);
                      }
                    }
                  }
                  ++v40;
                }
                while ( v11 );
                v29 = (MonDescParser::EDID_MODES *)this;
                v30 = v46;
              }
            }
            v31 = ++v30;
            v46 = v30;
          }
          while ( (unsigned int)v30 < *(_DWORD *)v49 );
        }
        goto LABEL_48;
      }
      v9 = v11 - v8;
    }
    v45 = 1;
    goto LABEL_31;
  }
  return result;
}
