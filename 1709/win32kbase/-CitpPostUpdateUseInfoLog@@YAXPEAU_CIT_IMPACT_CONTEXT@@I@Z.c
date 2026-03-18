/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0083540
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081E28 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0083BBC (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0083DEC (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084010 (-CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  const GUID *v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // kr00_8
  unsigned __int16 v7; // cx
  int v8; // eax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // cx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int16 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v29; // [rsp+3Ah] [rbp-CEh] BYREF
  int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v31; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v34; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v35; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+54h] [rbp-B4h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-A4h] BYREF
  int v41; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  int Data; // [rsp+70h] [rbp-98h] BYREF
  __int128 Data_8; // [rsp+78h] [rbp-90h] BYREF
  __int128 v45; // [rsp+88h] [rbp-80h] BYREF
  __int128 v46; // [rsp+98h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int128 *p_Data_8; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  char *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  char *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  char *v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  char *v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  char *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  __int128 *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  char *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  char *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  char *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  char *v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  __int128 *v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  char *v76; // [rsp+1C8h] [rbp+C0h]
  __int64 v77; // [rsp+1D0h] [rbp+C8h]
  char *v78; // [rsp+1D8h] [rbp+D0h]
  __int64 v79; // [rsp+1E0h] [rbp+D8h]
  char *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  __int128 *v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+200h] [rbp+F8h]
  char *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  char *v86; // [rsp+218h] [rbp+110h]
  __int64 v87; // [rsp+220h] [rbp+118h]
  char *v88; // [rsp+228h] [rbp+120h]
  __int64 v89; // [rsp+230h] [rbp+128h]
  __int128 *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  char *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  int *p_Data; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int16 *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  __int16 *v98; // [rsp+278h] [rbp+170h]
  __int64 v99; // [rsp+280h] [rbp+178h]
  int *v100; // [rsp+288h] [rbp+180h]
  __int64 v101; // [rsp+290h] [rbp+188h]
  int *v102; // [rsp+298h] [rbp+190h]
  __int64 v103; // [rsp+2A0h] [rbp+198h]
  int *v104; // [rsp+2A8h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1A8h]
  int *v106; // [rsp+2B8h] [rbp+1B0h]
  __int64 v107; // [rsp+2C0h] [rbp+1B8h]
  int *v108; // [rsp+2C8h] [rbp+1C0h]
  __int64 v109; // [rsp+2D0h] [rbp+1C8h]
  int *v110; // [rsp+2D8h] [rbp+1D0h]
  __int64 v111; // [rsp+2E0h] [rbp+1D8h]
  int *v112; // [rsp+2E8h] [rbp+1E0h]
  __int64 v113; // [rsp+2F0h] [rbp+1E8h]
  int *v114; // [rsp+2F8h] [rbp+1F0h]
  __int64 v115; // [rsp+300h] [rbp+1F8h]
  int *v116; // [rsp+308h] [rbp+200h]
  __int64 v117; // [rsp+310h] [rbp+208h]
  int *v118; // [rsp+318h] [rbp+210h]
  __int64 v119; // [rsp+320h] [rbp+218h]
  int *v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+330h] [rbp+228h]
  int *v122; // [rsp+338h] [rbp+230h]
  __int64 v123; // [rsp+340h] [rbp+238h]
  int *v124; // [rsp+348h] [rbp+240h]
  __int64 v125; // [rsp+350h] [rbp+248h]
  char *v126; // [rsp+358h] [rbp+250h]
  __int64 v127; // [rsp+360h] [rbp+258h]
  int *v128; // [rsp+368h] [rbp+260h]
  __int64 v129; // [rsp+370h] [rbp+268h]
  __int128 *v130; // [rsp+378h] [rbp+270h]
  __int64 v131; // [rsp+380h] [rbp+278h]
  char *v132; // [rsp+388h] [rbp+280h]
  __int64 v133; // [rsp+390h] [rbp+288h]
  char *v134; // [rsp+398h] [rbp+290h]
  __int64 v135; // [rsp+3A0h] [rbp+298h]
  __int64 *v136; // [rsp+3A8h] [rbp+2A0h]
  __int64 v137; // [rsp+3B0h] [rbp+2A8h]
  int v138; // [rsp+3E0h] [rbp+2D8h] BYREF

  v138 = a2;
  CitUpdateInputTypeCoverage(a1);
  if ( *((_WORD *)a1 + 148) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 149, 1);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)&Data_8);
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
    {
      p_Data_8 = &Data_8;
      v54 = (char *)&Data_8 + 4;
      v56 = (char *)&Data_8 + 6;
      v58 = (char *)&Data_8 + 8;
      v60 = (char *)&Data_8 + 10;
      v62 = (char *)&Data_8 + 12;
      v64 = &v45;
      v66 = (char *)&v45 + 4;
      v68 = (char *)&v45 + 8;
      v70 = (char *)&v45 + 12;
      v72 = (char *)&v45 + 14;
      v74 = &v46;
      v76 = (char *)&v46 + 4;
      v78 = (char *)&v46 + 8;
      v80 = (char *)&v46 + 12;
      v82 = &v47;
      v84 = (char *)&v47 + 4;
      v86 = (char *)&v47 + 8;
      v88 = (char *)&v47 + 12;
      v90 = &v48;
      v92 = (char *)&v48 + 4;
      v4 = *((_QWORD *)a1 + 58);
      v53 = 4LL;
      v55 = 2LL;
      v57 = 2LL;
      v59 = 2LL;
      v61 = 2LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 2LL;
      v71 = 2LL;
      v73 = 2LL;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 4LL;
      v83 = 4LL;
      v85 = 4LL;
      v87 = 4LL;
      v89 = 4LL;
      v91 = 4LL;
      v93 = 4LL;
      if ( *((_QWORD *)&v48 + 1) <= v4 )
        v5 = 0LL;
      else
        v5 = *((_QWORD *)&v48 + 1) - v4;
      v95 = 4LL;
      v6 = v5;
      v7 = *((_WORD *)a1 + 198);
      v8 = -1;
      if ( v6 / 0x989680 <= 0xFFFFFFFF )
        v8 = v6 / 0x989680;
      Data = v8;
      p_Data = &Data;
      if ( WORD2(Data_8) > v7 )
        v28 = WORD2(Data_8) - v7;
      else
        v28 = 0;
      v9 = *((_WORD *)a1 + 199);
      v96 = &v28;
      v97 = 2LL;
      if ( WORD3(Data_8) > v9 )
        v29 = WORD3(Data_8) - v9;
      else
        v29 = 0;
      v10 = *((_WORD *)a1 + 200);
      v98 = &v29;
      v99 = 2LL;
      if ( WORD4(Data_8) <= v10 )
        LOWORD(v30) = 0;
      else
        LOWORD(v30) = WORD4(Data_8) - v10;
      v11 = *((_DWORD *)a1 + 101);
      v100 = &v30;
      v101 = 2LL;
      if ( HIDWORD(Data_8) <= v11 )
        v31 = 0;
      else
        v31 = HIDWORD(Data_8) - v11;
      v12 = *((_DWORD *)a1 + 102);
      v102 = (int *)&v31;
      v103 = 4LL;
      if ( (unsigned int)v45 <= v12 )
        v32 = 0;
      else
        v32 = v45 - v12;
      v13 = *((_DWORD *)a1 + 103);
      v104 = &v32;
      v105 = 4LL;
      if ( DWORD1(v45) <= v13 )
        v33 = 0;
      else
        v33 = DWORD1(v45) - v13;
      v14 = *((_DWORD *)a1 + 107);
      v106 = (int *)&v33;
      v107 = 4LL;
      if ( DWORD1(v46) <= v14 )
        v34 = 0;
      else
        v34 = DWORD1(v46) - v14;
      v15 = *((_DWORD *)a1 + 108);
      v108 = (int *)&v34;
      v109 = 4LL;
      if ( DWORD2(v46) <= v15 )
        v35 = 0;
      else
        v35 = DWORD2(v46) - v15;
      v16 = *((_DWORD *)a1 + 109);
      v110 = (int *)&v35;
      v111 = 4LL;
      if ( HIDWORD(v46) <= v16 )
        v36 = 0;
      else
        v36 = HIDWORD(v46) - v16;
      v17 = *((_DWORD *)a1 + 110);
      v112 = (int *)&v36;
      v113 = 4LL;
      if ( (unsigned int)v47 <= v17 )
        v37 = 0;
      else
        v37 = v47 - v17;
      v18 = *((_DWORD *)a1 + 111);
      v114 = &v37;
      v115 = 4LL;
      if ( DWORD1(v47) > v18 )
        v38 = DWORD1(v47) - v18;
      else
        v38 = 0;
      v19 = *((_DWORD *)a1 + 112);
      v116 = (int *)&v38;
      v117 = 4LL;
      if ( DWORD2(v47) > v19 )
        v39 = DWORD2(v47) - v19;
      else
        v39 = 0;
      v20 = *((_DWORD *)a1 + 113);
      v118 = (int *)&v39;
      v119 = 4LL;
      if ( HIDWORD(v47) <= v20 )
        v40 = 0;
      else
        v40 = HIDWORD(v47) - v20;
      v21 = *((_DWORD *)a1 + 114);
      v120 = (int *)&v40;
      v121 = 4LL;
      if ( (unsigned int)v48 <= v21 )
        v41 = 0;
      else
        v41 = v48 - v21;
      v22 = *((_DWORD *)a1 + 115);
      v122 = &v41;
      v123 = 4LL;
      if ( DWORD1(v48) <= v22 )
        v42 = 0;
      else
        v42 = DWORD1(v48) - v22;
      v125 = 4LL;
      v124 = (int *)&v42;
      v126 = (char *)a1 + 200;
      v128 = &v138;
      v130 = &v49;
      v132 = (char *)&v49 + 8;
      v134 = (char *)&v49 + 12;
      v136 = &v50;
      v127 = 4LL;
      v129 = 4LL;
      v131 = 8LL;
      v133 = 2LL;
      v135 = 4LL;
      v137 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016AF14, 0LL, v3, 0x2Du, &pData);
    }
    CitpPostUpdateUseInfoSave(a1, &Data_8);
    v23 = v45;
    *(_OWORD *)((char *)a1 + 392) = Data_8;
    v24 = v46;
    *(_OWORD *)((char *)a1 + 408) = v23;
    v25 = v47;
    *(_OWORD *)((char *)a1 + 424) = v24;
    v26 = v48;
    *(_OWORD *)((char *)a1 + 440) = v25;
    v27 = v49;
    *(_OWORD *)((char *)a1 + 456) = v26;
    *(_QWORD *)&v26 = v50;
    *(_OWORD *)((char *)a1 + 472) = v27;
    *((_QWORD *)a1 + 61) = v26;
  }
}
