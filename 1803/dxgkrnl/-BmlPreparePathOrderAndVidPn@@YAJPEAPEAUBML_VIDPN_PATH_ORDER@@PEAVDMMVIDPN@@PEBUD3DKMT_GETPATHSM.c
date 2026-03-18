/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00AE424 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02268A8 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000628C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00072FC (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000731C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0007CB0 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0030158 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0046BF8 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00B78E4 (BmlFillPreferredMonitorMode.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00B9770 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00B9854 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00BA378 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     BmlGetNextBestSourceMode @ 0x1C00C1358 (BmlGetNextBestSourceMode.c)
 *     BmlGetNextBestTargetMode @ 0x1C00C1BE0 (BmlGetNextBestTargetMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00C29B0 (BmlIsSecondaryClonePath.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00C3218 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C02156E8 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        struct BML_VIDPN_PATH_ORDER **a1,
        struct DMMVIDPN *a2,
        const struct D3DKMT_GETPATHSMODALITY *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int16 v9; // r13
  struct BML_VIDPN_PATH_ORDER *v10; // rax
  __int64 v11; // rcx
  VIDPN_MGR *v12; // r12
  VIDPN_MGR *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  VIDPN_MGR *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  char v24; // cl
  unsigned int v25; // r14d
  unsigned int v26; // eax
  __int64 v27; // rcx
  char *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  _BYTE *v31; // rbx
  __int64 v32; // rdi
  unsigned __int16 v33; // ax
  char *v34; // rcx
  unsigned int v35; // r13d
  __int64 v36; // rcx
  unsigned int v37; // ebx
  struct DMMVIDPNTOPOLOGY *v38; // r13
  unsigned int v39; // eax
  unsigned int v40; // r14d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v41; // ecx
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  unsigned int v49; // r13d
  __int64 v50; // rbx
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rdx
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  VIDPN_MGR *v72; // rsi
  int AdapterDefaultScaling; // eax
  __int64 v74; // rdx
  __int64 v75; // rdx
  _DWORD *v76; // rcx
  __int64 v77; // r14
  __int64 v78; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v79; // esi
  __int64 v80; // r10
  __int64 v81; // r10
  int v82; // eax
  unsigned int v83; // r12d
  __int64 v84; // rbx
  unsigned __int8 *v85; // rdx
  unsigned int v86; // esi
  unsigned int v87; // r14d
  unsigned int v88; // r9d
  __int64 v89; // r10
  __int64 v90; // rcx
  unsigned __int64 v91; // rbx
  unsigned __int64 v92; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v93; // eax
  unsigned int v94; // r13d
  unsigned int v95; // r14d
  __int64 v96; // rsi
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r12
  __int64 v101; // rcx
  struct DMMVIDPNSOURCEMODESET *v102; // r12
  __int64 v103; // rax
  DMMVIDPNPRESENTPATH *v104; // r13
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  int v109; // eax
  __int64 v110; // rbx
  __int64 v111; // rbx
  __int64 v112; // rax
  DMMVIDPNTARGETMODESET *v113; // rbx
  __int64 v114; // rcx
  __int16 v115; // ax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  _DWORD *v130; // rcx
  __int64 v131; // rbx
  __int64 v132; // rax
  __int64 v133; // rax
  int v134; // eax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  _QWORD *v153; // rax
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r14
  __int64 v155; // rsi
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rcx
  int v159; // r14d
  __int64 v160; // rcx
  __int64 *v161; // rsi
  __int64 v162; // rdx
  int v163; // ecx
  int v164; // eax
  __int64 v165; // rax
  int v166; // r8d
  __int64 v167; // rcx
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  __int64 v170; // r12
  __int64 v171; // rax
  __int64 v172; // rax
  unsigned int v173; // edx
  unsigned int v174; // r8d
  unsigned int v175; // eax
  __int64 v176; // rax
  _QWORD *v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rax
  unsigned __int8 *v180; // r8
  unsigned int i; // r9d
  __int64 v182; // r10
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  _QWORD *v186; // rax
  unsigned int v187; // eax
  __int64 v188; // r10
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  _QWORD *v192; // rax
  unsigned int v193; // eax
  __int64 v194; // r10
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  _QWORD *v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  _QWORD *v202; // rax
  VIDPN_MGR *v203; // [rsp+40h] [rbp-59h]
  bool v204; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v205; // [rsp+4Ch] [rbp-4Dh] BYREF
  unsigned __int64 v206; // [rsp+50h] [rbp-49h]
  unsigned __int64 v207; // [rsp+58h] [rbp-41h]
  unsigned int v208; // [rsp+60h] [rbp-39h]
  unsigned int v209; // [rsp+64h] [rbp-35h]
  unsigned int v210; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v211; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v212; // [rsp+70h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *v213; // [rsp+78h] [rbp-21h]
  __int64 v214; // [rsp+80h] [rbp-19h] BYREF
  __int64 v215; // [rsp+88h] [rbp-11h]
  DMMVIDPNTARGETMODESET *v216; // [rsp+90h] [rbp-9h] BYREF
  __int64 v217[9]; // [rsp+98h] [rbp-1h] BYREF
  char v218; // [rsp+F0h] [rbp+57h]
  struct DMMVIDPNPRESENTPATH *v219; // [rsp+F0h] [rbp+57h]
  __int64 v221; // [rsp+100h] [rbp+67h] BYREF
  __int16 v222; // [rsp+108h] [rbp+6Fh]

  v222 = a4;
  v9 = a4;
  v10 = (struct BML_VIDPN_PATH_ORDER *)operator new[](
                                         104LL * *((unsigned __int16 *)a3 + 10) + 16,
                                         0x63644356u,
                                         PagedPool);
  *a1 = v10;
  if ( !v10 )
  {
    v117 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v117 + 24) = a3;
    *(_QWORD *)(v117 + 32) = *((unsigned __int16 *)a3 + 10);
    WdLogEvent5_WdLowResource(v117);
    return 3221225626LL;
  }
  v12 = (VIDPN_MGR *)*((_QWORD *)a2 + 6);
  v203 = v12;
  v13 = v12;
  v14 = *((_QWORD *)v12 + 1);
  if ( !v14 )
  {
    v118 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v118);
    v14 = *((_QWORD *)v12 + 1);
    v13 = (VIDPN_MGR *)*((_QWORD *)a2 + 6);
  }
  v15 = *(_QWORD *)(v14 + 16);
  v16 = v13;
  v17 = *(_QWORD *)(v15 + 2456);
  if ( *(_BYTE *)(v17 + 132) && *(_BYTE *)(v17 + 133)
    || (v218 = 0,
        v16 = *(VIDPN_MGR **)(*(_QWORD *)(v15 + 192) + 64LL),
        *(_DWORD *)(*((_QWORD *)v16 + 5) + 28LL) >= 0x4003u) )
  {
    v218 = 1;
  }
  v18 = *((_QWORD *)v13 + 1);
  if ( !v18 )
  {
    v119 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v119);
    v18 = *((_QWORD *)v13 + 1);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v18 + 16) + 2464LL) )
  {
    v19 = *a1;
    *((_DWORD *)*a1 + 2) &= 0xFFFFFFF2;
  }
  else
  {
    v120 = *((_QWORD *)a2 + 6);
    v121 = *(_QWORD *)(v120 + 8);
    if ( !v121 )
    {
      v122 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v122);
      v121 = *(_QWORD *)(v120 + 8);
    }
    v123 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 2456LL);
    if ( *(_QWORD *)(*(_QWORD *)(v123 + 16) + 2464LL) )
    {
      v124 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v124 + 24) = 5983LL;
      WdLogEvent5_WdAssertion(v124);
    }
    v125 = (*((_DWORD *)*a1 + 2) ^ *(_DWORD *)(v123 + 248)) & 1;
    *((_DWORD *)*a1 + 2) ^= v125;
    v126 = *((_QWORD *)a2 + 6);
    v127 = *(_QWORD *)(v126 + 8);
    if ( !v127 )
    {
      v128 = WdLogNewEntry5_WdAssertion(v125);
      WdLogEvent5_WdAssertion(v128);
      v127 = *(_QWORD *)(v126 + 8);
    }
    DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v127 + 16) + 2456LL));
    v130 = *a1;
    *((_DWORD *)*a1 + 2) = (DisplayOnlyDriverUseRawModes != 0 ? 4 : 0) | *((_DWORD *)*a1 + 2) & 0xFFFFFFFB;
    v131 = *((_QWORD *)a2 + 6);
    v132 = *(_QWORD *)(v131 + 8);
    if ( !v132 )
    {
      v133 = WdLogNewEntry5_WdAssertion(v130);
      WdLogEvent5_WdAssertion(v133);
      v132 = *(_QWORD *)(v131 + 8);
    }
    v134 = ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(*(DXGADAPTER ***)(*(_QWORD *)(v132 + 16) + 2456LL));
    v19 = *a1;
    v16 = v134 != 0 ? (VIDPN_MGR *)8 : 0LL;
    *((_DWORD *)*a1 + 2) = (unsigned int)v16 | *((_DWORD *)*a1 + 2) & 0xFFFFFFF7;
  }
  v20 = *((_QWORD *)a2 + 6);
  v21 = *(_QWORD *)(v20 + 8);
  if ( !v21 )
  {
    v135 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v135);
    v21 = *(_QWORD *)(v20 + 8);
    v19 = *a1;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 2456LL);
  if ( !*(_BYTE *)(v22 + 133) || (v23 = *(_BYTE *)(v22 + 132) == 0, v24 = 1, !v23) )
    v24 = 0;
  v25 = 0;
  v26 = a6;
  v19[2] = v19[2] & 0xD | (2 * v24) & 0xF;
  *(_BYTE *)v19 = 0;
  v19[1] = v26;
  if ( *((_WORD *)a3 + 10) )
  {
    do
    {
      v27 = 272LL * v25;
      v28 = (char *)a3 + v27 + 48;
      if ( (*(_QWORD *)v28 & 0x4000000000000LL) == 0 )
      {
        v136 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v136);
      }
      v29 = *((_QWORD *)v203 + 1);
      if ( !v29 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v137);
        v29 = *((_QWORD *)v203 + 1);
      }
      v30 = *(_QWORD *)(v29 + 16);
      if ( *((_DWORD *)v28 + 4) == *(_DWORD *)(v30 + 268) && *((_DWORD *)v28 + 5) == *(_DWORD *)(v30 + 272) )
      {
        if ( (*(_QWORD *)v28 & 0x700000000000LL) != 0x700000000000LL )
        {
          v139 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v139 + 24) = v25;
          *(_QWORD *)(v139 + 32) = a3;
          WdLogEvent5_WdError(v139);
          return 3221225485LL;
        }
        v31 = *a1;
        v32 = 104LL * *(unsigned __int8 *)*a1;
        v33 = a5;
        v34 = (char *)*a1 + v32 + 72;
        *(_QWORD *)&v31[v32 + 52] = 0LL;
        *(_QWORD *)&v31[v32 + 16] = v28;
        *(_WORD *)&v31[v32 + 32] = v25;
        *(_WORD *)&v31[v32 + 64] = 0;
        *(_WORD *)&v31[v32 + 68] = 0;
        *(_WORD *)&v31[v32 + 66] = v9;
        *(_WORD *)&v31[v32 + 70] = v33;
        *(_DWORD *)&v31[v32 + 60] = 0;
        *(_DWORD *)&v31[v32 + 116] = 0;
        memset(v34, 0, 0x24uLL);
        v35 = 0;
        if ( *((_WORD *)a3 + 10) )
        {
          do
          {
            v36 = 272LL * v35;
            v221 = v36;
            if ( (*(_QWORD *)((_BYTE *)a3 + v36 + 48) & 0x4000000000000LL) == 0 )
            {
              v138 = WdLogNewEntry5_WdAssertion(v36);
              WdLogEvent5_WdAssertion(v138);
              v36 = v221;
            }
            if ( v35 != v25 && *(_DWORD *)((char *)a3 + v36 + 232) == *((_DWORD *)v28 + 46) )
              *(_DWORD *)&v31[v32 + 116] |= 2u;
            ++v35;
          }
          while ( v35 < *((unsigned __int16 *)a3 + 10) );
          v31 = *a1;
        }
        ++*v31;
        v9 = v222;
      }
      ++v25;
    }
    while ( v25 < *((unsigned __int16 *)a3 + 10) );
    v19 = *a1;
    v12 = v203;
  }
  v37 = 0;
  v38 = (struct DMMVIDPN *)((char *)a2 + 96);
  LOBYTE(v39) = *(_BYTE *)v19;
  v213 = (struct DMMVIDPN *)((char *)a2 + 96);
  if ( (_BYTE)v39 )
  {
    do
    {
      v40 = v37 + 1;
      v41 = v37 + 1;
      if ( (int)(v37 + 1) > 32 )
      {
        v140 = WdLogNewEntry5_WdAssertion(v40);
        *(_QWORD *)(v140 + 24) = *a1;
        *(_QWORD *)(v140 + 32) = v37;
        WdLogEvent5_WdAssertion(v140);
        v19 = *a1;
        v41 = 32;
      }
      v42 = 26LL * v37;
      v43 = VIDPN_MGR::AddPathToVidPnTopology(
              v12,
              v38,
              *(_DWORD *)(*(_QWORD *)&v19[v42 + 4] + 24LL),
              *(_DWORD *)(*(_QWORD *)&v19[v42 + 4] + 28LL),
              v41,
              v19[v42 + 8],
              1u,
              D3DKMDT_MCC_ENFORCE);
      v48 = v43;
      if ( v43 < 0 )
      {
        v141 = (_QWORD *)WdLogNewEntry5_WdTrace(v45, v44, v46, v47);
        v141[3] = *(unsigned int *)(*(_QWORD *)&v19[v42 + 4] + 24LL);
        v141[4] = *(unsigned int *)(*(_QWORD *)&v19[v42 + 4] + 28LL);
        v141[5] = v38;
        v141[6] = v48;
        return (unsigned int)v48;
      }
      v19 = *a1;
      v37 = v40;
      v39 = *(unsigned __int8 *)*a1;
    }
    while ( v40 < v39 );
  }
  v49 = 0;
  if ( (_BYTE)v39 )
  {
    do
    {
      v50 = 26LL * v49;
      v51 = *(_QWORD *)&v19[v50 + 4];
      if ( (*(_QWORD *)v51 & 0x4000000000000LL) == 0 )
      {
        v144 = WdLogNewEntry5_WdAssertion(0x4000000000000LL);
        WdLogEvent5_WdAssertion(v144);
        v51 = *(_QWORD *)&v19[v50 + 4];
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v213, *(_DWORD *)(v51 + 24), *(_DWORD *)(v51 + 28));
      if ( *(_BYTE *)(v51 + 129) )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, v52, v54, v55);
        v57[3] = *(unsigned int *)(*(_QWORD *)&v19[v50 + 4] + 24LL);
        v57[4] = *(unsigned int *)(*(_QWORD *)&v19[v50 + 4] + 28LL);
        v57[5] = *(int *)(*(_QWORD *)&v19[v50 + 4] + 20LL);
        v58 = *(_QWORD *)&v19[v50 + 4];
        v57[6] = *(unsigned int *)(v58 + 16);
        v59 = *(_DWORD **)&v19[v50 + 4];
        if ( (*v59 & 0x20108) == 0x20100LL )
        {
          v60 = *(_QWORD *)&v19[v50 + 4];
          if ( v59[29] != 21 )
          {
            v145 = WdLogNewEntry5_WdAssertion(v58);
            *(_QWORD *)(v145 + 24) = 3999LL;
            WdLogEvent5_WdAssertion(v145);
            v60 = *(_QWORD *)&v19[v50 + 4];
          }
          v59 = (_DWORD *)v60;
          if ( *(_BYTE *)(v60 + 128) )
          {
            v146 = WdLogNewEntry5_WdAssertion(v58);
            *(_QWORD *)(v146 + 24) = 4000LL;
            WdLogEvent5_WdAssertion(v146);
            v59 = *(_DWORD **)&v19[v50 + 4];
          }
        }
        if ( (*v59 & 0x20000LL) == 0 )
        {
          v61 = ~(*v59 >> 8);
          if ( (((unsigned __int8)v61 ^ (unsigned __int8)~(v59[2] >> 8)) & 1) != 0 )
          {
            v147 = WdLogNewEntry5_WdAssertion(v61 ^ (unsigned int)~(v59[2] >> 8));
            *(_QWORD *)(v147 + 24) = 4014LL;
            WdLogEvent5_WdAssertion(v147);
          }
        }
      }
      v62 = *((_QWORD *)Path + 11);
      v63 = *(_QWORD *)(v62 + 104);
      if ( v63 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v63 + 96));
        v64 = *(_QWORD *)(v62 + 104);
      }
      else
      {
        v64 = 0LL;
      }
      v65 = (__int64)*a1;
      v214 = v64;
      v66 = BmlFillPreferredMonitorMode(v65, v49, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v48 = v66;
      if ( v66 < 0 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdTrace(v68, v67, v69, v70);
        v142[3] = *(unsigned int *)(*(_QWORD *)&v19[v50 + 4] + 24LL);
        v143 = *(unsigned int *)(*(_QWORD *)&v19[v50 + 4] + 28LL);
        v142[5] = v213;
        v142[4] = v143;
        v142[6] = v48;
        *(_QWORD *)((char *)*a1 + 104 * v49 + 52) = 0LL;
        goto LABEL_140;
      }
      v71 = *(_QWORD *)&v19[v50 + 4];
      if ( (*(_QWORD *)v71 & 0x40000000000LL) == 0 )
        goto LABEL_54;
      AdapterDefaultScaling = *(_DWORD *)(v71 + 136);
      if ( AdapterDefaultScaling <= 0 )
        goto LABEL_149;
      if ( AdapterDefaultScaling <= 5 )
      {
        v72 = v203;
        goto LABEL_56;
      }
      if ( AdapterDefaultScaling == 253 )
      {
LABEL_54:
        v72 = v203;
      }
      else
      {
        if ( AdapterDefaultScaling != 255 )
        {
LABEL_149:
          v72 = v203;
          v19[v50 + 6] = VIDPN_MGR::GetAdapterDefaultScaling(v203);
          v153 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v150, v152);
          v153[3] = (int)v19[v50 + 6];
          v153[4] = *a1;
          v153[5] = v49;
          v153[6] = *(int *)(*(_QWORD *)&v19[v50 + 4] + 136LL);
          WdLogEvent5_WdWarning(v153);
          goto LABEL_57;
        }
        v72 = v203;
        v148 = *((_QWORD *)v203 + 1);
        if ( !v148 )
        {
          v149 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v149);
          v148 = *((_QWORD *)v203 + 1);
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v148 + 16)) < 1105 )
        {
          AdapterDefaultScaling = 255;
          goto LABEL_56;
        }
      }
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v72);
LABEL_56:
      v19[v50 + 6] = AdapterDefaultScaling;
LABEL_57:
      v74 = *(_QWORD *)&v19[v50 + 4];
      if ( (*(_QWORD *)v74 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v74 + 88))
        && (*(_DWORD *)(v75 + 8) & 0x200LL) == 0 )
      {
        PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v72, *(_DWORD *)(v75 + 28));
        v155 = *((_QWORD *)a2 + 6);
        v156 = *(_QWORD *)(v155 + 8);
        if ( !v156 )
        {
          v157 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v157);
          v156 = *(_QWORD *)(v155 + 8);
        }
        LODWORD(v48) = IsVirtualizationDisabledForTarget(
                         *(DXGADAPTER **)(v156 + 16),
                         *(_DWORD *)(*(_QWORD *)&v19[v50 + 4] + 28LL),
                         (bool *)&v221,
                         &v204);
        if ( (int)v48 < 0 )
        {
          v177 = (_QWORD *)WdLogNewEntry5_WdError(v158);
          v177[3] = *(unsigned int *)(*(_QWORD *)&v19[v50 + 4] + 28LL);
          v177[4] = *(int *)(*(_QWORD *)&v19[v50 + 4] + 20LL);
          v177[5] = *(unsigned int *)(*(_QWORD *)&v19[v50 + 4] + 16LL);
          WdLogEvent5_WdError(v177);
LABEL_140:
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v214, 0LL);
          return (unsigned int)v48;
        }
        if ( PathFromTargetInClientVidPn )
        {
          if ( (_BYTE)v221 )
            goto LABEL_59;
          v159 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
        }
        else
        {
          if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v158) + 222) )
            goto LABEL_59;
          v159 = *((_DWORD *)DXGGLOBAL::GetGlobal(v160) + 222);
        }
        if ( v159 )
        {
          v161 = *(__int64 **)&v19[v50 + 4];
          v162 = *v161;
          if ( (*v161 & 0x200) != 0 )
          {
            if ( (((unsigned __int8)v159 ^ *((_BYTE *)v161 + 132)) & 1) != 0 && (v162 & 0x20000) != 0 )
            {
              v163 = *((_DWORD *)v161 + 38);
              v164 = *((_DWORD *)v161 + 39);
              *v161 &= ~0x800000uLL;
              *((_DWORD *)v161 + 38) = v164;
              *((_DWORD *)v161 + 39) = v163;
            }
          }
          else if ( (v162 & 0x20000) != 0 )
          {
            v165 = WdLogNewEntry5_WdAssertion(v158);
            WdLogEvent5_WdAssertion(v165);
          }
          *v161 |= 0x200uLL;
          *((_DWORD *)v161 + 33) = v159;
          v19[v50 + 7] = v159;
          goto LABEL_65;
        }
      }
LABEL_59:
      v76 = *(_DWORD **)&v19[v50 + 4];
      if ( (*v76 & 0x200LL) == 0 )
      {
        v77 = (__int64)*a1;
        if ( !(unsigned __int8)BmlIsSecondaryClonePath(*a1, v49, &v212) )
        {
          v79 = D3DKMDT_VPPR_IDENTITY;
          goto LABEL_62;
        }
        v170 = 104LL * v212;
        v79 = *(_DWORD *)(v170 + v77 + 28);
        if ( v79 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v171 = WdLogNewEntry5_WdAssertion(v78);
          WdLogEvent5_WdAssertion(v171);
        }
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v79) != D3DKMDT_VPPR_IDENTITY )
        {
          v172 = WdLogNewEntry5_WdAssertion(v78);
          WdLogEvent5_WdAssertion(v172);
        }
        if ( !v218 )
          goto LABEL_62;
        v173 = *(_DWORD *)(v50 * 4 + v77 + 52);
        v174 = *(_DWORD *)(v50 * 4 + v77 + 56);
        LOBYTE(v78) = *(_DWORD *)(v170 + v77 + 52) < *(_DWORD *)(v170 + v77 + 56);
        if ( (_BYTE)v78 == v173 < v174 )
          goto LABEL_62;
        v175 = v79 - 1;
        if ( v173 >= v174 )
        {
          if ( v175 > 3 )
            goto LABEL_189;
          v79 += 4;
        }
        else
        {
          if ( v175 <= 3 )
          {
            v79 += 12;
            goto LABEL_62;
          }
LABEL_189:
          v79 = D3DKMDT_VPPR_NOTSPECIFIED;
        }
LABEL_62:
        if ( v79 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v176 = WdLogNewEntry5_WdAssertion(v78);
          WdLogEvent5_WdAssertion(v176);
        }
LABEL_64:
        v19[v50 + 7] = v79;
        goto LABEL_65;
      }
      v79 = v76[33];
      if ( (unsigned int)(D3DKMDT_VPPR_GET_CONTENT_ROTATION(v79) - 1) <= 3 )
      {
        if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v79) == D3DKMDT_VPPR_IDENTITY )
        {
          if ( v218 && (unsigned __int8)BmlIsSecondaryClonePath(*a1, v49, &v211) )
          {
            v166 = *(_DWORD *)(*((_QWORD *)*a1 + 13 * v211 + 2) + 132LL);
            if ( (unsigned int)(v166 - 1) > 0xF
              || (unsigned int)(v79 - 1) > 0xF
              || v166 > 4
              || (unsigned int)((v79 - v166 + 4) % 4) > 3 )
            {
              v79 = D3DKMDT_VPPR_NOTSPECIFIED;
            }
            else
            {
              v79 = v166 - 4 + 4 * ((v79 - v166 + 4) % 4 + 1);
            }
          }
          goto LABEL_64;
        }
        if ( v218 )
        {
          if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v49, 0LL) )
          {
            v19[v50 + 7] = *(_DWORD *)(*(_QWORD *)&v19[v50 + 4] + 132LL);
          }
          else
          {
            v168 = (_QWORD *)WdLogNewEntry5_WdAssertion(v167);
            v168[3] = *a1;
            v168[4] = v49;
            v168[5] = *(int *)(*(_QWORD *)&v19[v50 + 4] + 132LL);
            WdLogEvent5_WdAssertion(v168);
            v19[v50 + 7] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v19[v50 + 4] + 132LL));
          }
          goto LABEL_65;
        }
      }
      v169 = (_QWORD *)WdLogNewEntry5_WdWarning(v107, v106, v108);
      v169[3] = *a1;
      v169[4] = v49;
      v169[5] = *(int *)(*(_QWORD *)&v19[v50 + 4] + 132LL);
      WdLogEvent5_WdWarning(v169);
      v19[v50 + 7] = 1;
LABEL_65:
      v80 = *(_QWORD *)&v19[v50 + 4];
      if ( *(_BYTE *)(v80 + 129) && (*(_DWORD *)v80 & 0x20000LL) != 0 )
      {
        if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v19[v50 + 7]) - 2) & 0xFFFFFFFD) != 0 )
        {
          v19[v50 + 27] = *(_DWORD *)(v81 + 152);
          v82 = *(_DWORD *)(v81 + 156);
        }
        else
        {
          v19[v50 + 27] = *(_DWORD *)(v81 + 156);
          v82 = *(_DWORD *)(v81 + 152);
        }
        v19[v50 + 28] = v82;
        v19[v50 + 29] |= 1u;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v49, 0LL) )
        HIWORD(v19[v50 + 16]) = 0;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v214, 0LL);
      v19 = *a1;
      ++v49;
      v39 = *(unsigned __int8 *)*a1;
    }
    while ( v49 < v39 );
  }
  v209 = 0;
  v83 = 0;
  if ( (_BYTE)v39 )
  {
    do
    {
      v84 = 104LL * v83;
      v215 = v84;
      if ( !(unsigned __int8)BmlIsSecondaryClonePath(v19, v83, 0LL) )
      {
        v85 = (unsigned __int8 *)*a1;
        v86 = 0;
        v206 = 0LL;
        v87 = 0;
        v88 = v83;
        v208 = v83;
        if ( v83 < *v85 )
        {
          do
          {
            v89 = 104LL * v88;
            v90 = *(_QWORD *)&v85[v89 + 16];
            if ( *(_DWORD *)(v90 + 24) == *(_DWORD *)(*(_QWORD *)((char *)v19 + v84 + 16) + 24LL) )
            {
              v207 = *(_QWORD *)&v85[v89 + 44];
              v91 = v207;
              v92 = HIDWORD(v207);
              if ( v218
                && ((v93 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)&v85[v89 + 28]),
                     v93 == D3DKMDT_VPPR_ROTATE90)
                 || v93 == D3DKMDT_VPPR_ROTATE270) )
              {
                v94 = HIDWORD(v207);
                LODWORD(v92) = v91;
                v207 = __PAIR64__(v91, HIDWORD(v207));
                v91 = v207;
              }
              else
              {
                v94 = v207;
              }
              if ( !v94 || !(_DWORD)v92 )
              {
                v116 = WdLogNewEntry5_WdAssertion(v90);
                WdLogEvent5_WdAssertion(v116);
                v88 = v208;
              }
              if ( v86 && v87 )
              {
                if ( v86 > v94 )
                  v86 = v94;
                LODWORD(v206) = v86;
                if ( v87 > HIDWORD(v207) )
                  v87 = HIDWORD(v207);
                HIDWORD(v206) = v87;
              }
              else
              {
                v206 = v91;
                v86 = v91;
                v87 = HIDWORD(v91);
              }
              v84 = v215;
            }
            v85 = (unsigned __int8 *)*a1;
            v208 = ++v88;
          }
          while ( v88 < *v85 );
          v83 = v209;
        }
        *(_QWORD *)((char *)v19 + v84 + 36) = v206;
        *(_DWORD *)((char *)v19 + v84 + 60) = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)((char *)v19 + v84 + 52));
      }
      v19 = *a1;
      v209 = ++v83;
      v39 = *(unsigned __int8 *)v19;
    }
    while ( v83 < v39 );
  }
  v95 = 0;
  if ( !(_BYTE)v39 )
    return 0LL;
  while ( 1 )
  {
    v96 = 26LL * v95;
    v97 = *(_QWORD *)&v19[v96 + 4];
    v219 = DMMVIDPNTOPOLOGY::FindPath(v213, *(_DWORD *)(v97 + 24), *(_DWORD *)(v97 + 28));
    v100 = *((_QWORD *)v219 + 11);
    v101 = *(_QWORD *)(v100 + 104);
    if ( v101 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v101 + 96));
      v102 = *(struct DMMVIDPNSOURCEMODESET **)(v100 + 104);
      v97 = *(_QWORD *)&v19[v96 + 4];
    }
    else
    {
      v102 = 0LL;
    }
    v103 = *(_QWORD *)(v97 + 8);
    v217[0] = (__int64)v102;
    if ( (v103 & 0x820B8F) == 0 )
    {
      v104 = v219;
      goto LABEL_96;
    }
    if ( (*(_QWORD *)v97 & v103 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*a1, v95, 0LL) )
    {
      v179 = WdLogNewEntry5_WdWarning(v101, v98, v99);
      *(_QWORD *)(v179 + 24) = *a1;
      *(_QWORD *)(v179 + 32) = v95;
      WdLogEvent5_WdWarning(v179);
      v104 = v219;
LABEL_96:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v104) )
      {
        v180 = (unsigned __int8 *)*a1;
        for ( i = 0; i < *v180; ++i )
        {
          v182 = 104LL * i;
          if ( *(_DWORD *)(*(_QWORD *)&v180[v182 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&v19[v96 + 4] + 24LL) )
            *(_WORD *)&v180[v182 + 66] = 0;
        }
        HIWORD(v19[v96 + 17]) = 0;
      }
      goto LABEL_97;
    }
    v205 = -1;
    if ( (int)BmlGetNextBestSourceMode(
                (__int64)*a1,
                (__int64)a2,
                (unsigned __int16)v95,
                (__int64)v102,
                0xFFFFFFFF,
                &v205) >= 0 )
      break;
    v178 = *(_QWORD *)&v19[v96 + 4];
    if ( (*(_QWORD *)v178 & 0x40000000000000LL) == 0 )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v178 + 96),
        *(_DWORD *)(v178 + 100),
        *(_DWORD *)(v178 + 116),
        *(_QWORD *)(v178 + 16));
      v186 = (_QWORD *)WdLogNewEntry5_WdWarning(v184, v183, v185);
      v186[3] = *a1;
      v186[5] = v95;
      v186[6] = v205;
      v186[4] = a2;
      WdLogEvent5_WdWarning(v186);
      LODWORD(v110) = -1071774970;
      goto LABEL_213;
    }
    *(_QWORD *)(v178 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_97:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v217, 0LL);
    v19 = *a1;
    if ( ++v95 >= *(unsigned __int8 *)*a1 )
      return 0LL;
  }
  v109 = VIDPN_MGR::PinVidPnSourceMode(v203, v102, v205, 1);
  v110 = v109;
  if ( v109 >= 0 )
  {
    v104 = v219;
    HIWORD(v19[v96 + 16]) = 0;
    v111 = *((_QWORD *)v219 + 12);
    v112 = *(_QWORD *)(v111 + 104);
    if ( v112 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v112 + 96));
      v113 = *(DMMVIDPNTARGETMODESET **)(v111 + 104);
    }
    else
    {
      v113 = 0LL;
    }
    v114 = *(_QWORD *)&v19[v96 + 4];
    v216 = v113;
    if ( (*(_BYTE *)v114 & 0x87) == 0x87
      && (*(_BYTE *)(v114 + 8) & 0x87) == 0x87
      && *(_DWORD *)(v114 + 56)
      && *(_DWORD *)(v114 + 52) )
    {
      v210 = -1;
      if ( (int)BmlGetNextBestTargetMode(
                  (__int64)*a1,
                  (__int64)a2,
                  (unsigned __int16)v95,
                  v113,
                  (__int64)v102,
                  0xFFFFFFFF,
                  &v210) < 0 )
      {
        v193 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v19[v96 + 4] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v19[v96 + 4] + 56LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v194 + 44), *(_DWORD *)(v194 + 48), v193, *(_QWORD *)(v194 + 16));
        v198 = (_QWORD *)WdLogNewEntry5_WdWarning(v196, v195, v197);
        v198[3] = *a1;
        v198[5] = v95;
        v198[4] = a2;
        WdLogEvent5_WdWarning(v198);
        LODWORD(v110) = -1071774970;
        goto LABEL_211;
      }
      v110 = (int)VIDPN_MGR::PinVidPnTargetMode(v203, v113, v210, 1);
      v115 = 0;
      if ( (int)v110 < 0 )
      {
        v187 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v19[v96 + 4] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v19[v96 + 4] + 56LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v188 + 44), *(_DWORD *)(v188 + 48), v187, *(_QWORD *)(v188 + 16));
        v192 = (_QWORD *)WdLogNewEntry5_WdWarning(v190, v189, v191);
        v192[4] = *a1;
        v192[6] = v95;
        v192[3] = v110;
        v192[5] = a2;
        WdLogEvent5_WdWarning(v192);
LABEL_211:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v216, 0LL);
        goto LABEL_213;
      }
    }
    else
    {
      v115 = -1;
    }
    HIWORD(v19[v96 + 17]) = v115;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v216, 0LL);
    goto LABEL_96;
  }
  DxgkLogCodePointPacket(
    0x15u,
    *(_DWORD *)(*(_QWORD *)&v19[v96 + 4] + 96LL),
    *(_DWORD *)(*(_QWORD *)&v19[v96 + 4] + 100LL),
    *(_DWORD *)(*(_QWORD *)&v19[v96 + 4] + 116LL),
    *(_QWORD *)(*(_QWORD *)&v19[v96 + 4] + 16LL));
  v202 = (_QWORD *)WdLogNewEntry5_WdWarning(v200, v199, v201);
  v202[4] = *a1;
  v202[6] = v95;
  v202[3] = v110;
  v202[5] = a2;
  WdLogEvent5_WdWarning(v202);
LABEL_213:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v217, 0LL);
  return (unsigned int)v110;
}
