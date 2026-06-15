/*
 * XREFs of LogCurrentSettings @ 0x18003D104
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_SSDD_guid_DDDDDDD_guid_DD_guid__guid_ @ 0x18004D07C (WPP_SF_SSDD_guid_DDDDDDD_guid_DD_guid__guid_.c)
 *     WPP_SF_SSDD_guid_DDD_guid__guid_ @ 0x18004D25C (WPP_SF_SSDD_guid_DDD_guid__guid_.c)
 */

CVolumeStrip **__fastcall LogCurrentSettings(LPCSTR psz, int a2, __int64 a3, _DWORD *a4, __int64 a5, _DWORD *a6)
{
  int v7; // r13d
  unsigned __int16 v8; // r12
  int v9; // r15d
  GUID v10; // xmm0
  LPCWSTR v11; // r9
  int v12; // ecx
  unsigned __int16 v13; // r10
  unsigned __int16 v14; // r11
  CVolumeStrip *v15; // rdi
  CVolumeStrip **result; // rax
  __int64 v17; // r12
  int v18; // r15d
  LPCWSTR v19; // r9
  int v20; // ecx
  unsigned __int16 v21; // r10
  unsigned __int16 v22; // r11
  int v23; // eax
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  int v26; // edx
  char v27; // [rsp+68h] [rbp-B8h]
  unsigned __int16 v28; // [rsp+A0h] [rbp-80h]
  __int16 v29; // [rsp+A4h] [rbp-7Ch]
  int v32; // [rsp+B8h] [rbp-68h] BYREF
  int v33; // [rsp+BCh] [rbp-64h] BYREF
  int v34; // [rsp+C0h] [rbp-60h] BYREF
  int v35; // [rsp+C4h] [rbp-5Ch] BYREF
  int v36; // [rsp+C8h] [rbp-58h] BYREF
  int v37; // [rsp+CCh] [rbp-54h] BYREF
  int v38; // [rsp+D0h] [rbp-50h] BYREF
  int v39; // [rsp+D4h] [rbp-4Ch] BYREF
  int v40; // [rsp+D8h] [rbp-48h] BYREF
  int v41; // [rsp+DCh] [rbp-44h] BYREF
  int v42; // [rsp+E0h] [rbp-40h] BYREF
  int v43; // [rsp+E4h] [rbp-3Ch] BYREF
  int v44; // [rsp+E8h] [rbp-38h] BYREF
  int v45; // [rsp+ECh] [rbp-34h] BYREF
  int v46; // [rsp+F0h] [rbp-30h] BYREF
  int v47; // [rsp+F4h] [rbp-2Ch] BYREF
  int v48; // [rsp+F8h] [rbp-28h] BYREF
  int v49; // [rsp+FCh] [rbp-24h] BYREF
  int v50; // [rsp+100h] [rbp-20h] BYREF
  int v51; // [rsp+104h] [rbp-1Ch] BYREF
  int v52; // [rsp+108h] [rbp-18h] BYREF
  int v53; // [rsp+10Ch] [rbp-14h] BYREF
  _DWORD v54[2]; // [rsp+110h] [rbp-10h] BYREF
  __int64 v55; // [rsp+118h] [rbp-8h]
  GUID v56; // [rsp+120h] [rbp+0h] BYREF
  void *v57; // [rsp+130h] [rbp+10h]
  int v58; // [rsp+138h] [rbp+18h]
  int v59; // [rsp+13Ch] [rbp+1Ch]
  void *v60; // [rsp+140h] [rbp+20h]
  int v61; // [rsp+148h] [rbp+28h]
  int v62; // [rsp+14Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+160h] [rbp+40h] BYREF
  int *v65; // [rsp+170h] [rbp+50h]
  __int64 v66; // [rsp+178h] [rbp+58h]
  int *v67; // [rsp+180h] [rbp+60h]
  __int64 v68; // [rsp+188h] [rbp+68h]
  _DWORD *v69; // [rsp+190h] [rbp+70h]
  __int64 v70; // [rsp+198h] [rbp+78h]
  int *v71; // [rsp+1A0h] [rbp+80h]
  __int64 v72; // [rsp+1A8h] [rbp+88h]
  _DWORD *v73; // [rsp+1B0h] [rbp+90h]
  __int64 v74; // [rsp+1B8h] [rbp+98h]
  _DWORD *v75; // [rsp+1C0h] [rbp+A0h]
  __int64 v76; // [rsp+1C8h] [rbp+A8h]
  int *v77; // [rsp+1D0h] [rbp+B0h]
  __int64 v78; // [rsp+1D8h] [rbp+B8h]
  int *v79; // [rsp+1E0h] [rbp+C0h]
  __int64 v80; // [rsp+1E8h] [rbp+C8h]
  int *v81; // [rsp+1F0h] [rbp+D0h]
  __int64 v82; // [rsp+1F8h] [rbp+D8h]
  int *v83; // [rsp+200h] [rbp+E0h]
  __int64 v84; // [rsp+208h] [rbp+E8h]
  GUID *v85; // [rsp+210h] [rbp+F0h]
  __int64 v86; // [rsp+218h] [rbp+F8h]
  int *v87; // [rsp+220h] [rbp+100h]
  __int64 v88; // [rsp+228h] [rbp+108h]
  int *v89; // [rsp+230h] [rbp+110h]
  __int64 v90; // [rsp+238h] [rbp+118h]
  _DWORD *v91; // [rsp+240h] [rbp+120h]
  __int64 v92; // [rsp+248h] [rbp+128h]
  _DWORD *v93; // [rsp+250h] [rbp+130h]
  __int64 v94; // [rsp+258h] [rbp+138h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+290h] [rbp+170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+2A0h] [rbp+180h] BYREF
  int *v98; // [rsp+2B0h] [rbp+190h]
  __int64 v99; // [rsp+2B8h] [rbp+198h]
  int *v100; // [rsp+2C0h] [rbp+1A0h]
  __int64 v101; // [rsp+2C8h] [rbp+1A8h]
  _DWORD *v102; // [rsp+2D0h] [rbp+1B0h]
  __int64 v103; // [rsp+2D8h] [rbp+1B8h]
  int *v104; // [rsp+2E0h] [rbp+1C0h]
  __int64 v105; // [rsp+2E8h] [rbp+1C8h]
  _DWORD *v106; // [rsp+2F0h] [rbp+1D0h]
  __int64 v107; // [rsp+2F8h] [rbp+1D8h]
  _DWORD *v108; // [rsp+300h] [rbp+1E0h]
  __int64 v109; // [rsp+308h] [rbp+1E8h]
  int *v110; // [rsp+310h] [rbp+1F0h]
  __int64 v111; // [rsp+318h] [rbp+1F8h]
  int *v112; // [rsp+320h] [rbp+200h]
  __int64 v113; // [rsp+328h] [rbp+208h]
  int *v114; // [rsp+330h] [rbp+210h]
  __int64 v115; // [rsp+338h] [rbp+218h]
  int *v116; // [rsp+340h] [rbp+220h]
  __int64 v117; // [rsp+348h] [rbp+228h]
  GUID *v118; // [rsp+350h] [rbp+230h]
  __int64 v119; // [rsp+358h] [rbp+238h]
  int *v120; // [rsp+360h] [rbp+240h]
  __int64 v121; // [rsp+368h] [rbp+248h]
  int *v122; // [rsp+370h] [rbp+250h]
  __int64 v123; // [rsp+378h] [rbp+258h]
  _DWORD *v124; // [rsp+380h] [rbp+260h]
  __int64 v125; // [rsp+388h] [rbp+268h]
  _DWORD *v126; // [rsp+390h] [rbp+270h]
  __int64 v127; // [rsp+398h] [rbp+278h]
  int *v128; // [rsp+3A0h] [rbp+280h]
  __int64 v129; // [rsp+3A8h] [rbp+288h]
  int *v130; // [rsp+3B0h] [rbp+290h]
  __int64 v131; // [rsp+3B8h] [rbp+298h]
  _DWORD *v132; // [rsp+3C0h] [rbp+2A0h]
  __int64 v133; // [rsp+3C8h] [rbp+2A8h]
  int *v134; // [rsp+3D0h] [rbp+2B0h]
  __int64 v135; // [rsp+3D8h] [rbp+2B8h]
  _DWORD *v136; // [rsp+3E0h] [rbp+2C0h]
  __int64 v137; // [rsp+3E8h] [rbp+2C8h]
  int *v138; // [rsp+3F0h] [rbp+2D0h]
  __int64 v139; // [rsp+3F8h] [rbp+2D8h]
  _DWORD *v140; // [rsp+400h] [rbp+2E0h]
  __int64 v141; // [rsp+408h] [rbp+2E8h]
  _DWORD *v142; // [rsp+410h] [rbp+2F0h]
  __int64 v143; // [rsp+418h] [rbp+2F8h]

  if ( a5 )
  {
    v7 = *(_DWORD *)(a5 + 4);
    v29 = *(_WORD *)(a5 + 2);
    v28 = *(_WORD *)(a5 + 14);
    if ( *(_WORD *)a5 == 0xFFFE )
    {
      v8 = *(_WORD *)(a5 + 18);
      v9 = *(_DWORD *)(a5 + 20);
      v10 = *(GUID *)(a5 + 24);
      goto LABEL_4;
    }
    v8 = 0;
  }
  else
  {
    LOBYTE(v29) = 0;
    v28 = 0;
    v7 = 0;
    v8 = 0;
  }
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = 0;
LABEL_4:
  v56 = v10;
  if ( a6 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateSz(&v96, psz);
      TlgCreateWsz(&v97, v19);
      v20 = a4[2];
      v98 = &v32;
      v33 = a4[18];
      v100 = &v33;
      v102 = a4 + 5;
      v34 = a4[4];
      v104 = &v34;
      v106 = a4 + 17;
      v108 = a4 + 19;
      v35 = a4[3];
      v110 = &v35;
      v36 = v21;
      v112 = &v36;
      v114 = &v37;
      v116 = &v38;
      v118 = &v56;
      v39 = v22;
      v120 = &v39;
      v40 = v8;
      v122 = &v40;
      v124 = a4 + 9;
      v126 = a4 + 13;
      v41 = a6[2];
      v128 = &v41;
      v42 = a6[18];
      v130 = &v42;
      v132 = a6 + 5;
      v23 = a6[4];
      v32 = v20;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 16LL;
      v105 = 4LL;
      v107 = 4LL;
      v109 = 4LL;
      v111 = 4LL;
      v113 = 4LL;
      v37 = v9;
      v115 = 4LL;
      v38 = v7;
      v117 = 4LL;
      v119 = 16LL;
      v121 = 4LL;
      v123 = 4LL;
      v125 = 16LL;
      v127 = 16LL;
      v129 = 4LL;
      v131 = 4LL;
      v133 = 16LL;
      v43 = v23;
      v134 = &v43;
      v136 = a6 + 19;
      v44 = a6[3];
      v138 = &v44;
      v140 = a6 + 9;
      v142 = a6 + 13;
      v135 = 4LL;
      v137 = 4LL;
      v139 = 4LL;
      v141 = 16LL;
      v143 = 16LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FB837, v24, v25, 0x1Bu, &pData);
    }
  }
  else if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, psz);
    TlgCreateWsz(&v64, v11);
    v12 = a4[2];
    v65 = &v45;
    v46 = a4[18];
    v67 = &v46;
    v69 = a4 + 5;
    v47 = a4[4];
    v71 = &v47;
    v73 = a4 + 17;
    v75 = a4 + 19;
    v48 = a4[3];
    v77 = &v48;
    v49 = v13;
    v79 = &v49;
    v81 = &v50;
    v83 = &v51;
    v85 = &v56;
    v52 = v14;
    v87 = &v52;
    v53 = v8;
    v89 = &v53;
    v91 = a4 + 9;
    v93 = a4 + 13;
    v45 = v12;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 16LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    v50 = v9;
    v82 = 4LL;
    v51 = v7;
    v84 = 4LL;
    v86 = 16LL;
    v88 = 4LL;
    v90 = 4LL;
    v92 = 16LL;
    v94 = 16LL;
    v54[1] = 4;
    v57 = off_18012A378;
    v54[0] = ((unsigned int)&unk_1800FB6EB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v55 = 0LL;
    v58 = *(unsigned __int16 *)off_18012A378;
    v60 = &unk_1800FB6F6;
    v59 = 2;
    v61 = 320;
    v62 = 1;
    EtwEventWriteTransfer(qword_18012A390, v54, 0LL, 0LL);
  }
  v15 = WPP_GLOBAL_Control;
  result = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v26 = v8;
    v17 = a3;
    v27 = v9;
    v18 = a2;
    WPP_SF_SSDD_guid_DDDDDDD_guid_DD_guid__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v26,
      v28,
      a2,
      a3 + 34,
      a4[2],
      a4[18],
      (__int64)(a4 + 5),
      a4[4],
      a4[17],
      a4[19],
      a4[3],
      v29,
      v27,
      v7,
      (__int64)&v56,
      v28,
      v26,
      (__int64)(a4 + 9),
      (__int64)(a4 + 13));
    v15 = WPP_GLOBAL_Control;
    result = &WPP_GLOBAL_Control;
  }
  else
  {
    v17 = a3;
    v18 = a2;
  }
  if ( a6
    && v15 != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v15 + 7) & 0x1000) != 0
    && *((_BYTE *)v15 + 25) >= 4u )
  {
    return (CVolumeStrip **)WPP_SF_SSDD_guid_DDD_guid__guid_(
                              *((_QWORD *)v15 + 2),
                              (int)a6 + 20,
                              (int)v17 + 34,
                              v18,
                              v17 + 34,
                              a6[2],
                              a6[18],
                              (__int64)(a6 + 5),
                              a6[4],
                              a4[19],
                              a6[3],
                              (__int64)(a6 + 9),
                              (__int64)(a6 + 13));
  }
  return result;
}
