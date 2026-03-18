/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008D94 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000C388 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0035588 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E4108 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00E4E80 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00F2C70 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C00F3B80 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestTargetMode @ 0x1C00F4168 (BmlGetNextBestTargetMode.c)
 *     BmlGetNextBestSourceMode @ 0x1C00F48C0 (BmlGetNextBestSourceMode.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00F9348 (BmlFillPreferredMonitorMode.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01D2B38 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        struct BML_VIDPN_PATH_ORDER **a1,
        struct DMMVIDPN *a2,
        const struct _D3DKMT_GETPATHSMODALITY *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  struct BML_VIDPN_PATH_ORDER **v6; // r14
  const struct _D3DKMT_GETPATHSMODALITY *v7; // r13
  __int16 v9; // r12
  struct BML_VIDPN_PATH_ORDER *v10; // rax
  struct BML_VIDPN_PATH_ORDER *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  bool v20; // zf
  char v21; // al
  struct BML_VIDPN_PATH_ORDER *v22; // rdx
  unsigned int v23; // esi
  char v24; // cl
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  char *v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct BML_VIDPN_PATH_ORDER *v31; // rbx
  __int64 v32; // rdi
  unsigned __int16 v33; // ax
  char *v34; // rcx
  unsigned int v35; // r12d
  const struct _D3DKMT_GETPATHSMODALITY *v36; // r14
  __int64 v37; // r13
  struct BML_VIDPN_PATH_ORDER *v38; // rax
  unsigned int v39; // ebx
  struct DMMVIDPNTOPOLOGY *v40; // r15
  unsigned int v41; // esi
  __int64 v42; // rcx
  struct BML_VIDPN_PATH_ORDER *v43; // rdi
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r15
  unsigned int v48; // ebx
  struct BML_VIDPN_PATH_ORDER *v49; // rsi
  __int64 v50; // r12
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r15
  _QWORD *v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  _DWORD *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  struct BML_VIDPN_PATH_ORDER *v68; // rcx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rdx
  VIDPN_MGR *v77; // rbx
  int AdapterDefaultScaling; // eax
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r15
  __int64 v80; // rdx
  int v81; // r12d
  __int64 v82; // rdx
  _DWORD *v83; // rcx
  struct BML_VIDPN_PATH_ORDER *v84; // r15
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v89; // ebx
  unsigned int v90; // ebx
  __int64 v91; // r10
  unsigned int v92; // r15d
  struct BML_VIDPN_PATH_ORDER *v93; // rbx
  __int64 v94; // r12
  __int64 v95; // rdx
  __int64 v96; // r9
  struct BML_VIDPN_PATH_ORDER *v97; // rax
  unsigned int v98; // edi
  unsigned int v99; // esi
  __int64 v100; // r8
  __int64 v101; // rcx
  unsigned __int64 v102; // rbx
  unsigned int v103; // r13d
  unsigned int v104; // r12d
  unsigned int v105; // r15d
  struct BML_VIDPN_PATH_ORDER *v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  struct DMMVIDPNPRESENTPATH *v111; // r13
  __int64 v112; // r12
  __int64 v113; // rcx
  struct DMMVIDPNSOURCEMODESET *v114; // r12
  _QWORD *v115; // rcx
  __int64 v116; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // r10
  int v123; // eax
  __int64 v124; // r9
  int v125; // eax
  __int64 v126; // rbx
  __int64 v127; // rax
  struct DMMVIDPNTARGETMODESET *v128; // rbx
  __int64 v129; // rcx
  __int64 v130; // r9
  __int16 v131; // ax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  struct BML_VIDPN_PATH_ORDER *v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rbx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rbx
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  _QWORD *v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  int v183; // r15d
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 *v188; // rbx
  __int64 v189; // rdx
  int v190; // ecx
  int v191; // eax
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  unsigned int v197; // ebx
  __int64 v198; // r15
  __int64 v199; // rax
  int v200; // ebx
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rax
  __int64 v206; // rcx
  unsigned __int64 v207; // rax
  int v208; // r8d
  unsigned int v209; // edx
  int v210; // eax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  _QWORD *v215; // rax
  _QWORD *v216; // rax
  __int64 v217; // r12
  __int64 v218; // rax
  __int64 v219; // rax
  unsigned int v220; // eax
  __int64 v221; // rax
  _QWORD *v222; // rax
  _QWORD *v223; // rax
  __int64 v224; // rdx
  __int64 *v225; // rcx
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  _QWORD *v230; // rax
  __int64 v231; // rcx
  __int64 v232; // rax
  struct BML_VIDPN_PATH_ORDER *v233; // r8
  unsigned int j; // r9d
  __int64 v235; // r10
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // r9
  _QWORD *v240; // rax
  unsigned int v241; // eax
  __int64 v242; // r10
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  _QWORD *v247; // rax
  unsigned int v248; // eax
  __int64 v249; // r10
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  _QWORD *v254; // rax
  char v255; // [rsp+48h] [rbp-69h]
  unsigned int v256; // [rsp+50h] [rbp-61h]
  int v257; // [rsp+58h] [rbp-59h]
  unsigned int i; // [rsp+58h] [rbp-59h]
  VIDPN_MGR *v259; // [rsp+60h] [rbp-51h]
  bool v260; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v261; // [rsp+6Ch] [rbp-45h] BYREF
  unsigned __int64 v262; // [rsp+70h] [rbp-41h]
  DMMVIDPNTOPOLOGY *v263; // [rsp+78h] [rbp-39h]
  unsigned int v264; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v265; // [rsp+84h] [rbp-2Dh] BYREF
  unsigned int v266; // [rsp+88h] [rbp-29h] BYREF
  struct DMMVIDPNSOURCEMODESET *v267; // [rsp+90h] [rbp-21h] BYREF
  __int64 v268; // [rsp+98h] [rbp-19h] BYREF
  struct BML_VIDPN_PATH_ORDER *v269; // [rsp+A0h] [rbp-11h]
  __int64 v270; // [rsp+A8h] [rbp-9h]
  __int64 v271[9]; // [rsp+B0h] [rbp-1h] BYREF
  int v273; // [rsp+108h] [rbp+57h]
  const struct _D3DKMT_GETPATHSMODALITY *v275; // [rsp+118h] [rbp+67h] BYREF
  __int16 v276; // [rsp+120h] [rbp+6Fh]

  v276 = a4;
  v275 = a3;
  v6 = a1;
  v7 = a3;
  v9 = a4;
  v10 = (struct BML_VIDPN_PATH_ORDER *)operator new(
                                         104LL * (*((unsigned __int16 *)a3 + 10) - 1) + 120,
                                         0x63644356u,
                                         PagedPool);
  *v6 = v10;
  if ( !v10 )
  {
    v133 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v133 + 24) = v7;
    *(_QWORD *)(v133 + 32) = *((unsigned __int16 *)v7 + 10);
    WdLogEvent5_WdLowResource(v133);
    return 3221225626LL;
  }
  v15 = (__int64 *)*((_QWORD *)a2 + 6);
  v259 = (VIDPN_MGR *)v15;
  if ( !g_Win32kSupportsPathIndependentRotation )
    goto LABEL_131;
  if ( !v15[1] )
  {
    v134 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v134);
  }
  v11 = (struct BML_VIDPN_PATH_ORDER *)v15[1];
  v12 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 2280LL);
  if ( *(_BYTE *)(v12 + 133) )
  {
    if ( !v11 )
    {
      v135 = WdLogNewEntry5_WdAssertion(v12, 0LL, v13, v14);
      WdLogEvent5_WdAssertion(v135);
    }
    v11 = (struct BML_VIDPN_PATH_ORDER *)v15[1];
    v12 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 2280LL);
    if ( *(_BYTE *)(v12 + 134) )
      goto LABEL_9;
  }
  if ( !v11 )
  {
    v136 = WdLogNewEntry5_WdAssertion(v12, 0LL, v13, v14);
    WdLogEvent5_WdAssertion(v136);
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15[1] + 16) + 192LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL) >= 0x4003u )
LABEL_9:
    v255 = 1;
  else
LABEL_131:
    v255 = 0;
  v16 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v16 + 8) )
  {
    v137 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v137);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL);
  if ( *(_QWORD *)(v17 + 2288) )
  {
    *((_DWORD *)*v6 + 2) &= 0xFFFFFFF2;
  }
  else
  {
    v138 = *((_QWORD *)a2 + 6);
    if ( !*(_QWORD *)(v138 + 8) )
    {
      v139 = WdLogNewEntry5_WdAssertion(v17, v11, v13, v14);
      WdLogEvent5_WdAssertion(v139);
    }
    v140 = *(_QWORD *)(*(_QWORD *)(v138 + 8) + 16LL);
    v141 = *(_QWORD *)(v140 + 2280);
    if ( *(_QWORD *)(*(_QWORD *)(v141 + 16) + 2288LL) )
    {
      v142 = WdLogNewEntry5_WdAssertion(v140, v11, v13, v14);
      *(_QWORD *)(v142 + 24) = 5360LL;
      WdLogEvent5_WdAssertion(v142);
    }
    v143 = (__int64)*v6;
    v144 = (*((_DWORD *)*v6 + 2) ^ *(_DWORD *)(v141 + 248)) & 1;
    *((_DWORD *)*v6 + 2) ^= v144;
    v145 = *((_QWORD *)a2 + 6);
    if ( !*(_QWORD *)(v145 + 8) )
    {
      v146 = WdLogNewEntry5_WdAssertion(v144, v143, v13, v14);
      WdLogEvent5_WdAssertion(v146);
    }
    DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)(v145 + 8) + 16LL) + 2280LL),
                                     v143,
                                     v13,
                                     v14);
    v148 = *v6;
    v149 = DisplayOnlyDriverUseRawModes != 0 ? 4 : 0;
    *((_DWORD *)*v6 + 2) = v149 | *((_DWORD *)*v6 + 2) & 0xFFFFFFFB;
    v150 = *((_QWORD *)a2 + 6);
    if ( !*(_QWORD *)(v150 + 8) )
    {
      v151 = WdLogNewEntry5_WdAssertion(v148, v149, v13, v14);
      WdLogEvent5_WdAssertion(v151);
    }
    v152 = *(_QWORD *)(*(_QWORD *)(v150 + 8) + 16LL);
    v153 = *(_QWORD *)(v152 + 2280);
    if ( *(_QWORD *)(*(_QWORD *)(v153 + 16) + 2288LL) )
    {
      v154 = WdLogNewEntry5_WdAssertion(v152, v149, v13, v14);
      *(_QWORD *)(v154 + 24) = 5372LL;
      WdLogEvent5_WdAssertion(v154);
    }
    v11 = *v6;
    v17 = *((_DWORD *)*v6 + 2) & 0xFFFFFFF7 | (*(_DWORD *)(v153 + 256) != 0 ? 8 : 0);
    *((_DWORD *)*v6 + 2) = v17;
  }
  v18 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v18 + 8) )
  {
    v155 = WdLogNewEntry5_WdAssertion(v17, v11, v13, v14);
    WdLogEvent5_WdAssertion(v155);
  }
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 2280LL);
  if ( !*(_BYTE *)(v19 + 134) || (v20 = *(_BYTE *)(v19 + 133) == 0, v21 = 1, !v20) )
    v21 = 0;
  v22 = *v6;
  v23 = 0;
  v24 = *((_DWORD *)*v6 + 2) & 0xFD | (2 * v21);
  v25 = a6;
  *((_DWORD *)v22 + 2) = v24 & 0xF;
  *(_BYTE *)v22 = 0;
  *((_DWORD *)v22 + 1) = v25;
  v26 = 0x4000000000000LL;
  if ( *((_WORD *)v7 + 10) )
  {
    while ( 1 )
    {
      v27 = 264LL * v23;
      v28 = (char *)v7 + v27 + 48;
      if ( (*(_QWORD *)v28 & 0x4000000000000LL) == 0 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v27, 0x4000000000000LL, v13, v14);
        WdLogEvent5_WdAssertion(v156);
      }
      if ( !v15[1] )
      {
        v157 = WdLogNewEntry5_WdAssertion(v27, v26, v13, v14);
        WdLogEvent5_WdAssertion(v157);
      }
      v26 = v15[1];
      v29 = *(unsigned int *)(*(_QWORD *)(v26 + 16) + 268LL);
      if ( *((_DWORD *)v28 + 4) == (_DWORD)v29 )
      {
        if ( !v26 )
        {
          v158 = WdLogNewEntry5_WdAssertion(v29, 0LL, v13, v14);
          WdLogEvent5_WdAssertion(v158);
        }
        v30 = *(_QWORD *)(v15[1] + 16);
        if ( *((_DWORD *)v28 + 5) == *(_DWORD *)(v30 + 272) )
        {
          if ( (*(_QWORD *)v28 & 0x700000000000LL) != 0x700000000000LL )
          {
            v160 = WdLogNewEntry5_WdError(v30, v26);
            *(_QWORD *)(v160 + 24) = v23;
            *(_QWORD *)(v160 + 32) = v7;
            WdLogEvent5_WdError(v160);
            return 3221225485LL;
          }
          v31 = *v6;
          v32 = 104LL * *(unsigned __int8 *)*v6;
          v33 = a5;
          v34 = (char *)*v6 + v32 + 72;
          *(_QWORD *)((char *)v31 + v32 + 52) = 0LL;
          *(_QWORD *)((char *)v31 + v32 + 16) = v28;
          *(_WORD *)((char *)v31 + v32 + 32) = v23;
          *(_WORD *)((char *)v31 + v32 + 64) = 0;
          *(_WORD *)((char *)v31 + v32 + 68) = 0;
          *(_WORD *)((char *)v31 + v32 + 66) = v9;
          *(_WORD *)((char *)v31 + v32 + 70) = v33;
          *(_DWORD *)((char *)v31 + v32 + 60) = 0;
          *(_DWORD *)((char *)v31 + v32 + 116) = 0;
          memset(v34, 0, 0x24uLL);
          v35 = 0;
          if ( *((_WORD *)v7 + 10) )
          {
            v36 = v275;
            do
            {
              v37 = 264LL * v35;
              if ( (*(_QWORD *)((_BYTE *)v36 + v37 + 48) & 0x4000000000000LL) == 0 )
              {
                v159 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v26, v13, v14);
                WdLogEvent5_WdAssertion(v159);
              }
              if ( v35 != v23 && *(_DWORD *)((char *)v36 + v37 + 280) == *((_DWORD *)v28 + 58) )
                *(_DWORD *)((char *)v31 + v32 + 116) |= 2u;
              ++v35;
            }
            while ( v35 < *((unsigned __int16 *)v36 + 10) );
            v6 = a1;
            v7 = v275;
          }
          v9 = v276;
          v15 = (__int64 *)v259;
          ++*(_BYTE *)*v6;
        }
      }
      if ( ++v23 >= *((unsigned __int16 *)v7 + 10) )
        break;
      v26 = 0x4000000000000LL;
    }
  }
  v38 = *v6;
  v39 = 0;
  v40 = (struct DMMVIDPN *)((char *)a2 + 96);
  v263 = (struct DMMVIDPN *)((char *)a2 + 96);
  if ( *(_BYTE *)v38 )
  {
    do
    {
      v41 = v39 + 1;
      v42 = v39 + 1;
      if ( (int)(v39 + 1) > 32 )
      {
        v161 = WdLogNewEntry5_WdAssertion(v42, v26, v13, v14);
        *(_QWORD *)(v161 + 24) = *v6;
        *(_QWORD *)(v161 + 32) = v39;
        WdLogEvent5_WdAssertion(v161);
        LODWORD(v42) = 32;
      }
      v43 = *v6;
      v44 = 104LL * v39;
      v45 = VIDPN_MGR::AddPathToVidPnTopology(
              v259,
              v40,
              *(unsigned int *)(*(_QWORD *)((char *)*v6 + v44 + 16) + 24LL),
              *(unsigned int *)(*(_QWORD *)((char *)*v6 + v44 + 16) + 28LL),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v42,
              *(_WORD *)((char *)*v6 + v44 + 32),
              1u,
              D3DKMDT_MCC_ENFORCE);
      v47 = v45;
      if ( v45 < 0 )
      {
        v162 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v26, v13, v14);
        v162[3] = *(unsigned int *)(*(_QWORD *)((char *)v43 + v44 + 16) + 24LL);
        v163 = *(unsigned int *)(*(_QWORD *)((char *)v43 + v44 + 16) + 28LL);
        v162[5] = v263;
        v162[4] = v163;
        v162[6] = v47;
        return (unsigned int)v47;
      }
      v39 = v41;
      v40 = v263;
    }
    while ( v41 < *(unsigned __int8 *)*v6 );
  }
  v48 = 0;
  v256 = 0;
  if ( *(_BYTE *)*v6 )
  {
    while ( 1 )
    {
      v49 = *v6;
      v50 = v48;
      v51 = 104LL * v48;
      v52 = **(_QWORD **)((char *)*v6 + v51 + 16);
      if ( (v52 & 0x4000000000000LL) == 0 )
      {
        v164 = WdLogNewEntry5_WdAssertion(v52, v26, v13, v14);
        WdLogEvent5_WdAssertion(v164);
      }
      v53 = *(_QWORD *)((char *)v49 + v51 + 16);
      Path = DMMVIDPNTOPOLOGY::FindPath(v40, *(_DWORD *)(v53 + 24), *(_DWORD *)(v53 + 28));
      if ( *(_BYTE *)(v53 + 129) )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v55, v54, v56, v57);
        v59[3] = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 24LL);
        v59[4] = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 28LL);
        v59[5] = *(int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 20LL);
        v59[6] = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 16LL);
        v62 = 131328LL;
        v63 = *(_DWORD **)((char *)v49 + v51 + 16);
        if ( (*v63 & 0x20100LL) == 0x20100 )
        {
          if ( v63[29] != 21 )
          {
            v165 = WdLogNewEntry5_WdAssertion(v63, 131328LL, v60, v61);
            *(_QWORD *)(v165 + 24) = 3856LL;
            WdLogEvent5_WdAssertion(v165);
          }
          if ( *(_BYTE *)(*(_QWORD *)((char *)v49 + v51 + 16) + 128LL) )
          {
            v166 = WdLogNewEntry5_WdAssertion(0LL, v62, v60, v61);
            *(_QWORD *)(v166 + 24) = 3857LL;
            WdLogEvent5_WdAssertion(v166);
          }
        }
        v64 = *(_QWORD *)((char *)v49 + v51 + 16);
        if ( (*(_QWORD *)v64 & 0x20000LL) == 0
          && (((unsigned __int8)~BYTE1(*(_QWORD *)v64) ^ (unsigned __int8)~(*(_DWORD *)(v64 + 8) >> 8)) & 1) != 0 )
        {
          v167 = WdLogNewEntry5_WdAssertion((unsigned int)~(*(_QWORD *)v64 >> 8), v62, v60, v61);
          *(_QWORD *)(v167 + 24) = 3871LL;
          WdLogEvent5_WdAssertion(v167);
        }
      }
      v65 = *((_QWORD *)Path + 11);
      v66 = *(_QWORD *)(v65 + 104);
      if ( v66 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v66 + 96));
        v67 = *(_QWORD *)(v65 + 104);
      }
      else
      {
        v67 = 0LL;
      }
      v68 = *v6;
      v268 = v67;
      v69 = BmlFillPreferredMonitorMode(v68, v256, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v74 = v69;
      if ( v69 < 0 )
      {
        v223 = (_QWORD *)WdLogNewEntry5_WdTrace(v71, v70, v72, v73);
        v223[3] = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 24LL);
        v224 = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 28LL);
        v223[5] = v263;
        v223[4] = v224;
        v223[6] = v74;
        *(_QWORD *)((char *)*v6 + 104 * v256 + 52) = 0LL;
        goto LABEL_226;
      }
      v75 = *(_QWORD *)((char *)v49 + v51 + 16);
      v76 = 0x40000000000LL;
      if ( (*(_QWORD *)v75 & 0x40000000000LL) != 0 )
      {
        AdapterDefaultScaling = *(_DWORD *)(v75 + 136);
        LODWORD(PathFromTargetInClientVidPn) = 0;
        if ( AdapterDefaultScaling <= 0 )
          goto LABEL_157;
        if ( AdapterDefaultScaling > 5 )
        {
          if ( AdapterDefaultScaling == 253 )
          {
            v77 = v259;
          }
          else
          {
            if ( AdapterDefaultScaling != 255 )
            {
LABEL_157:
              v77 = v259;
              *(_DWORD *)((char *)v49 + v51 + 24) = VIDPN_MGR::GetAdapterDefaultScaling(v259, 0x40000000000LL, v72, v73);
              v173 = (_QWORD *)WdLogNewEntry5_WdWarning(v170, v169, v171, v172);
              v173[3] = *(int *)((char *)v49 + v51 + 24);
              v173[4] = *v6;
              v173[5] = v50;
              v173[6] = *(int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 136LL);
              WdLogEvent5_WdWarning(v173);
              goto LABEL_57;
            }
            v77 = v259;
            if ( !*((_QWORD *)v259 + 1) )
            {
              v168 = WdLogNewEntry5_WdAssertion(v75, 0x40000000000LL, v72, v73);
              WdLogEvent5_WdAssertion(v168);
            }
            if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v259 + 1) + 16LL)) < 1105 )
            {
              *(_DWORD *)((char *)v49 + v51 + 24) = 255;
              goto LABEL_57;
            }
          }
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v77, v76, v72, v73);
        }
        else
        {
          v77 = v259;
        }
      }
      else
      {
        v77 = v259;
        AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v259, 0x40000000000LL, v72, v73);
        LODWORD(PathFromTargetInClientVidPn) = 0;
      }
      *(_DWORD *)((char *)v49 + v51 + 24) = AdapterDefaultScaling;
LABEL_57:
      v80 = *(_QWORD *)((char *)v49 + v51 + 16);
      v81 = 0;
      v257 = 0;
      if ( (*(_QWORD *)v80 & 0x800000000000LL) == 0
        || !IsInternalVideoOutput(*(_DWORD *)(v80 + 88))
        || (*(_DWORD *)(v82 + 8) & 0x200LL) != 0 )
      {
        goto LABEL_59;
      }
      PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v77, *(_DWORD *)(v82 + 28));
      v74 = *((_QWORD *)a2 + 6);
      if ( !*(_QWORD *)(v74 + 8) )
      {
        v178 = WdLogNewEntry5_WdAssertion(v175, v174, v176, v177);
        WdLogEvent5_WdAssertion(v178);
      }
      LODWORD(v74) = IsVirtualizationDisabledForTarget(
                       *(_QWORD *)(*(_QWORD *)(v74 + 8) + 16LL),
                       *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 28LL),
                       (bool *)&v275,
                       &v260);
      if ( (int)v74 < 0 )
      {
        v222 = (_QWORD *)WdLogNewEntry5_WdError(v180, v179);
        v222[3] = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 28LL);
        v222[4] = *(int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 20LL);
        v222[5] = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 16LL);
        WdLogEvent5_WdError(v222);
LABEL_226:
        v225 = &v268;
        goto LABEL_229;
      }
      if ( PathFromTargetInClientVidPn && !(_BYTE)v275 )
      {
        v183 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
LABEL_169:
        if ( v183 )
        {
          v188 = *(__int64 **)((char *)v49 + v51 + 16);
          v189 = *v188;
          if ( (*v188 & 0x200) != 0 )
          {
            if ( (((unsigned __int8)v183 ^ *((_BYTE *)v188 + 132)) & 1) != 0 && (v189 & 0x20000) != 0 )
            {
              v190 = *((_DWORD *)v188 + 38);
              v191 = *((_DWORD *)v188 + 39);
              *v188 &= ~0x800000uLL;
              *((_DWORD *)v188 + 38) = v191;
              *((_DWORD *)v188 + 39) = v190;
            }
          }
          else if ( (v189 & 0x20000) != 0 )
          {
            v192 = WdLogNewEntry5_WdAssertion(v180, v189, v181, v182);
            WdLogEvent5_WdAssertion(v192);
          }
          *v188 |= 0x200uLL;
          v81 = 1;
          *((_DWORD *)v188 + 33) = v183;
          v257 = 1;
          *(_DWORD *)((char *)v49 + v51 + 28) = v183;
        }
        LODWORD(PathFromTargetInClientVidPn) = 0;
        goto LABEL_59;
      }
      if ( g_IsMobileCore )
      {
        LODWORD(PathFromTargetInClientVidPn) = 0;
        goto LABEL_178;
      }
      if ( PathFromTargetInClientVidPn )
      {
        LOWORD(PathFromTargetInClientVidPn) = 0;
        goto LABEL_61;
      }
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v180, v179, v181, v182) + 202) )
      {
        v183 = *((_DWORD *)DXGGLOBAL::GetGlobal(v185, v184, v186, v187) + 202);
        goto LABEL_169;
      }
LABEL_59:
      if ( g_IsMobileCore == (_BYTE)PathFromTargetInClientVidPn )
        goto LABEL_60;
LABEL_178:
      if ( !IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)((char *)v49 + v51 + 16) + 88LL))
        && (*(_DWORD *)(v193 + 8) & 0x200LL) == 0 )
      {
        v197 = (unsigned int)PathFromTargetInClientVidPn;
        if ( (unsigned __int16)PathFromTargetInClientVidPn < *((_WORD *)v7 + 10) )
        {
          do
          {
            v198 = 264LL * v197;
            if ( (*(_QWORD *)((_BYTE *)v7 + v198 + 48) & 0x4000000000000LL) == 0 )
            {
              v199 = WdLogNewEntry5_WdAssertion(v194, v193, v195, v196);
              WdLogEvent5_WdAssertion(v199);
            }
            v194 = *(unsigned int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 232LL);
            if ( *(_DWORD *)((char *)v7 + v198 + 280) == (_DWORD)v194
              && IsInternalVideoOutput(*(_DWORD *)((char *)v7 + v198 + 136)) )
            {
              break;
            }
            ++v197;
          }
          while ( v197 < *((unsigned __int16 *)v7 + 10) );
          v6 = a1;
          LOWORD(PathFromTargetInClientVidPn) = 0;
          v81 = v257;
        }
        if ( v197 < *((unsigned __int16 *)v7 + 10) )
        {
          v81 = 1;
          v200 = 1;
          v202 = *((unsigned int *)DXGGLOBAL::GetGlobal(v194, v193, v195, v196) + 202);
          if ( (int)v202 >= 0 )
          {
            if ( (int)v202 <= 1 )
            {
LABEL_197:
              v206 = *(_QWORD *)((char *)v49 + v51 + 16);
              v207 = *(_QWORD *)v206 & 0xFFFFFFFFFF7FFFFFuLL;
              *(_DWORD *)(v206 + 132) = v200;
              *(_QWORD *)v206 = v207 | 0x200;
              *(_DWORD *)((char *)v49 + v51 + 28) = v200;
              goto LABEL_60;
            }
            switch ( (_DWORD)v202 )
            {
              case 2:
                v200 = 4;
                goto LABEL_197;
              case 3:
                v200 = 3;
                goto LABEL_197;
              case 4:
                v200 = 2;
                goto LABEL_197;
            }
          }
          v205 = WdLogNewEntry5_WdAssertion(v202, v201, v203, v204);
          WdLogEvent5_WdAssertion(v205);
          goto LABEL_197;
        }
      }
LABEL_60:
      if ( v81 )
        goto LABEL_67;
LABEL_61:
      v83 = *(_DWORD **)((char *)v49 + v51 + 16);
      if ( (*v83 & 0x200LL) == 0 )
      {
        v84 = *v6;
        if ( !(unsigned __int8)BmlIsSecondaryClonePath(*v6, v256, &v266) )
        {
          v89 = D3DKMDT_VPPR_IDENTITY;
          goto LABEL_64;
        }
        v217 = 104LL * v266;
        v89 = *(_DWORD *)((char *)v84 + v217 + 28);
        if ( v89 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v218 = WdLogNewEntry5_WdAssertion(v86, v85, v87, v88);
          WdLogEvent5_WdAssertion(v218);
        }
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v89) != D3DKMDT_VPPR_IDENTITY )
        {
          v219 = WdLogNewEntry5_WdAssertion(v86, v85, v87, v88);
          WdLogEvent5_WdAssertion(v219);
        }
        if ( !v255 )
          goto LABEL_64;
        v85 = *(unsigned int *)((char *)v84 + v51 + 52);
        v87 = *(unsigned int *)((char *)v84 + v51 + 56);
        LOBYTE(v86) = *(_DWORD *)((char *)v84 + v217 + 52) < *(_DWORD *)((char *)v84 + v217 + 56);
        if ( (_BYTE)v86 == (unsigned int)v85 < (unsigned int)v87 )
          goto LABEL_64;
        v220 = v89 - 1;
        if ( (unsigned int)v85 >= (unsigned int)v87 )
        {
          if ( v220 > 3 )
            goto LABEL_221;
          v89 += 4;
        }
        else
        {
          if ( v220 <= 3 )
          {
            v89 += 12;
            goto LABEL_64;
          }
LABEL_221:
          v89 = D3DKMDT_VPPR_NOTSPECIFIED;
        }
LABEL_64:
        LOWORD(PathFromTargetInClientVidPn) = 0;
        if ( v89 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v221 = WdLogNewEntry5_WdAssertion(v86, v85, v87, v88);
          WdLogEvent5_WdAssertion(v221);
        }
        goto LABEL_66;
      }
      v89 = v83[33];
      if ( (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION(v89) - 1) > 3 )
        goto LABEL_209;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v89) == D3DKMDT_VPPR_IDENTITY )
      {
        if ( v255 != (_BYTE)PathFromTargetInClientVidPn && (unsigned __int8)BmlIsSecondaryClonePath(*v6, v256, &v265) )
        {
          v208 = *(_DWORD *)(*((_QWORD *)*v6 + 13 * v265 + 2) + 132LL);
          if ( (unsigned int)(v208 - 1) > 0xF
            || (unsigned int)(v89 - 1) > 0xF
            || (v209 = (v89 - v208 + 4) % 4, v208 > 4)
            || (v210 = v208 + 4 * v209, v209 > 3) )
          {
            v210 = 255;
          }
          *(_DWORD *)((char *)v49 + v51 + 28) = v210;
          goto LABEL_67;
        }
LABEL_66:
        *(_DWORD *)((char *)v49 + v51 + 28) = v89;
LABEL_67:
        v90 = v256;
        goto LABEL_68;
      }
      if ( v255 == (_BYTE)PathFromTargetInClientVidPn )
      {
LABEL_209:
        v216 = (_QWORD *)WdLogNewEntry5_WdWarning(v119, v118, v120, v121);
        v90 = v256;
        v216[3] = *v6;
        v216[4] = v256;
        v216[5] = *(int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 132LL);
        WdLogEvent5_WdWarning(v216);
        *(_DWORD *)((char *)v49 + v51 + 28) = 1;
        goto LABEL_68;
      }
      v90 = v256;
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*v6, v256, 0LL) )
      {
        *(_DWORD *)((char *)v49 + v51 + 28) = *(_DWORD *)(*(_QWORD *)((char *)v49 + v51 + 16) + 132LL);
      }
      else
      {
        v215 = (_QWORD *)WdLogNewEntry5_WdAssertion(v212, v211, v213, v214);
        v215[3] = *v6;
        v215[4] = v256;
        v215[5] = *(int *)(*(_QWORD *)((char *)v49 + v51 + 16) + 132LL);
        WdLogEvent5_WdAssertion(v215);
        *(_DWORD *)((char *)v49 + v51 + 28) = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)((char *)v49 + v51 + 16) + 132LL));
      }
LABEL_68:
      v91 = *(_QWORD *)((char *)v49 + v51 + 16);
      if ( *(_BYTE *)(v91 + 129) != (_BYTE)PathFromTargetInClientVidPn && (*(_DWORD *)v91 & 0x20000) != 0 )
      {
        if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)((char *)v49 + v51 + 28)) - 2) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)((char *)v49 + v51 + 108) = *(_DWORD *)(v122 + 152);
          v123 = *(_DWORD *)(v122 + 156);
        }
        else
        {
          *(_DWORD *)((char *)v49 + v51 + 108) = *(_DWORD *)(v122 + 156);
          v123 = *(_DWORD *)(v122 + 152);
        }
        *(_DWORD *)((char *)v49 + v51 + 116) |= 1u;
        *(_DWORD *)((char *)v49 + v51 + 112) = v123;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*v6, v90, 0LL) )
        *(_WORD *)((char *)v49 + v51 + 66) = (_WORD)PathFromTargetInClientVidPn;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v268, 0LL);
      v48 = v90 + 1;
      v256 = v48;
      if ( v48 >= *(unsigned __int8 *)*v6 )
        break;
      v40 = v263;
    }
  }
  v92 = 0;
  for ( i = 0; v92 < *(unsigned __int8 *)*v6; i = ++v92 )
  {
    v93 = *v6;
    v94 = 104LL * v92;
    v269 = *v6;
    v270 = v94;
    if ( !(unsigned __int8)BmlIsSecondaryClonePath(v269, v92, 0LL) )
    {
      v97 = *v6;
      v98 = 0;
      v262 = 0LL;
      v99 = 0;
      v100 = v92;
      v273 = v92;
      if ( v92 < *(unsigned __int8 *)v97 )
      {
        do
        {
          v96 = (__int64)*v6;
          v95 = 104LL * (unsigned int)v100;
          v101 = *(_QWORD *)((char *)*v6 + v95 + 16);
          if ( *(_DWORD *)(v101 + 24) == *(_DWORD *)(*(_QWORD *)((char *)v93 + v94 + 16) + 24LL) )
          {
            v102 = *(_QWORD *)(v95 + v96 + 44);
            if ( v255
              && ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v95 + v96 + 28)) - 2) & 0xFFFFFFFD) == 0 )
            {
              v103 = v102;
              v104 = HIDWORD(v102);
              v102 = __PAIR64__(v102, HIDWORD(v102));
            }
            else
            {
              v103 = HIDWORD(v102);
              v104 = v102;
            }
            if ( !v104 || !v103 )
            {
              v132 = WdLogNewEntry5_WdAssertion(v101, v95, v100, v96);
              WdLogEvent5_WdAssertion(v132);
              LODWORD(v100) = v273;
            }
            if ( v98 && v99 )
            {
              if ( v98 > v104 )
                v98 = v104;
              LODWORD(v262) = v98;
              if ( v99 > v103 )
                v99 = v103;
              HIDWORD(v262) = v99;
            }
            else
            {
              v262 = v102;
              v98 = v102;
              v99 = HIDWORD(v102);
            }
            v94 = v270;
            v93 = v269;
          }
          v100 = (unsigned int)(v100 + 1);
          v273 = v100;
        }
        while ( (unsigned int)v100 < *(unsigned __int8 *)*v6 );
        v92 = i;
      }
      *(_QWORD *)((char *)v93 + v94 + 36) = v262;
      *(_DWORD *)((char *)v93 + v94 + 60) = BmlGetScaledAspectRatio(
                                              (const struct _D3DKMDT_2DREGION *)((char *)v93 + v94 + 52),
                                              v95,
                                              v100,
                                              v96);
    }
  }
  v105 = 0;
  if ( !*(_BYTE *)*v6 )
    return 0LL;
  while ( 1 )
  {
    v106 = *v6;
    v107 = 104LL * v105;
    v111 = DMMVIDPNTOPOLOGY::FindPath(
             v263,
             *(_DWORD *)(*(_QWORD *)((char *)*v6 + v107 + 16) + 24LL),
             *(_DWORD *)(*(_QWORD *)((char *)*v6 + v107 + 16) + 28LL));
    v112 = *((_QWORD *)v111 + 11);
    v113 = *(_QWORD *)(v112 + 104);
    if ( v113 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v113 + 96));
      v114 = *(struct DMMVIDPNSOURCEMODESET **)(v112 + 104);
    }
    else
    {
      v114 = 0LL;
    }
    v115 = *(_QWORD **)((char *)v106 + v107 + 16);
    v267 = v114;
    v116 = v115[1];
    if ( (v116 & 0x820987) == 0 )
      goto LABEL_94;
    if ( (*v115 & v116 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*v6, v105, 0LL) )
    {
      v232 = WdLogNewEntry5_WdWarning(v115, v108, v109, v110);
      *(_QWORD *)(v232 + 24) = *v6;
      *(_QWORD *)(v232 + 32) = v105;
      WdLogEvent5_WdWarning(v232);
      goto LABEL_94;
    }
    v261 = -1;
    if ( (int)BmlGetNextBestSourceMode((int)*v6, -1, (__int64)&v261) >= 0 )
      break;
    v231 = *(_QWORD *)((char *)v106 + v107 + 16);
    if ( (*(_QWORD *)v231 & 0x40000000000000LL) == 0 )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v231 + 96),
        *(_DWORD *)(v231 + 100),
        *(_DWORD *)(v231 + 116),
        *(_QWORD *)(v231 + 16));
      v240 = (_QWORD *)WdLogNewEntry5_WdWarning(v237, v236, v238, v239);
      v240[3] = *v6;
      v240[5] = v105;
      v240[6] = v261;
      v240[4] = a2;
      WdLogEvent5_WdWarning(v240);
      LODWORD(v74) = -1071774970;
      goto LABEL_228;
    }
    *(_QWORD *)(v231 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_95:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v267, 0LL);
    if ( ++v105 >= *(unsigned __int8 *)*v6 )
      return 0LL;
  }
  LOBYTE(v124) = 1;
  v125 = VIDPN_MGR::PinVidPnSourceMode(v259, v114, v261, v124);
  v74 = v125;
  if ( v125 < 0 )
  {
    DxgkLogCodePointPacket(
      0x15u,
      *(_DWORD *)(*(_QWORD *)((char *)v106 + v107 + 16) + 96LL),
      *(_DWORD *)(*(_QWORD *)((char *)v106 + v107 + 16) + 100LL),
      *(_DWORD *)(*(_QWORD *)((char *)v106 + v107 + 16) + 116LL),
      *(_QWORD *)(*(_QWORD *)((char *)v106 + v107 + 16) + 16LL));
    v230 = (_QWORD *)WdLogNewEntry5_WdWarning(v227, v226, v228, v229);
    v230[4] = *v6;
    v230[5] = a2;
    v230[6] = v105;
    v230[3] = v74;
    WdLogEvent5_WdWarning(v230);
    goto LABEL_228;
  }
  *(_WORD *)((char *)v106 + v107 + 66) = 0;
  v126 = *((_QWORD *)v111 + 12);
  v127 = *(_QWORD *)(v126 + 104);
  if ( v127 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v127 + 96));
    v128 = *(struct DMMVIDPNTARGETMODESET **)(v126 + 104);
  }
  else
  {
    v128 = 0LL;
  }
  v129 = *(_QWORD *)((char *)v106 + v107 + 16);
  v271[0] = (__int64)v128;
  if ( (*(_BYTE *)v129 & 0x87) != 0x87
    || (*(_BYTE *)(v129 + 8) & 0x87) != 0x87
    || !*(_DWORD *)(v129 + 56)
    || !*(_DWORD *)(v129 + 52) )
  {
    v131 = -1;
    goto LABEL_124;
  }
  v264 = -1;
  if ( (int)BmlGetNextBestTargetMode(*v6, a2, (unsigned __int16)v105, v128, v114, -1, &v264) >= 0 )
  {
    LOBYTE(v130) = 1;
    v74 = (int)VIDPN_MGR::PinVidPnTargetMode(v259, v128, v264, v130);
    v131 = 0;
    if ( (int)v74 < 0 )
    {
      v241 = DMMVIDEOSIGNALMODE::DivideAndRound(
               *(unsigned int *)(*(_QWORD *)((char *)v106 + v107 + 16) + 52LL),
               *(unsigned int *)(*(_QWORD *)((char *)v106 + v107 + 16) + 56LL));
      DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v242 + 44), *(_DWORD *)(v242 + 48), v241, *(_QWORD *)(v242 + 16));
      v247 = (_QWORD *)WdLogNewEntry5_WdWarning(v244, v243, v245, v246);
      v247[4] = *v6;
      v247[6] = v105;
      v247[3] = v74;
      v247[5] = a2;
      WdLogEvent5_WdWarning(v247);
      goto LABEL_249;
    }
LABEL_124:
    *(_WORD *)((char *)v106 + v107 + 70) = v131;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v271, 0LL);
LABEL_94:
    if ( DMMVIDPNPRESENTPATH::IsFunctional(v111) )
    {
      v233 = *v6;
      for ( j = 0; j < *(unsigned __int8 *)v233; ++j )
      {
        v235 = 104LL * j;
        if ( *(_DWORD *)(*(_QWORD *)((char *)v233 + v235 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v106
                                                                                                + v107
                                                                                                + 16)
                                                                                    + 24LL) )
          *(_WORD *)((char *)v233 + v235 + 66) = 0;
      }
      *(_WORD *)((char *)v106 + v107 + 70) = 0;
    }
    goto LABEL_95;
  }
  v248 = DMMVIDEOSIGNALMODE::DivideAndRound(
           *(unsigned int *)(*(_QWORD *)((char *)v106 + v107 + 16) + 52LL),
           *(unsigned int *)(*(_QWORD *)((char *)v106 + v107 + 16) + 56LL));
  DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v249 + 44), *(_DWORD *)(v249 + 48), v248, *(_QWORD *)(v249 + 16));
  v254 = (_QWORD *)WdLogNewEntry5_WdWarning(v251, v250, v252, v253);
  v254[3] = *v6;
  v254[5] = v105;
  v254[4] = a2;
  WdLogEvent5_WdWarning(v254);
  LODWORD(v74) = -1071774970;
LABEL_249:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v271, 0LL);
LABEL_228:
  v225 = (__int64 *)&v267;
LABEL_229:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v225, 0LL);
  return (unsigned int)v74;
}
