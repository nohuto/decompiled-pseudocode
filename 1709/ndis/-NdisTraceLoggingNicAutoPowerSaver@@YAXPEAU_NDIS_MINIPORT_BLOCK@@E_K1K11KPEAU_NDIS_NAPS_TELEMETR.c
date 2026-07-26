/*
 * XREFs of ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C007882C
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C0071A88 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z @ 0x1C0079CE4 (-ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall NdisTraceLoggingNicAutoPowerSaver(
        _NDIS_MINIPORT_AOAC *IfOutUnicastPackets,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        unsigned int a8,
        struct _NDIS_NAPS_TELEMETRY_REASON_DATA *a9,
        unsigned int a10,
        struct _NDIS_NAPS_TELEMETRY_OID_DATA *a11)
{
  struct _NDIS_MINIPORT_BLOCK *v12; // rbx
  union _LARGE_INTEGER v13; // rax
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  _NDIS_SS_RESUME_REASON v18; // [rsp+40h] [rbp-C8h] BYREF
  int WakeCount; // [rsp+44h] [rbp-C4h] BYREF
  int BusyCount; // [rsp+48h] [rbp-C0h] BYREF
  _NDIS_SS_RESUME_REASON v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  _NDIS_SS_RESUME_REASON v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  int v26; // [rsp+60h] [rbp-A8h] BYREF
  _NDIS_SS_RESUME_REASON v27; // [rsp+64h] [rbp-A4h] BYREF
  int v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+6Ch] [rbp-9Ch] BYREF
  _NDIS_SS_RESUME_REASON v30; // [rsp+70h] [rbp-98h] BYREF
  int v31; // [rsp+74h] [rbp-94h] BYREF
  int v32; // [rsp+78h] [rbp-90h] BYREF
  unsigned int Oid; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v34; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+84h] [rbp-84h] BYREF
  int v36; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v38; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+94h] [rbp-74h] BYREF
  int v40; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v41; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v42; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v43; // [rsp+A4h] [rbp-64h] BYREF
  int v44; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v45; // [rsp+ACh] [rbp-5Ch] BYREF
  int v46; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+B4h] [rbp-54h] BYREF
  int v48; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER v49; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-38h] BYREF
  union _LARGE_INTEGER v52; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v57; // [rsp+100h] [rbp-8h] BYREF
  __int64 v58; // [rsp+108h] [rbp+0h] BYREF
  __int64 v59; // [rsp+110h] [rbp+8h] BYREF
  __int64 v60; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+48h]
  __int64 *v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  int *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  union _LARGE_INTEGER *v68; // [rsp+178h] [rbp+70h]
  __int64 v69; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]
  unsigned int *v72; // [rsp+198h] [rbp+90h]
  __int64 v73; // [rsp+1A0h] [rbp+98h]
  __int64 *v74; // [rsp+1A8h] [rbp+A0h]
  __int64 v75; // [rsp+1B0h] [rbp+A8h]
  char *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  char *v78; // [rsp+1C8h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *v80; // [rsp+1D8h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  _NDIS_SS_RESUME_REASON *v82; // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  int *p_WakeCount; // [rsp+1F8h] [rbp+F0h]
  __int64 v85; // [rsp+200h] [rbp+F8h]
  int *p_BusyCount; // [rsp+208h] [rbp+100h]
  __int64 v87; // [rsp+210h] [rbp+108h]
  unsigned __int64 *p_TotalTimeMs; // [rsp+218h] [rbp+110h]
  __int64 v89; // [rsp+220h] [rbp+118h]
  _NDIS_SS_RESUME_REASON *v90; // [rsp+228h] [rbp+120h]
  __int64 v91; // [rsp+230h] [rbp+128h]
  int *v92; // [rsp+238h] [rbp+130h]
  __int64 v93; // [rsp+240h] [rbp+138h]
  int *v94; // [rsp+248h] [rbp+140h]
  __int64 v95; // [rsp+250h] [rbp+148h]
  unsigned __int64 *v96; // [rsp+258h] [rbp+150h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  _NDIS_SS_RESUME_REASON *v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  int *v100; // [rsp+278h] [rbp+170h]
  __int64 v101; // [rsp+280h] [rbp+178h]
  int *v102; // [rsp+288h] [rbp+180h]
  __int64 v103; // [rsp+290h] [rbp+188h]
  unsigned __int64 *v104; // [rsp+298h] [rbp+190h]
  __int64 v105; // [rsp+2A0h] [rbp+198h]
  _NDIS_SS_RESUME_REASON *v106; // [rsp+2A8h] [rbp+1A0h]
  __int64 v107; // [rsp+2B0h] [rbp+1A8h]
  int *v108; // [rsp+2B8h] [rbp+1B0h]
  __int64 v109; // [rsp+2C0h] [rbp+1B8h]
  int *v110; // [rsp+2C8h] [rbp+1C0h]
  __int64 v111; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 *v112; // [rsp+2D8h] [rbp+1D0h]
  __int64 v113; // [rsp+2E0h] [rbp+1D8h]
  _NDIS_SS_RESUME_REASON *v114; // [rsp+2E8h] [rbp+1E0h]
  __int64 v115; // [rsp+2F0h] [rbp+1E8h]
  int *v116; // [rsp+2F8h] [rbp+1F0h]
  __int64 v117; // [rsp+300h] [rbp+1F8h]
  int *v118; // [rsp+308h] [rbp+200h]
  __int64 v119; // [rsp+310h] [rbp+208h]
  unsigned __int64 *v120; // [rsp+318h] [rbp+210h]
  __int64 v121; // [rsp+320h] [rbp+218h]
  unsigned int *p_Oid; // [rsp+328h] [rbp+220h]
  __int64 v123; // [rsp+330h] [rbp+228h]
  int *v124; // [rsp+338h] [rbp+230h]
  __int64 v125; // [rsp+340h] [rbp+238h]
  __int64 *v126; // [rsp+348h] [rbp+240h]
  __int64 v127; // [rsp+350h] [rbp+248h]
  unsigned int *v128; // [rsp+358h] [rbp+250h]
  __int64 v129; // [rsp+360h] [rbp+258h]
  int *v130; // [rsp+368h] [rbp+260h]
  __int64 v131; // [rsp+370h] [rbp+268h]
  __int64 *v132; // [rsp+378h] [rbp+270h]
  __int64 v133; // [rsp+380h] [rbp+278h]
  unsigned int *v134; // [rsp+388h] [rbp+280h]
  __int64 v135; // [rsp+390h] [rbp+288h]
  int *v136; // [rsp+398h] [rbp+290h]
  __int64 v137; // [rsp+3A0h] [rbp+298h]
  __int64 *v138; // [rsp+3A8h] [rbp+2A0h]
  __int64 v139; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v140; // [rsp+3B8h] [rbp+2B0h]
  __int64 v141; // [rsp+3C0h] [rbp+2B8h]
  int *v142; // [rsp+3C8h] [rbp+2C0h]
  __int64 v143; // [rsp+3D0h] [rbp+2C8h]
  __int64 *v144; // [rsp+3D8h] [rbp+2D0h]
  __int64 v145; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v146; // [rsp+3E8h] [rbp+2E0h]
  __int64 v147; // [rsp+3F0h] [rbp+2E8h]
  int *v148; // [rsp+3F8h] [rbp+2F0h]
  __int64 v149; // [rsp+400h] [rbp+2F8h]
  __int64 *v150; // [rsp+408h] [rbp+300h]
  __int64 v151; // [rsp+410h] [rbp+308h]
  unsigned int *v152; // [rsp+418h] [rbp+310h]
  __int64 v153; // [rsp+420h] [rbp+318h]
  int *v154; // [rsp+428h] [rbp+320h]
  __int64 v155; // [rsp+430h] [rbp+328h]
  __int64 *v156; // [rsp+438h] [rbp+330h]
  __int64 v157; // [rsp+440h] [rbp+338h]
  unsigned int *v158; // [rsp+448h] [rbp+340h]
  __int64 v159; // [rsp+450h] [rbp+348h]
  int *v160; // [rsp+458h] [rbp+350h]
  __int64 v161; // [rsp+460h] [rbp+358h]
  __int64 *v162; // [rsp+468h] [rbp+360h]
  __int64 v163; // [rsp+470h] [rbp+368h]
  unsigned int *v164; // [rsp+478h] [rbp+370h]
  __int64 v165; // [rsp+480h] [rbp+378h]
  int *v166; // [rsp+488h] [rbp+380h]
  __int64 v167; // [rsp+490h] [rbp+388h]
  __int64 *v168; // [rsp+498h] [rbp+390h]
  __int64 v169; // [rsp+4A0h] [rbp+398h]
  unsigned __int64 v170; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int64 v171; // [rsp+4F0h] [rbp+3E8h] BYREF

  v171 = a4;
  v170 = a3;
  v12 = (struct _NDIS_MINIPORT_BLOCK *)IfOutUnicastPackets;
  if ( (IfOutUnicastPackets->CsTrafficStats[2].IfOutMulticastPackets & 0x400000000LL) != 0
    && IfOutUnicastPackets[3].CsTrafficStats[2].IfInUnicastPackets
    && a3 >= 0x927C0 )
  {
    if ( a2 )
    {
      v50 = 0LL;
    }
    else
    {
      IfOutUnicastPackets = (_NDIS_MINIPORT_AOAC *)IfOutUnicastPackets[3].CsTrafficStats[2].IfOutUnicastPackets;
      v50 = IfOutUnicastPackets->TotalCsActiveTime / 0x2710;
    }
    v13.QuadPart = 0LL;
    v49.QuadPart = 0LL;
    if ( !a2 )
    {
      ndisConvertInterruptTimeToLocalTime((unsigned __int64)IfOutUnicastPackets, &v49);
      v13 = v49;
    }
    v52 = v13;
    if ( hProvider.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        p_InterfaceGuid = &v12->InterfaceGuid;
        v51 = *((unsigned __int16 *)&v12->NetLuid.Info + 3);
        LOBYTE(v16) = a2 == 0;
        v63 = 16LL;
        v64 = &v51;
        v66 = &v16;
        v68 = &v52;
        v70 = &v170;
        v17 = a5;
        v72 = &v17;
        v74 = &v171;
        v76 = &a6;
        v78 = &a7;
        v80 = &v50;
        v18.StopReason = (_NDIS_SS_STOP_REASON)a9->Reason;
        v82 = &v18;
        WakeCount = a9->WakeCount;
        p_WakeCount = &WakeCount;
        BusyCount = a9->BusyCount;
        p_BusyCount = &BusyCount;
        p_TotalTimeMs = &a9->TotalTimeMs;
        v21.StopReason = (_NDIS_SS_STOP_REASON)a9[1].Reason;
        v90 = &v21;
        v22 = a9[1].WakeCount;
        v92 = &v22;
        v23 = a9[1].BusyCount;
        v94 = &v23;
        v96 = &a9[1].TotalTimeMs;
        v24.StopReason = (_NDIS_SS_STOP_REASON)a9[2].Reason;
        v98 = &v24;
        v25 = a9[2].WakeCount;
        v65 = 8LL;
        v67 = 1LL;
        v69 = 8LL;
        v71 = 8LL;
        v73 = 4LL;
        v75 = 8LL;
        v77 = 8LL;
        v79 = 8LL;
        v81 = 8LL;
        v83 = 4LL;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 8LL;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 4LL;
        v97 = 8LL;
        v99 = 4LL;
        v100 = &v25;
        v26 = a9[2].BusyCount;
        v102 = &v26;
        v104 = &a9[2].TotalTimeMs;
        v27.StopReason = (_NDIS_SS_STOP_REASON)a9[3].Reason;
        v106 = &v27;
        v28 = a9[3].WakeCount;
        v108 = &v28;
        v29 = a9[3].BusyCount;
        v110 = &v29;
        v112 = &a9[3].TotalTimeMs;
        v30.StopReason = (_NDIS_SS_STOP_REASON)a9[4].Reason;
        v114 = &v30;
        v31 = a9[4].WakeCount;
        v116 = &v31;
        v32 = a9[4].BusyCount;
        v118 = &v32;
        v120 = &a9[4].TotalTimeMs;
        Oid = a11->Oid;
        p_Oid = &Oid;
        v34 = a11->WakeCount;
        v124 = &v34;
        v53 = a11->BusyCount;
        v126 = &v53;
        v35 = a11[1].Oid;
        v128 = &v35;
        v36 = a11[1].WakeCount;
        v130 = &v36;
        v54 = a11[1].BusyCount;
        v132 = &v54;
        v37 = a11[2].Oid;
        v134 = &v37;
        v101 = 4LL;
        v103 = 4LL;
        v105 = 8LL;
        v107 = 4LL;
        v109 = 4LL;
        v111 = 4LL;
        v113 = 8LL;
        v115 = 4LL;
        v117 = 4LL;
        v119 = 4LL;
        v121 = 8LL;
        v123 = 4LL;
        v125 = 4LL;
        v127 = 8LL;
        v129 = 4LL;
        v131 = 4LL;
        v133 = 8LL;
        v38 = a11[2].WakeCount;
        v136 = &v38;
        v55 = a11[2].BusyCount;
        v138 = &v55;
        v39 = a11[3].Oid;
        v140 = &v39;
        v40 = a11[3].WakeCount;
        v142 = &v40;
        v56 = a11[3].BusyCount;
        v144 = &v56;
        v41 = a11[4].Oid;
        v146 = &v41;
        v42 = a11[4].WakeCount;
        v148 = &v42;
        v57 = a11[4].BusyCount;
        v150 = &v57;
        v43 = a11[5].Oid;
        v152 = &v43;
        v44 = a11[5].WakeCount;
        v154 = &v44;
        v58 = a11[5].BusyCount;
        v156 = &v58;
        v45 = a11[6].Oid;
        v158 = &v45;
        v46 = a11[6].WakeCount;
        v160 = &v46;
        v59 = a11[6].BusyCount;
        v162 = &v59;
        v47 = a11[7].Oid;
        v164 = &v47;
        v48 = a11[7].WakeCount;
        v166 = &v48;
        v135 = 4LL;
        v137 = 4LL;
        v139 = 8LL;
        v141 = 4LL;
        v143 = 4LL;
        v145 = 8LL;
        v147 = 4LL;
        v149 = 4LL;
        v151 = 8LL;
        v153 = 4LL;
        v155 = 4LL;
        v157 = 8LL;
        v159 = 4LL;
        v161 = 4LL;
        v163 = 8LL;
        v165 = 4LL;
        v167 = 4LL;
        v60 = a11[7].BusyCount;
        v168 = &v60;
        v169 = 8LL;
        TlgWrite(&hProvider, &unk_1C00842A3, v14, v15, 0x38u, &pData);
      }
    }
  }
}
