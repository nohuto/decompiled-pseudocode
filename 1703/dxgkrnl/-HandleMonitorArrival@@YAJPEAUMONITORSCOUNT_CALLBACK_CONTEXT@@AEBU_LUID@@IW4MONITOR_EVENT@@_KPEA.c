/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000BAC0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008CF3C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00EB9B0 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C01A8D08 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01A9158 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01A9808 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C01A9958 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01A9A20 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01AAC94 (-IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C01AAE28 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DE30C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01DE7C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01DE9E0 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  int MonitorType; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  unsigned __int8 v15; // al
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct CCD_BTL *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // edi
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // ebx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned int v40; // ecx
  unsigned int v41; // r8d
  unsigned int v42; // edx
  __int16 v43; // cx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  _QWORD *v53; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v54; // eax
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // r15d
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v62; // rbx
  unsigned int i; // r15d
  __int64 v64; // rdx
  __int64 PathsCount; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rax
  int v78; // r15d
  __int64 v79; // rcx
  _QWORD *v80; // rax
  int v81; // r15d
  _QWORD *v82; // rax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r15
  __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // r9
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // rax
  unsigned int v95; // r9d
  unsigned int v96; // r8d
  unsigned int v97; // edx
  enum MultiScreenShellCapabilities *v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  unsigned __int8 v101; // r15
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v103; // r8
  __int64 v104; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v105; // rax
  __int64 v106; // r8
  __int64 v107; // r9
  unsigned __int8 v108; // al
  __int64 v109; // rdx
  __int64 v110; // rcx
  unsigned __int16 v111; // bx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rcx
  unsigned __int16 v122; // dx
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rax
  unsigned int j; // ebx
  __int64 v132; // rcx
  unsigned __int16 v133; // ax
  __int16 v134; // bx
  unsigned __int16 v135; // bx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // r8
  __int64 v142; // r9
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r15
  __int64 v147; // rax
  unsigned int v148; // r15d
  char v149; // al
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v156; // rbx
  __int64 v157; // r8
  __int64 v158; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rax
  __int128 v163; // xmm1
  __int64 v164; // rdx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v165; // rbx
  __int64 v166; // r8
  __int64 v167; // r9
  char v168; // al
  __int64 v169; // rcx
  __int64 v170; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rax
  int v175; // eax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rbx
  __int64 v181; // rax
  __int64 v182; // r8
  __int64 v183; // r9
  int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r15
  __int64 v188; // rax
  int v189; // eax
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rbx
  __int64 v193; // rax
  __int64 v194; // r8
  __int64 v195; // r9
  int v196; // eax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r15
  __int64 v200; // rax
  int v201; // eax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // rbx
  _QWORD *v205; // rax
  _QWORD *v206; // rax
  unsigned __int8 v207[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v208[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v209; // [rsp+60h] [rbp-A8h] BYREF
  int LaptopSpecialCaseFlags; // [rsp+64h] [rbp-A4h]
  int v211; // [rsp+68h] [rbp-A0h]
  int v212; // [rsp+6Ch] [rbp-9Ch] BYREF
  int UnusedVidpnSourceId; // [rsp+70h] [rbp-98h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v214; // [rsp+74h] [rbp-94h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v215[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v216; // [rsp+B8h] [rbp-50h]
  int v217; // [rsp+C4h] [rbp-44h]
  int v218; // [rsp+C8h] [rbp-40h]
  struct _D3DKMT_GETPATHSMODALITY *v219[12]; // [rsp+D8h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v220[12]; // [rsp+138h] [rbp+30h] BYREF

  v6 = a4;
  v8 = a3;
  if ( a5 != 4 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v215, 8u, 0);
    v25 = CCD_BTL::Global(v22, v21, v23, v24);
    v26 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v215, v25);
    v31 = 0;
    v32 = v26;
    if ( v26 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v33[3] = v32;
      v33[4] = a2->HighPart;
      v33[5] = a2->LowPart;
      v33[6] = v8;
      v33[7] = v6;
      WdLogEvent5_WdError(v33);
      DxgkLogCodePointPacket(0x3Eu, 0, v32, 0, (__int64)*a2);
LABEL_20:
      *(_BYTE *)(a1 + 25) = 1;
LABEL_140:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v215);
      return v31;
    }
    v36 = *((_DWORD *)DXGGLOBAL::GetGlobal(v28, v27, v29, v30) + 318);
    if ( v36 > 1 )
    {
      v39 = WdLogNewEntry5_WdWarning(v35, v34, v37, v38);
      *(_QWORD *)(v39 + 24) = 4142LL;
      WdLogEvent5_WdWarning(v39);
      v40 = 82;
      v41 = 1;
      v42 = v36;
LABEL_19:
      DxgkLogCodePointPacket(v40, v42, v41, 0, (__int64)*a2);
      goto LABEL_20;
    }
    if ( v216 )
      v43 = *(_WORD *)(v216 + 20);
    else
      v43 = 0;
    if ( !v43 )
    {
      v42 = 1;
      v41 = 0;
      v40 = 62;
      goto LABEL_19;
    }
    v44 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v47 = v44;
    if ( v44 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
      v48[3] = v47;
      v48[4] = a2->HighPart;
      v48[5] = a2->LowPart;
      v48[6] = v8;
      v48[7] = v6;
      WdLogEvent5_WdError(v48);
    }
    v207[2] = 1;
    v207[3] = 0;
    v207[0] = 0;
    v49 = QueryMonitorType(
            a2,
            v8,
            (enum _DMM_VIDPN_MONITOR_TYPE *)&v212,
            &v209,
            &v214,
            &v208[1],
            &v207[2],
            &v207[3],
            v207,
            0LL);
    v52 = v49;
    if ( v49 >= 0 )
    {
      v55 = v212;
      v54 = v209;
    }
    else
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
      v53[3] = v52;
      v53[4] = a2->HighPart;
      v53[5] = a2->LowPart;
      v53[6] = v8;
      v53[7] = v6;
      WdLogEvent5_WdError(v53);
      v54 = D3DKMDT_VOT_UNINITIALIZED;
      v208[1] = 0;
      v55 = 0;
      v209 = D3DKMDT_VOT_UNINITIALIZED;
      v212 = 0;
      v207[2] = 0;
      v207[3] = 0;
      v207[0] = 0;
    }
    LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                               (const struct CCD_TOPOLOGY *)v215,
                               a2,
                               (unsigned int)v8,
                               (unsigned int)v54,
                               (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v59 = LaptopSpecialCaseFlags;
    if ( LaptopSpecialCaseFlags )
    {
      if ( LaptopSpecialCaseFlags == 1 )
      {
        *(_BYTE *)(a1 + 26) = 1;
      }
      else if ( LaptopSpecialCaseFlags == 8 )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else
      {
        v60 = WdLogNewEntry5_WdAssertion((unsigned int)(LaptopSpecialCaseFlags - 1), v56, v57, v58);
        *(_QWORD *)(v60 + 24) = 4234LL;
        WdLogEvent5_WdAssertion(v60);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v220, 8u, 0);
    if ( v59 && v55 == 1 )
      v61 = v59 | 0x86;
    else
      v61 = 143;
    LODWORD(v62) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v220, v61, 0LL);
    if ( (int)v62 < 0 )
      goto LABEL_50;
    if ( v214 == D3DKMDT_VOT_MIRACAST )
    {
      for ( i = 0; ; ++i )
      {
        PathsCount = (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v220);
        if ( i >= (unsigned int)PathsCount )
          break;
        if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v220, i, v66, v67) + 7) == (_DWORD)v8 )
          goto LABEL_43;
      }
      v68 = WdLogNewEntry5_WdError(PathsCount, v64);
      *(_QWORD *)(v68 + 24) = 4284LL;
      WdLogEvent5_WdError(v68);
      LODWORD(v62) = -1073741823;
    }
LABEL_43:
    if ( !IsValidCloneConfiguration(v220[8]) )
    {
      v73 = WdLogNewEntry5_WdError(v70, v69);
      *(_QWORD *)(v73 + 24) = 4294LL;
      WdLogEvent5_WdError(v73);
      LODWORD(v62) = -1073741823;
    }
    if ( (int)v62 < 0 )
    {
LABEL_50:
      v78 = a4;
    }
    else
    {
      v74 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v220, 0LL, v71, v72);
      v62 = v74;
      if ( v74 >= 0 )
      {
        v78 = a4;
      }
      else
      {
        v77 = (_QWORD *)WdLogNewEntry5_WdError(v76, v75);
        v78 = a4;
        v77[3] = v62;
        v77[4] = a2->HighPart;
        v77[5] = a2->LowPart;
        v77[6] = v8;
        v77[7] = a4;
        WdLogEvent5_WdError(v77);
        DxgkLogCodePointPacket(0x3Eu, 2u, v62, 0, (__int64)*a2);
      }
      *(_DWORD *)(a1 + 32) |= 0x40u;
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY(v220);
    if ( (int)v62 >= 0 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdEvent(v79);
      v81 = a4;
      v80[3] = a2->HighPart;
      v80[4] = a2->LowPart;
      v80[7] = a5;
      v80[5] = v8;
      v80[6] = a4;
      WdLogEvent5_WdEvent(v80);
LABEL_137:
      v201 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
      v204 = v201;
      if ( v201 < 0 )
      {
        v205 = (_QWORD *)WdLogNewEntry5_WdError(v203, v202);
        v205[3] = v204;
        v205[4] = a2->HighPart;
        v205[5] = a2->LowPart;
        v205[7] = v81;
        v205[6] = v8;
        WdLogEvent5_WdError(v205);
        LODWORD(v204) = 0;
      }
      v206 = (_QWORD *)WdLogNewEntry5_WdEvent(v203);
      v206[3] = a2->HighPart;
      v206[4] = a2->LowPart;
      v206[6] = v81;
      v206[7] = a5;
      v206[5] = v8;
      WdLogEvent5_WdEvent(v206);
      v31 = v204;
      goto LABEL_140;
    }
    if ( (_DWORD)v62 == -1073741266 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_136;
    }
    v82 = (_QWORD *)WdLogNewEntry5_WdEvent(v79);
    v82[3] = (int)v62;
    v82[4] = a2->HighPart;
    v82[5] = a2->LowPart;
    v82[7] = v78;
    v82[6] = v8;
    WdLogEvent5_WdEvent(v82);
    *(_BYTE *)(a1 + 25) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v219, 8u, 0);
    v83 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v219, (const struct CCD_TOPOLOGY *)v215);
    v86 = v83;
    if ( v83 < 0 )
    {
      v87 = WdLogNewEntry5_WdError(v85, v84);
      *(_QWORD *)(v87 + 24) = v86;
      *(_QWORD *)(v87 + 32) = v215;
      WdLogEvent5_WdError(v87);
      v90 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v215, 0LL, v88, v89);
      v93 = v90;
      if ( v90 < 0 )
      {
        v94 = WdLogNewEntry5_WdError(v92, v91);
        *(_QWORD *)(v94 + 24) = v93;
        *(_QWORD *)(v94 + 32) = v215;
        WdLogEvent5_WdError(v94);
      }
      v95 = v93;
      v96 = v86;
      v97 = 3;
      goto LABEL_58;
    }
    CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v215, a2, v8);
    v101 = v207[0];
    v108 = 0;
    if ( !v207[0] && !v207[2] )
    {
      if ( v208[1]
        || (PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v99, v100),
            v105 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v103, v104),
            DxgkIsPortraitFirstTarget(
              *(struct _LUID *)((char *)v105 + 16),
              *((unsigned int *)PathDescriptor + 7),
              v106,
              v107)) )
      {
        v108 = 1;
      }
    }
    LOBYTE(v98) = v108;
    v207[1] = v108;
    v111 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v98);
    v211 = v111;
    if ( v111 == 3 )
    {
      if ( v101 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v112, v113) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v112, v113) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v115, v116) + 5) )
      {
        if ( !v101 )
        {
          UnusedVidpnSourceId = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v112, v113) + 6);
          goto LABEL_94;
        }
      }
      else
      {
        v111 = 4;
        v211 = 4;
      }
    }
    else if ( (unsigned __int16)(v111 - 4) > 1u )
    {
      v114 = WdLogNewEntry5_WdAssertion(v110, v109, v112, v113);
      *(_QWORD *)(v114 + 24) = 4425LL;
      WdLogEvent5_WdAssertion(v114);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v215, a2);
    if ( UnusedVidpnSourceId == 16 )
    {
      v121 = WdLogNewEntry5_WdEvent(v120);
      if ( v216 )
        v122 = *(_WORD *)(v216 + 20);
      else
        v122 = 0;
      *(_QWORD *)(v121 + 24) = v122;
      *(_QWORD *)(v121 + 32) = 16LL;
      WdLogEvent5_WdEvent(v121);
      v125 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v219, 0LL, v123, v124);
      v128 = v125;
      if ( v125 < 0 )
      {
        v129 = WdLogNewEntry5_WdError(v127, v126);
        *(_QWORD *)(v129 + 24) = v128;
        *(_QWORD *)(v129 + 32) = v219;
        WdLogEvent5_WdError(v129);
      }
      v95 = 0;
      v96 = v128;
      v97 = 4;
      goto LABEL_58;
    }
    if ( v111 == 3 )
    {
      if ( !v101 )
      {
        v130 = WdLogNewEntry5_WdAssertion(v120, v119, v117, v118);
        *(_QWORD *)(v130 + 24) = 4502LL;
        WdLogEvent5_WdAssertion(v130);
      }
      for ( j = 0; ; ++j )
      {
        v132 = v216;
        v133 = v216 ? *(_WORD *)(v216 + 20) : 0;
        if ( j >= v133 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, j, v117, v118) + 129) )
        {
          LOWORD(v211) = 4;
          goto LABEL_94;
        }
      }
LABEL_95:
      if ( v132 )
        v134 = *(_WORD *)(v132 + 20);
      else
        v134 = 0;
      v135 = v134 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v215, v135, v117, v118) >= v135 )
      {
        v148 = v135 - 1;
        if ( !v207[0] )
        {
          v149 = LaptopSpecialCaseFlags;
          if ( LaptopSpecialCaseFlags )
          {
            if ( v135 != 2 )
            {
              v150 = WdLogNewEntry5_WdAssertion(2LL, v136, v138, v139);
              *(_QWORD *)(v150 + 24) = 4565LL;
              WdLogEvent5_WdAssertion(v150);
              v149 = LaptopSpecialCaseFlags;
            }
            if ( v207[1] )
              v148 = !IsInternalVideoOutput(v209);
            else
              v148 = ((unsigned __int8)~v149 >> 3) & 1;
            if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v138, v139) + 23) )
            {
              v155 = WdLogNewEntry5_WdAssertion(v152, v151, v153, v154);
              *(_QWORD *)(v155 + 24) = 4597LL;
              WdLogEvent5_WdAssertion(v155);
            }
            v156 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 0LL, v153, v154);
            v159 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 1LL, v157, v158);
            v162 = 2LL;
            do
            {
              *(_OWORD *)v159 = *(_OWORD *)v156;
              *((_OWORD *)v159 + 1) = *((_OWORD *)v156 + 1);
              *((_OWORD *)v159 + 2) = *((_OWORD *)v156 + 2);
              *((_OWORD *)v159 + 3) = *((_OWORD *)v156 + 3);
              *((_OWORD *)v159 + 4) = *((_OWORD *)v156 + 4);
              *((_OWORD *)v159 + 5) = *((_OWORD *)v156 + 5);
              *((_OWORD *)v159 + 6) = *((_OWORD *)v156 + 6);
              v159 = (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v159 + 128);
              v163 = *((_OWORD *)v156 + 7);
              v156 = (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v156 + 128);
              *((_OWORD *)v159 - 1) = v163;
              --v162;
            }
            while ( v162 );
            *(_QWORD *)v159 = *(_QWORD *)v156;
            *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, 1 - v148, v160, v161) = 0xCF00000000000LL;
          }
        }
        v165 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, v148, v138, v139);
        *((struct _LUID *)v165 + 2) = *a2;
        *((_DWORD *)v165 + 6) = UnusedVidpnSourceId;
        *((_DWORD *)v165 + 22) = v209;
        *((_DWORD *)v165 + 23) = v214;
        *((_DWORD *)v165 + 7) = v8;
        if ( v207[3] || (v168 = 0, v207[0]) )
          v168 = 1;
        *((_BYTE *)v165 + 129) = v168;
        *(_QWORD *)v165 = 0x8F00000000000LL;
        ++*(_WORD *)(v216 + 20);
        if ( (_WORD)v211 == 3 )
        {
          if ( v216 )
            v169 = *(unsigned __int16 *)(v216 + 20);
          else
            v169 = 0LL;
          if ( (_WORD)v169 != 2 )
          {
            v170 = WdLogNewEntry5_WdAssertion(v169, v164, v166, v167);
            *(_QWORD *)(v170 + 24) = 4636LL;
            WdLogEvent5_WdAssertion(v170);
          }
          v171 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v215, v148 == 0, v166, v167);
          v174 = *((_QWORD *)v171 + 19);
          *(_QWORD *)v165 |= 0x20000uLL;
          *((_QWORD *)v165 + 19) = v174;
          *((_DWORD *)v165 + 58) = *((_DWORD *)v171 + 58);
          *(_QWORD *)v165 |= 0x4000000000000uLL;
        }
        else
        {
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v215, v148);
        }
        v217 = 1;
        v218 = 4;
        v175 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v215, 0LL, v172, v173);
        v180 = v175;
        if ( v175 >= 0 )
        {
          v189 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v215, 1LL, v178, v179);
          v192 = v189;
          if ( v189 == -1073741266 )
          {
            v95 = 0;
            v96 = -1073741266;
            v97 = 7;
          }
          else
          {
            if ( v189 >= 0 )
              goto LABEL_59;
            v193 = WdLogNewEntry5_WdError(v191, v190);
            *(_QWORD *)(v193 + 24) = v192;
            *(_QWORD *)(v193 + 32) = v216;
            WdLogEvent5_WdError(v193);
            v196 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v219, 0LL, v194, v195);
            v199 = v196;
            if ( v196 < 0 )
            {
              v200 = WdLogNewEntry5_WdError(v198, v197);
              *(_QWORD *)(v200 + 24) = v199;
              *(_QWORD *)(v200 + 32) = v219;
              WdLogEvent5_WdError(v200);
            }
            v95 = v199;
            v96 = v192;
            v97 = 8;
          }
        }
        else
        {
          v181 = WdLogNewEntry5_WdError(v177, v176);
          *(_QWORD *)(v181 + 24) = v180;
          *(_QWORD *)(v181 + 32) = v216;
          WdLogEvent5_WdError(v181);
          v184 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v219, 0LL, v182, v183);
          v187 = v184;
          if ( v184 < 0 )
          {
            v188 = WdLogNewEntry5_WdError(v186, v185);
            *(_QWORD *)(v188 + 24) = v187;
            *(_QWORD *)(v188 + 32) = v219;
            WdLogEvent5_WdError(v188);
          }
          v95 = v187;
          v96 = v180;
          v97 = 6;
        }
      }
      else
      {
        v140 = WdLogNewEntry5_WdLowResource(v137);
        *(_QWORD *)(v140 + 24) = v135;
        WdLogEvent5_WdLowResource(v140);
        v143 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v219, 0LL, v141, v142);
        v146 = v143;
        if ( v143 < 0 )
        {
          v147 = WdLogNewEntry5_WdError(v145, v144);
          *(_QWORD *)(v147 + 24) = v146;
          *(_QWORD *)(v147 + 32) = v219;
          WdLogEvent5_WdError(v147);
        }
        v96 = v135;
        v95 = v146;
        v97 = 5;
      }
LABEL_58:
      DxgkLogCodePointPacket(0x3Eu, v97, v96, v95, (__int64)*a2);
LABEL_59:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v219);
LABEL_136:
      v81 = a4;
      goto LABEL_137;
    }
LABEL_94:
    v132 = v216;
    goto LABEL_95;
  }
  *(_BYTE *)(a1 + 25) = 0;
  v208[0] = 0;
  MonitorType = QueryMonitorType(a2, a3, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, v208);
  v13 = MonitorType;
  if ( MonitorType >= 0 )
  {
    v15 = v208[0];
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v14[3] = v13;
    v14[4] = a2->HighPart;
    v14[5] = a2->LowPart;
    v14[7] = v6;
    v14[6] = v8;
    WdLogEvent5_WdError(v14);
    v15 = 0;
  }
  if ( v15 )
  {
    v207[1] = 0;
    v16 = DxgkHMDDisplayControlInternal(a2, (unsigned int)v8, 0LL, (char *)&v207[1]);
    v13 = v16;
    if ( v16 < 0 || !v207[1] )
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = v13;
      WdLogEvent5_WdError(v19);
    }
  }
  return (unsigned int)v13;
}
