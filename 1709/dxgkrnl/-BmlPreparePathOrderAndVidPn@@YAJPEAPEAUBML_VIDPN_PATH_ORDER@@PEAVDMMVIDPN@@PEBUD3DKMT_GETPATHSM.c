/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D1DD8 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C01F8B44 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0002128 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005ED8 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0007BAC (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000A214 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00A7ED8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00A7FC0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00A8B1C (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00D2A38 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C00D4260 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestTargetMode @ 0x1C00D4540 (BmlGetNextBestTargetMode.c)
 *     BmlGetNextBestSourceMode @ 0x1C00D4AB4 (BmlGetNextBestSourceMode.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00D7574 (BmlFillPreferredMonitorMode.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01EE660 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        struct BML_VIDPN_PATH_ORDER **a1,
        struct DMMVIDPN *a2,
        const struct D3DKMT_GETPATHSMODALITY *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  struct BML_VIDPN_PATH_ORDER **v6; // r15
  const struct D3DKMT_GETPATHSMODALITY *v7; // r13
  __int16 v9; // r12
  struct BML_VIDPN_PATH_ORDER *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r14d
  VIDPN_MGR *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct BML_VIDPN_PATH_ORDER *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  char v20; // dl
  struct BML_VIDPN_PATH_ORDER *v21; // rcx
  unsigned int v22; // esi
  __int64 v23; // rcx
  char *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct BML_VIDPN_PATH_ORDER *v28; // rbx
  __int64 v29; // rdi
  char *v30; // rcx
  unsigned int v31; // r12d
  __int64 v32; // r13
  struct BML_VIDPN_PATH_ORDER *v33; // rax
  unsigned int v34; // ebx
  struct DMMVIDPNTOPOLOGY *v35; // r12
  unsigned int v36; // r14d
  __int64 v37; // rcx
  struct BML_VIDPN_PATH_ORDER *v38; // rdi
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  unsigned int v44; // r13d
  struct BML_VIDPN_PATH_ORDER *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v52; // rax
  _DWORD *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  struct BML_VIDPN_PATH_ORDER *v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rcx
  VIDPN_MGR *v64; // rbx
  int AdapterDefaultScaling; // eax
  __int64 v66; // rdx
  int v67; // r12d
  __int64 v68; // rdx
  _DWORD *v69; // rcx
  struct BML_VIDPN_PATH_ORDER *v70; // r14
  unsigned int v71; // r13d
  __int64 v72; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v73; // ebx
  __int64 v74; // r10
  struct BML_VIDPN_PATH_ORDER *v75; // rbx
  __int64 v76; // r12
  unsigned int v77; // edi
  unsigned int v78; // esi
  unsigned int v79; // r8d
  struct BML_VIDPN_PATH_ORDER *v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 v83; // rbx
  unsigned int v84; // r13d
  unsigned int v85; // r12d
  unsigned int v86; // r14d
  struct BML_VIDPN_PATH_ORDER *v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // r8
  struct DMMVIDPNPRESENTPATH *v91; // r13
  __int64 v92; // r12
  __int64 v93; // rcx
  struct DMMVIDPNSOURCEMODESET *v94; // r12
  _QWORD *v95; // rcx
  __int64 v96; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v98; // ebx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r10
  int v103; // eax
  __int64 v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // rcx
  __int64 v108; // rbx
  int DisplayOnlyDriverUseRawModes; // eax
  struct BML_VIDPN_PATH_ORDER *v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rcx
  __int64 v113; // rbx
  bool v114; // al
  int v115; // edx
  int v116; // eax
  __int64 v117; // rbx
  __int64 v118; // rax
  struct DMMVIDPNTARGETMODESET *v119; // rbx
  __int64 v120; // rcx
  __int16 v121; // ax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  _QWORD *v149; // rax
  __int64 v150; // rcx
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r13
  __int64 v152; // rbx
  __int64 v153; // rax
  __int64 v154; // rcx
  DXGADAPTER *v155; // rbx
  __int64 v156; // r14
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // r12
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  struct _FAST_MUTEX *v163; // rcx
  __int64 v164; // rax
  int MonitorInstance; // eax
  __int64 v166; // rax
  struct DXGMONITOR *v167; // r14
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  int v171; // r14d
  __int64 v172; // rcx
  __int64 *v173; // rbx
  __int64 v174; // rdx
  int v175; // ecx
  int v176; // eax
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  unsigned int v180; // ebx
  __int64 v181; // r14
  __int64 v182; // rax
  int v183; // ebx
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // rcx
  unsigned __int64 v187; // rax
  int v188; // r8d
  unsigned int v189; // edx
  int v190; // eax
  __int64 v191; // rcx
  _QWORD *v192; // rax
  _QWORD *v193; // rax
  __int64 v194; // r12
  __int64 v195; // rax
  __int64 v196; // rax
  unsigned int v197; // edx
  unsigned int v198; // r8d
  unsigned int v199; // eax
  __int64 v200; // rax
  __int64 v201; // rax
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  __int64 v204; // rdx
  __int64 *v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  _QWORD *v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rax
  struct BML_VIDPN_PATH_ORDER *v212; // r8
  unsigned int j; // r9d
  __int64 v214; // r10
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  _QWORD *v218; // rax
  unsigned int v219; // eax
  __int64 v220; // r10
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  _QWORD *v224; // rax
  unsigned int v225; // eax
  __int64 v226; // r10
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  _QWORD *v230; // rax
  char v231; // [rsp+48h] [rbp-69h]
  unsigned __int8 IsVirtualModeSuportDisabled; // [rsp+49h] [rbp-68h]
  bool v233; // [rsp+4Ah] [rbp-67h]
  unsigned int i; // [rsp+50h] [rbp-61h]
  unsigned __int64 v235; // [rsp+50h] [rbp-61h]
  int v236; // [rsp+58h] [rbp-59h]
  VIDPN_MGR *v237; // [rsp+60h] [rbp-51h]
  unsigned int v238; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v239; // [rsp+6Ch] [rbp-45h] BYREF
  unsigned int v240; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v241; // [rsp+74h] [rbp-3Dh] BYREF
  DMMVIDPNTOPOLOGY *v242; // [rsp+78h] [rbp-39h]
  struct DMMVIDPNSOURCEMODESET *v243; // [rsp+80h] [rbp-31h] BYREF
  struct DXGMONITOR *v244; // [rsp+88h] [rbp-29h] BYREF
  __int64 v245; // [rsp+90h] [rbp-21h] BYREF
  struct BML_VIDPN_PATH_ORDER *v246; // [rsp+98h] [rbp-19h]
  __int64 v247; // [rsp+A0h] [rbp-11h]
  __int64 v248[10]; // [rsp+A8h] [rbp-9h] BYREF
  unsigned int v250; // [rsp+108h] [rbp+57h]
  unsigned int v253; // [rsp+118h] [rbp+67h]

  v6 = a1;
  v7 = a3;
  v9 = a4;
  v10 = (struct BML_VIDPN_PATH_ORDER *)operator new(104LL * *((unsigned __int16 *)a3 + 10) + 16, 0x63644356u, PagedPool);
  v12 = 0;
  *v6 = v10;
  if ( !v10 )
  {
    v123 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v123 + 24) = v7;
    *(_QWORD *)(v123 + 32) = *((unsigned __int16 *)v7 + 10);
    WdLogEvent5_WdLowResource(v123);
    return 3221225626LL;
  }
  v13 = (VIDPN_MGR *)*((_QWORD *)a2 + 6);
  v237 = v13;
  if ( !*((_QWORD *)v13 + 1) )
  {
    v124 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v124);
  }
  v14 = *((_QWORD *)v13 + 1);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 2304LL);
  if ( *(_BYTE *)(v15 + 132) )
  {
    if ( !v14 )
    {
      v125 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v125);
    }
    v14 = *((_QWORD *)v13 + 1);
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 2304LL);
    if ( *(_BYTE *)(v15 + 133) )
      goto LABEL_8;
  }
  if ( !v14 )
  {
    v126 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v126);
  }
  v231 = 0;
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 192LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(v15 + 40) + 28LL) >= 0x4003u )
LABEL_8:
    v231 = 1;
  v16 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v16 + 8) )
  {
    v127 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v127);
  }
  v17 = *(struct BML_VIDPN_PATH_ORDER **)(*(_QWORD *)(v16 + 8) + 16LL);
  if ( *((_QWORD *)v17 + 289) )
  {
    *((_DWORD *)*v6 + 2) &= 0xFFFFFFF2;
  }
  else
  {
    v104 = *((_QWORD *)a2 + 6);
    if ( !*(_QWORD *)(v104 + 8) )
    {
      v128 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v128);
    }
    v105 = *(_QWORD *)(*(_QWORD *)(v104 + 8) + 16LL);
    v106 = *(_QWORD *)(v105 + 2304);
    if ( *(_QWORD *)(*(_QWORD *)(v106 + 16) + 2312LL) )
    {
      v129 = WdLogNewEntry5_WdAssertion(v105);
      *(_QWORD *)(v129 + 24) = 5562LL;
      WdLogEvent5_WdAssertion(v129);
    }
    v107 = (*((_DWORD *)*v6 + 2) ^ *(_DWORD *)(v106 + 248)) & 1;
    *((_DWORD *)*v6 + 2) ^= v107;
    v108 = *((_QWORD *)a2 + 6);
    if ( !*(_QWORD *)(v108 + 8) )
    {
      v130 = WdLogNewEntry5_WdAssertion(v107);
      WdLogEvent5_WdAssertion(v130);
    }
    DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)(v108 + 8) + 16LL) + 2304LL));
    v110 = *v6;
    *((_DWORD *)*v6 + 2) = (DisplayOnlyDriverUseRawModes != 0 ? 4 : 0) | *((_DWORD *)*v6 + 2) & 0xFFFFFFFB;
    v111 = *((_QWORD *)a2 + 6);
    if ( !*(_QWORD *)(v111 + 8) )
    {
      v131 = WdLogNewEntry5_WdAssertion(v110);
      WdLogEvent5_WdAssertion(v131);
    }
    v112 = *(_QWORD *)(*(_QWORD *)(v111 + 8) + 16LL);
    v113 = *(_QWORD *)(v112 + 2304);
    if ( *(_QWORD *)(*(_QWORD *)(v113 + 16) + 2312LL) )
    {
      v132 = WdLogNewEntry5_WdAssertion(v112);
      *(_QWORD *)(v132 + 24) = 5574LL;
      WdLogEvent5_WdAssertion(v132);
    }
    if ( *(_DWORD *)(v113 + 256) || (v114 = DXGADAPTER::SupportHWVSync(*(DXGADAPTER **)(v113 + 16)), v115 = 0, !v114) )
      v115 = 8;
    v17 = *v6;
    *((_DWORD *)*v6 + 2) = v115 | *((_DWORD *)*v6 + 2) & 0xFFFFFFF7;
  }
  v18 = *((_QWORD *)a2 + 6);
  if ( !*(_QWORD *)(v18 + 8) )
  {
    v133 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v133);
  }
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 2304LL);
  if ( !*(_BYTE *)(v19 + 133) || (v20 = 2, *(_BYTE *)(v19 + 132)) )
    v20 = 0;
  v21 = *v6;
  v22 = 0;
  *((_DWORD *)v21 + 2) = v20 & 0xF | *((_DWORD *)*v6 + 2) & 0xD;
  *(_BYTE *)v21 = 0;
  *((_DWORD *)v21 + 1) = a6;
  if ( *((_WORD *)v7 + 10) )
  {
    do
    {
      v23 = 264LL * v22;
      v24 = (char *)v7 + v23 + 48;
      if ( (*(_QWORD *)v24 & 0x4000000000000LL) == 0 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v134);
      }
      if ( !*((_QWORD *)v13 + 1) )
      {
        v135 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v135);
      }
      v25 = *((_QWORD *)v13 + 1);
      v26 = *(unsigned int *)(*(_QWORD *)(v25 + 16) + 268LL);
      if ( *((_DWORD *)v24 + 4) == (_DWORD)v26 )
      {
        if ( !v25 )
        {
          v136 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v136);
        }
        v27 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
        if ( *((_DWORD *)v24 + 5) == *(_DWORD *)(v27 + 272) )
        {
          if ( (*(_QWORD *)v24 & 0x700000000000LL) != 0x700000000000LL )
          {
            v138 = WdLogNewEntry5_WdError(v27);
            *(_QWORD *)(v138 + 24) = v22;
            *(_QWORD *)(v138 + 32) = v7;
            WdLogEvent5_WdError(v138);
            return 3221225485LL;
          }
          v28 = *v6;
          v29 = 104LL * *(unsigned __int8 *)*v6;
          v30 = (char *)*v6 + v29 + 72;
          *(_QWORD *)((char *)v28 + v29 + 52) = 0LL;
          *(_WORD *)((char *)v28 + v29 + 64) = 0;
          *(_WORD *)((char *)v28 + v29 + 68) = 0;
          *(_DWORD *)((char *)v28 + v29 + 60) = 0;
          *(_DWORD *)((char *)v28 + v29 + 116) = 0;
          *(_QWORD *)((char *)v28 + v29 + 16) = v24;
          *(_WORD *)((char *)v28 + v29 + 32) = v22;
          *(_WORD *)((char *)v28 + v29 + 66) = v9;
          *(_WORD *)((char *)v28 + v29 + 70) = a5;
          memset(v30, 0, 0x24uLL);
          v31 = 0;
          if ( *((_WORD *)v7 + 10) )
          {
            do
            {
              v32 = 264LL * v31;
              if ( (*(_QWORD *)((_BYTE *)a3 + v32 + 48) & 0x4000000000000LL) == 0 )
              {
                v137 = WdLogNewEntry5_WdAssertion(0x4000000000000LL);
                WdLogEvent5_WdAssertion(v137);
              }
              if ( v31 != v22 && *(_DWORD *)((char *)a3 + v32 + 232) == *((_DWORD *)v24 + 46) )
                *(_DWORD *)((char *)v28 + v29 + 116) |= 2u;
              ++v31;
            }
            while ( v31 < *((unsigned __int16 *)a3 + 10) );
            v6 = a1;
            v7 = a3;
          }
          v9 = a4;
          v13 = v237;
          ++*(_BYTE *)*v6;
        }
      }
      ++v22;
    }
    while ( v22 < *((unsigned __int16 *)v7 + 10) );
    v12 = 0;
  }
  v33 = *v6;
  v34 = 0;
  v35 = (struct DMMVIDPN *)((char *)a2 + 96);
  v242 = (struct DMMVIDPN *)((char *)a2 + 96);
  if ( *(_BYTE *)v33 )
  {
    do
    {
      v36 = v34 + 1;
      v37 = v34 + 1;
      if ( (int)(v34 + 1) > 32 )
      {
        v139 = WdLogNewEntry5_WdAssertion(v37);
        *(_QWORD *)(v139 + 24) = *v6;
        *(_QWORD *)(v139 + 32) = v34;
        WdLogEvent5_WdAssertion(v139);
        LODWORD(v37) = 32;
      }
      v38 = *v6;
      v39 = 104LL * v34;
      v40 = VIDPN_MGR::AddPathToVidPnTopology(
              v237,
              v35,
              *(_DWORD *)(*(_QWORD *)((char *)*v6 + v39 + 16) + 24LL),
              *(_DWORD *)(*(_QWORD *)((char *)*v6 + v39 + 16) + 28LL),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v37,
              *(_WORD *)((char *)*v6 + v39 + 32),
              1u,
              D3DKMDT_MCC_ENFORCE);
      v43 = v40;
      if ( v40 < 0 )
      {
        v140 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41);
        v140[3] = *(unsigned int *)(*(_QWORD *)((char *)v38 + v39 + 16) + 24LL);
        v140[4] = *(unsigned int *)(*(_QWORD *)((char *)v38 + v39 + 16) + 28LL);
        v140[5] = v35;
        v140[6] = v43;
        return (unsigned int)v43;
      }
      v34 = v36;
    }
    while ( v36 < *(unsigned __int8 *)*v6 );
    v12 = 0;
  }
  v44 = 0;
  for ( i = 0; v44 < *(unsigned __int8 *)*v6; i = v44 )
  {
    v45 = *v6;
    v46 = 104LL * v44;
    v47 = **(_QWORD **)((char *)*v6 + v46 + 16);
    if ( (v47 & 0x4000000000000LL) == 0 )
    {
      v141 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v141);
    }
    v48 = *(_QWORD *)((char *)v45 + v46 + 16);
    Path = DMMVIDPNTOPOLOGY::FindPath(v242, *(_DWORD *)(v48 + 24), *(_DWORD *)(v48 + 28));
    if ( *(_BYTE *)(v48 + 129) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v50, v49);
      v52[3] = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 24LL);
      v52[4] = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 28LL);
      v52[5] = *(int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 20LL);
      v52[6] = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 16LL);
      v53 = *(_DWORD **)((char *)v45 + v46 + 16);
      if ( (*v53 & 0x20108) == 0x20100LL )
      {
        if ( v53[29] != 21 )
        {
          v142 = WdLogNewEntry5_WdAssertion(v53);
          *(_QWORD *)(v142 + 24) = 4096LL;
          WdLogEvent5_WdAssertion(v142);
        }
        if ( *(_BYTE *)(*(_QWORD *)((char *)v45 + v46 + 16) + 128LL) )
        {
          v143 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v143 + 24) = 4097LL;
          WdLogEvent5_WdAssertion(v143);
        }
      }
      v54 = *(_QWORD *)((char *)v45 + v46 + 16);
      if ( (*(_QWORD *)v54 & 0x20000LL) == 0
        && (((unsigned __int8)~BYTE1(*(_QWORD *)v54) ^ (unsigned __int8)~(*(_DWORD *)(v54 + 8) >> 8)) & 1) != 0 )
      {
        v144 = WdLogNewEntry5_WdAssertion((unsigned int)~(*(_QWORD *)v54 >> 8));
        *(_QWORD *)(v144 + 24) = 4111LL;
        WdLogEvent5_WdAssertion(v144);
      }
    }
    v55 = *((_QWORD *)Path + 11);
    v56 = *(_QWORD *)(v55 + 104);
    if ( v56 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v56 + 96));
      v57 = *(_QWORD *)(v55 + 104);
    }
    else
    {
      v57 = 0LL;
    }
    v58 = *v6;
    v245 = v57;
    v59 = BmlFillPreferredMonitorMode(v58, v44, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    v12 = 0;
    v62 = v59;
    if ( v59 < 0 )
    {
      v203 = (_QWORD *)WdLogNewEntry5_WdTrace(v61, v60);
      v203[3] = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 24LL);
      v204 = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 28LL);
      v203[5] = v242;
      v203[4] = v204;
      v203[6] = v62;
      *(_QWORD *)((char *)*v6 + 104 * v44 + 52) = 0LL;
      goto LABEL_259;
    }
    v63 = *(_QWORD *)((char *)v45 + v46 + 16);
    if ( (*(_QWORD *)v63 & 0x40000000000LL) == 0 )
      goto LABEL_55;
    AdapterDefaultScaling = *(_DWORD *)(v63 + 136);
    if ( AdapterDefaultScaling <= 0 )
      goto LABEL_159;
    if ( AdapterDefaultScaling <= 5 )
    {
      v64 = v237;
      goto LABEL_57;
    }
    if ( AdapterDefaultScaling == 253 )
    {
LABEL_55:
      v64 = v237;
    }
    else
    {
      if ( AdapterDefaultScaling != 255 )
      {
LABEL_159:
        v64 = v237;
        *(_DWORD *)((char *)v45 + v46 + 24) = VIDPN_MGR::GetAdapterDefaultScaling(v237);
        v149 = (_QWORD *)WdLogNewEntry5_WdWarning(v147, v146, v148);
        v149[3] = *(int *)((char *)v45 + v46 + 24);
        v149[4] = *v6;
        v149[5] = v44;
        v149[6] = *(int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 136LL);
        WdLogEvent5_WdWarning(v149);
        goto LABEL_58;
      }
      v64 = v237;
      if ( !*((_QWORD *)v237 + 1) )
      {
        v145 = WdLogNewEntry5_WdAssertion(v63);
        WdLogEvent5_WdAssertion(v145);
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v237 + 1) + 16LL)) < 1105 )
      {
        *(_DWORD *)((char *)v45 + v46 + 24) = 255;
        goto LABEL_58;
      }
    }
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v64);
LABEL_57:
    *(_DWORD *)((char *)v45 + v46 + 24) = AdapterDefaultScaling;
LABEL_58:
    v66 = *(_QWORD *)((char *)v45 + v46 + 16);
    v67 = 0;
    v236 = 0;
    if ( (*(_QWORD *)v66 & 0x800000000000LL) == 0
      || !IsInternalVideoOutput(*(_DWORD *)(v66 + 88))
      || (*(_DWORD *)(v68 + 8) & 0x200LL) != 0 )
    {
      goto LABEL_60;
    }
    PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v64, *(_DWORD *)(v68 + 28));
    v152 = *((_QWORD *)a2 + 6);
    if ( !*(_QWORD *)(v152 + 8) )
    {
      v153 = WdLogNewEntry5_WdAssertion(v150);
      WdLogEvent5_WdAssertion(v153);
    }
    v154 = *(_QWORD *)(v152 + 8);
    v155 = *(DXGADAPTER **)(v154 + 16);
    if ( !v155 )
      goto LABEL_195;
    v156 = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 28LL);
    if ( (_DWORD)v156 == -1 )
    {
      v12 = 0;
LABEL_195:
      LODWORD(v62) = -1073741811;
      goto LABEL_196;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v154 + 16)) )
    {
      v158 = WdLogNewEntry5_WdAssertion(v157);
      *(_QWORD *)(v158 + 24) = 7392LL;
      WdLogEvent5_WdAssertion(v158);
    }
    v159 = *((_QWORD *)v155 + 288);
    if ( !v159 )
    {
      v201 = WdLogNewEntry5_WdError(v157);
      *(_QWORD *)(v201 + 24) = 7397LL;
      WdLogEvent5_WdError(v201);
      LODWORD(v62) = -1073741811;
LABEL_257:
      v202 = (_QWORD *)WdLogNewEntry5_WdError(v154);
      v202[3] = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 28LL);
      v202[4] = *(int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 20LL);
      v202[5] = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 16LL);
      WdLogEvent5_WdError(v202);
LABEL_259:
      v205 = &v245;
      goto LABEL_262;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v155) )
    {
      v161 = WdLogNewEntry5_WdAssertion(v160);
      WdLogEvent5_WdAssertion(v161);
    }
    if ( !*((_QWORD *)v155 + 288) )
    {
      v162 = WdLogNewEntry5_WdAssertion(v160);
      WdLogEvent5_WdAssertion(v162);
    }
    v163 = *(struct _FAST_MUTEX **)(*((_QWORD *)v155 + 288) + 96LL);
    if ( v163 )
    {
      v244 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v163, v156, 1, (ULONG **)&v244);
      if ( MonitorInstance == -1073741275 )
      {
        v166 = WdLogNewEntry5_WdDmmEvent(v154);
        *(_QWORD *)(v166 + 24) = v156;
        *(_QWORD *)(v166 + 32) = v155;
        WdLogEvent5_WdDmmEvent(v166);
        MonitorInstance = -1073741632;
LABEL_190:
        v12 = 0;
        IsVirtualModeSuportDisabled = 0;
        goto LABEL_175;
      }
      if ( MonitorInstance >= 0 )
      {
        v167 = v244;
        if ( !v244 || *((_DWORD *)v244 + 104) != 1 )
        {
          v168 = WdLogNewEntry5_WdAssertion(v154);
          WdLogEvent5_WdAssertion(v168);
        }
        if ( !v167 )
        {
          v169 = WdLogNewEntry5_WdAssertion(v154);
          WdLogEvent5_WdAssertion(v169);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v167 + 280), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v167);
        ExReleaseResourceLite((PERESOURCE)((char *)v167 + 280));
        KeLeaveCriticalRegion();
        v154 = 0LL;
        MonitorInstance = 0;
      }
      if ( MonitorInstance == -1073741632 )
        goto LABEL_190;
    }
    else
    {
      v164 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v164 + 24) = v155;
      WdLogEvent5_WdError(v164);
      MonitorInstance = -1073741811;
    }
    v12 = 0;
LABEL_175:
    LODWORD(v62) = 0;
    if ( MonitorInstance != -1073741632 )
      LODWORD(v62) = MonitorInstance;
    if ( (int)v62 < 0 )
    {
      v170 = WdLogNewEntry5_WdAssertion(v154);
      *(_QWORD *)(v170 + 24) = (int)v62;
      WdLogEvent5_WdAssertion(v170);
    }
    else if ( IsVirtualModeSuportDisabled )
    {
      v233 = 1;
    }
    else
    {
      v233 = *(_BYTE *)(v159 + 132) == 0;
    }
    v67 = 0;
LABEL_196:
    if ( (int)v62 < 0 )
      goto LABEL_257;
    if ( PathFromTargetInClientVidPn && !v233 )
    {
      v171 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
LABEL_204:
      if ( v171 )
      {
        v173 = *(__int64 **)((char *)v45 + v46 + 16);
        v174 = *v173;
        if ( (*v173 & 0x200) != 0 )
        {
          if ( (((unsigned __int8)v171 ^ *((_BYTE *)v173 + 132)) & 1) != 0 && (v174 & 0x20000) != 0 )
          {
            v175 = *((_DWORD *)v173 + 38);
            v176 = *((_DWORD *)v173 + 39);
            *v173 &= ~0x800000uLL;
            *((_DWORD *)v173 + 38) = v176;
            *((_DWORD *)v173 + 39) = v175;
          }
        }
        else if ( (v174 & 0x20000) != 0 )
        {
          v177 = WdLogNewEntry5_WdAssertion(v154);
          WdLogEvent5_WdAssertion(v177);
        }
        *v173 |= 0x200uLL;
        v67 = 1;
        *((_DWORD *)v173 + 33) = v171;
        v236 = 1;
        *(_DWORD *)((char *)v45 + v46 + 28) = v171;
      }
      v12 = 0;
      goto LABEL_60;
    }
    if ( g_IsMobileCore )
      goto LABEL_212;
    if ( PathFromTargetInClientVidPn )
      goto LABEL_62;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v154) + 202) )
    {
      v171 = *((_DWORD *)DXGGLOBAL::GetGlobal(v172) + 202);
      goto LABEL_204;
    }
LABEL_60:
    if ( !g_IsMobileCore )
      goto LABEL_61;
LABEL_212:
    if ( !IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)((char *)v45 + v46 + 16) + 88LL))
      && (*(_DWORD *)(v178 + 8) & 0x200LL) == 0 )
    {
      v180 = 0;
      if ( *((_WORD *)a3 + 10) )
      {
        do
        {
          v181 = 264LL * v180;
          if ( (*(_QWORD *)((_BYTE *)a3 + v181 + 48) & 0x4000000000000LL) == 0 )
          {
            v182 = WdLogNewEntry5_WdAssertion(v179);
            WdLogEvent5_WdAssertion(v182);
          }
          v179 = *(unsigned int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 184LL);
          if ( *(_DWORD *)((char *)a3 + v181 + 232) == (_DWORD)v179
            && IsInternalVideoOutput(*(_DWORD *)((char *)a3 + v181 + 136)) )
          {
            break;
          }
          ++v180;
        }
        while ( v180 < *((unsigned __int16 *)a3 + 10) );
        v6 = a1;
        v12 = 0;
        v67 = v236;
      }
      if ( v180 < *((unsigned __int16 *)a3 + 10) )
      {
        v67 = 1;
        v183 = 1;
        v184 = *((unsigned int *)DXGGLOBAL::GetGlobal(v179) + 202);
        if ( (int)v184 >= 0 )
        {
          if ( (int)v184 <= 1 )
          {
LABEL_231:
            v186 = *(_QWORD *)((char *)v45 + v46 + 16);
            v187 = *(_QWORD *)v186 & 0xFFFFFFFFFF7FFFFFuLL;
            *(_DWORD *)(v186 + 132) = v183;
            *(_QWORD *)v186 = v187 | 0x200;
            *(_DWORD *)((char *)v45 + v46 + 28) = v183;
            goto LABEL_61;
          }
          switch ( (_DWORD)v184 )
          {
            case 2:
              v183 = 4;
              goto LABEL_231;
            case 3:
              v183 = 3;
              goto LABEL_231;
            case 4:
              v183 = 2;
              goto LABEL_231;
          }
        }
        v185 = WdLogNewEntry5_WdAssertion(v184);
        WdLogEvent5_WdAssertion(v185);
        goto LABEL_231;
      }
    }
LABEL_61:
    if ( v67 )
      goto LABEL_109;
LABEL_62:
    v69 = *(_DWORD **)((char *)v45 + v46 + 16);
    if ( (*v69 & 0x200LL) == 0 )
    {
      v70 = *v6;
      v71 = i;
      if ( !(unsigned __int8)BmlIsSecondaryClonePath(*v6, i, &v241) )
      {
        v73 = D3DKMDT_VPPR_IDENTITY;
LABEL_65:
        v12 = 0;
        if ( v73 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v200 = WdLogNewEntry5_WdAssertion(v72);
          WdLogEvent5_WdAssertion(v200);
        }
        *(_DWORD *)((char *)v45 + v46 + 28) = v73;
        goto LABEL_68;
      }
      v194 = 104LL * v241;
      v73 = *(_DWORD *)((char *)v70 + v194 + 28);
      if ( v73 == D3DKMDT_VPPR_UNINITIALIZED )
      {
        v195 = WdLogNewEntry5_WdAssertion(v72);
        WdLogEvent5_WdAssertion(v195);
      }
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v73) != D3DKMDT_VPPR_IDENTITY )
      {
        v196 = WdLogNewEntry5_WdAssertion(v72);
        WdLogEvent5_WdAssertion(v196);
      }
      if ( !v231 )
        goto LABEL_65;
      v197 = *(_DWORD *)((char *)v70 + v46 + 52);
      v198 = *(_DWORD *)((char *)v70 + v46 + 56);
      LOBYTE(v72) = *(_DWORD *)((char *)v70 + v194 + 52) < *(_DWORD *)((char *)v70 + v194 + 56);
      if ( (_BYTE)v72 == v197 < v198 )
        goto LABEL_65;
      v199 = v73 - 1;
      if ( v197 >= v198 )
      {
        if ( v199 <= 3 )
        {
          v73 += 4;
          goto LABEL_65;
        }
      }
      else if ( v199 <= 3 )
      {
        v73 += 12;
        goto LABEL_65;
      }
      v73 = D3DKMDT_VPPR_NOTSPECIFIED;
      goto LABEL_65;
    }
    v98 = v69[33];
    if ( (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION(v98) - 1) <= 3 )
    {
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v98) == D3DKMDT_VPPR_IDENTITY )
      {
        if ( v231 && (unsigned __int8)BmlIsSecondaryClonePath(*v6, i, &v240) )
        {
          v188 = *(_DWORD *)(*((_QWORD *)*v6 + 13 * v240 + 2) + 132LL);
          if ( (unsigned int)(v188 - 1) > 0xF
            || (unsigned int)(v98 - 1) > 0xF
            || (v189 = (v98 - v188 + 4) % 4, v188 > 4)
            || (v190 = v188 + 4 * v189, v189 > 3) )
          {
            v190 = 255;
          }
          *(_DWORD *)((char *)v45 + v46 + 28) = v190;
        }
        else
        {
          *(_DWORD *)((char *)v45 + v46 + 28) = v98;
        }
LABEL_109:
        v71 = i;
        goto LABEL_68;
      }
      if ( v231 )
      {
        v71 = i;
        if ( (unsigned __int8)BmlIsSecondaryClonePath(*v6, i, 0LL) )
        {
          *(_DWORD *)((char *)v45 + v46 + 28) = *(_DWORD *)(*(_QWORD *)((char *)v45 + v46 + 16) + 132LL);
        }
        else
        {
          v192 = (_QWORD *)WdLogNewEntry5_WdAssertion(v191);
          v192[3] = *v6;
          v192[4] = i;
          v192[5] = *(int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 132LL);
          WdLogEvent5_WdAssertion(v192);
          *(_DWORD *)((char *)v45 + v46 + 28) = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)((char *)v45 + v46 + 16) + 132LL));
        }
        goto LABEL_68;
      }
    }
    v193 = (_QWORD *)WdLogNewEntry5_WdWarning(v100, v99, v101);
    v71 = i;
    v193[3] = *v6;
    v193[4] = i;
    v193[5] = *(int *)(*(_QWORD *)((char *)v45 + v46 + 16) + 132LL);
    WdLogEvent5_WdWarning(v193);
    *(_DWORD *)((char *)v45 + v46 + 28) = 1;
LABEL_68:
    v74 = *(_QWORD *)((char *)v45 + v46 + 16);
    if ( *(_BYTE *)(v74 + 129) && (*(_DWORD *)v74 & 0x20000) != 0 )
    {
      if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)((char *)v45 + v46 + 28)) - 2) & 0xFFFFFFFD) != 0 )
      {
        *(_DWORD *)((char *)v45 + v46 + 108) = *(_DWORD *)(v102 + 152);
        v103 = *(_DWORD *)(v102 + 156);
      }
      else
      {
        *(_DWORD *)((char *)v45 + v46 + 108) = *(_DWORD *)(v102 + 156);
        v103 = *(_DWORD *)(v102 + 152);
      }
      *(_DWORD *)((char *)v45 + v46 + 116) |= 1u;
      *(_DWORD *)((char *)v45 + v46 + 112) = v103;
    }
    if ( (unsigned __int8)BmlIsSecondaryClonePath(*v6, v71, 0LL) )
      *(_WORD *)((char *)v45 + v46 + 66) = 0;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v245, 0LL);
    v44 = v71 + 1;
  }
  v250 = 0;
  if ( *(_BYTE *)*v6 )
  {
    do
    {
      v75 = *v6;
      v76 = 104LL * v12;
      v246 = *v6;
      v247 = v76;
      if ( !(unsigned __int8)BmlIsSecondaryClonePath(v246, v12, 0LL) )
      {
        v77 = 0;
        v235 = 0LL;
        v78 = 0;
        v79 = v12;
        v253 = v12;
        if ( v12 < *(unsigned __int8 *)*v6 )
        {
          do
          {
            v80 = *v6;
            v81 = 104LL * v79;
            v82 = *(_QWORD *)((char *)*v6 + v81 + 16);
            if ( *(_DWORD *)(v82 + 24) == *(_DWORD *)(*(_QWORD *)((char *)v75 + v76 + 16) + 24LL) )
            {
              v83 = *(_QWORD *)((char *)v80 + v81 + 44);
              if ( v231
                && ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)((char *)v80 + v81 + 28))
                   - 2) & 0xFFFFFFFD) == 0 )
              {
                v84 = v83;
                v85 = HIDWORD(v83);
                v83 = __PAIR64__(v83, HIDWORD(v83));
              }
              else
              {
                v84 = HIDWORD(v83);
                v85 = v83;
              }
              if ( !v85 || !v84 )
              {
                v122 = WdLogNewEntry5_WdAssertion(v82);
                WdLogEvent5_WdAssertion(v122);
                v79 = v253;
              }
              if ( v77 && v78 )
              {
                if ( v77 > v85 )
                  v77 = v85;
                LODWORD(v235) = v77;
                if ( v78 > v84 )
                  v78 = v84;
                HIDWORD(v235) = v78;
              }
              else
              {
                v235 = v83;
                v77 = v83;
                v78 = HIDWORD(v83);
              }
              v76 = v247;
              v75 = v246;
            }
            v253 = ++v79;
          }
          while ( v79 < *(unsigned __int8 *)*v6 );
          v12 = v250;
        }
        *(_QWORD *)((char *)v75 + v76 + 36) = v235;
        *(_DWORD *)((char *)v75 + v76 + 60) = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)((char *)v75 + v76 + 52));
      }
      v250 = ++v12;
    }
    while ( v12 < *(unsigned __int8 *)*v6 );
  }
  v86 = 0;
  if ( !*(_BYTE *)*v6 )
    return 0LL;
  while ( 1 )
  {
    v87 = *v6;
    v88 = 104LL * v86;
    v91 = DMMVIDPNTOPOLOGY::FindPath(
            v242,
            *(_DWORD *)(*(_QWORD *)((char *)*v6 + v88 + 16) + 24LL),
            *(_DWORD *)(*(_QWORD *)((char *)*v6 + v88 + 16) + 28LL));
    v92 = *((_QWORD *)v91 + 11);
    v93 = *(_QWORD *)(v92 + 104);
    if ( v93 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v93 + 96));
      v94 = *(struct DMMVIDPNSOURCEMODESET **)(v92 + 104);
    }
    else
    {
      v94 = 0LL;
    }
    v95 = *(_QWORD **)((char *)v87 + v88 + 16);
    v243 = v94;
    v96 = v95[1];
    if ( (v96 & 0x820B8F) == 0 )
      goto LABEL_94;
    if ( (*v95 & v96 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*v6, v86, 0LL) )
    {
      v211 = WdLogNewEntry5_WdWarning(v95, v89, v90);
      *(_QWORD *)(v211 + 24) = *v6;
      *(_QWORD *)(v211 + 32) = v86;
      WdLogEvent5_WdWarning(v211);
      goto LABEL_94;
    }
    v238 = -1;
    if ( (int)BmlGetNextBestSourceMode((int)*v6, -1, (__int64)&v238) >= 0 )
      break;
    v210 = *(_QWORD *)((char *)v87 + v88 + 16);
    if ( (*(_QWORD *)v210 & 0x40000000000000LL) == 0 )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v210 + 96),
        *(_DWORD *)(v210 + 100),
        *(_DWORD *)(v210 + 116),
        *(_QWORD *)(v210 + 16));
      v218 = (_QWORD *)WdLogNewEntry5_WdWarning(v216, v215, v217);
      v218[3] = *v6;
      v218[5] = v86;
      v218[6] = v238;
      v218[4] = a2;
      WdLogEvent5_WdWarning(v218);
      LODWORD(v62) = -1071774970;
      goto LABEL_261;
    }
    *(_QWORD *)(v210 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_95:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v243, 0LL);
    if ( ++v86 >= *(unsigned __int8 *)*v6 )
      return 0LL;
  }
  v116 = VIDPN_MGR::PinVidPnSourceMode(v237, v94, v238, 1);
  v62 = v116;
  if ( v116 < 0 )
  {
    DxgkLogCodePointPacket(
      0x15u,
      *(_DWORD *)(*(_QWORD *)((char *)v87 + v88 + 16) + 96LL),
      *(_DWORD *)(*(_QWORD *)((char *)v87 + v88 + 16) + 100LL),
      *(_DWORD *)(*(_QWORD *)((char *)v87 + v88 + 16) + 116LL),
      *(_QWORD *)(*(_QWORD *)((char *)v87 + v88 + 16) + 16LL));
    v209 = (_QWORD *)WdLogNewEntry5_WdWarning(v207, v206, v208);
    v209[4] = *v6;
    v209[5] = a2;
    v209[6] = v86;
    v209[3] = v62;
    WdLogEvent5_WdWarning(v209);
    goto LABEL_261;
  }
  *(_WORD *)((char *)v87 + v88 + 66) = 0;
  v117 = *((_QWORD *)v91 + 12);
  v118 = *(_QWORD *)(v117 + 104);
  if ( v118 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v118 + 96));
    v119 = *(struct DMMVIDPNTARGETMODESET **)(v117 + 104);
  }
  else
  {
    v119 = 0LL;
  }
  v120 = *(_QWORD *)((char *)v87 + v88 + 16);
  v248[0] = (__int64)v119;
  if ( (*(_BYTE *)v120 & 0x87) != 0x87
    || (*(_BYTE *)(v120 + 8) & 0x87) != 0x87
    || !*(_DWORD *)(v120 + 56)
    || !*(_DWORD *)(v120 + 52) )
  {
    v121 = -1;
    goto LABEL_139;
  }
  v239 = -1;
  if ( (int)BmlGetNextBestTargetMode(*v6, a2, (unsigned __int16)v86, v119, v94, -1, &v239) >= 0 )
  {
    v62 = (int)VIDPN_MGR::PinVidPnTargetMode(v237, v119, v239, 1);
    v121 = 0;
    if ( (int)v62 < 0 )
    {
      v219 = DMMVIDEOSIGNALMODE::DivideAndRound(
               *(unsigned int *)(*(_QWORD *)((char *)v87 + v88 + 16) + 52LL),
               *(unsigned int *)(*(_QWORD *)((char *)v87 + v88 + 16) + 56LL));
      DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v220 + 44), *(_DWORD *)(v220 + 48), v219, *(_QWORD *)(v220 + 16));
      v224 = (_QWORD *)WdLogNewEntry5_WdWarning(v222, v221, v223);
      v224[4] = *v6;
      v224[6] = v86;
      v224[3] = v62;
      v224[5] = a2;
      WdLogEvent5_WdWarning(v224);
      goto LABEL_282;
    }
LABEL_139:
    *(_WORD *)((char *)v87 + v88 + 70) = v121;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v248, 0LL);
LABEL_94:
    if ( DMMVIDPNPRESENTPATH::IsFunctional(v91) )
    {
      v212 = *v6;
      for ( j = 0; j < *(unsigned __int8 *)v212; ++j )
      {
        v214 = 104LL * j;
        if ( *(_DWORD *)(*(_QWORD *)((char *)v212 + v214 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)v87 + v88 + 16)
                                                                                    + 24LL) )
          *(_WORD *)((char *)v212 + v214 + 66) = 0;
      }
      *(_WORD *)((char *)v87 + v88 + 70) = 0;
    }
    goto LABEL_95;
  }
  v225 = DMMVIDEOSIGNALMODE::DivideAndRound(
           *(unsigned int *)(*(_QWORD *)((char *)v87 + v88 + 16) + 52LL),
           *(unsigned int *)(*(_QWORD *)((char *)v87 + v88 + 16) + 56LL));
  DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v226 + 44), *(_DWORD *)(v226 + 48), v225, *(_QWORD *)(v226 + 16));
  v230 = (_QWORD *)WdLogNewEntry5_WdWarning(v228, v227, v229);
  v230[3] = *v6;
  v230[5] = v86;
  v230[4] = a2;
  WdLogEvent5_WdWarning(v230);
  LODWORD(v62) = -1071774970;
LABEL_282:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v248, 0LL);
LABEL_261:
  v205 = (__int64 *)&v243;
LABEL_262:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v205, 0LL);
  return (unsigned int)v62;
}
